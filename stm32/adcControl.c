#include <ctype.h>
#include "common.h"

//#define ENABLE_LOG
//#define ENABLE_ADC_DUMP
//#define MANUAL_DMA_TEST
//#define DISABLE_ADC
//#define ENABLE_SW_TRG

#ifndef ENABLE_LOG
#define printf(fmt, ...)
#define pr_err(fmt, ...)
#else
#define pr_err(fmt, ...) printf("%18s:%3d\n" fmt, __func__, __LINE__, ##__VA_ARGS__)
#endif

/* Max value with a full range of 12 bits */
#define RANGE_12BITS		((uint32_t)4095)

/* number of element of sampled data */
#define ADC_SAMPLES_BUFFSIZE  64

/* ADC handler declaration */
ADC_HandleTypeDef    AdcHandle;
/* TIM handler declaration */
TIM_HandleTypeDef    TimHandle;

/* Variable containing ADC conversions results */
volatile uint16_t ADC_samples[ADC_SAMPLES_BUFFSIZE];
volatile uint16_t samples[ADC_SAMPLES_BUFFSIZE];
static volatile int AWD_event = 0;
volatile uint16_t triggerLevel;
volatile uint16_t triggerType;
volatile uint16_t sampleRate;

#ifndef DISABLE_ADC
/**
  * @brief  ADC configuration
  * @param  None
  * @retval None
  */
static void ADC_Config(void)
{
	ADC_ChannelConfTypeDef   sConfig;
	ADC_AnalogWDGConfTypeDef AnalogWDGConfig;

	/* Configuration of ADC init structure: ADC parameters and regular group */
	AdcHandle.Instance = ADC2;

	AdcHandle.Init.ClockPrescaler        = ADC_CLOCK_SYNC_PCLK_DIV4;
	AdcHandle.Init.Resolution            = ADC_RESOLUTION_12B;
	AdcHandle.Init.DataAlign             = ADC_DATAALIGN_RIGHT;
	/* Sequencer disabled (ADC conversion on only 1 channel: channel set on rank 1) */
	AdcHandle.Init.ScanConvMode          = DISABLE;
	AdcHandle.Init.EOCSelection          = ADC_EOC_SINGLE_CONV;
	AdcHandle.Init.LowPowerAutoWait      = DISABLE;
	/* Continuous mode disabled to have only 1 conversion at each conversion trig */
	AdcHandle.Init.ContinuousConvMode    = DISABLE;
	/* Parameter discarded because sequencer is disabled */
	AdcHandle.Init.NbrOfConversion       = 1;
	/* Parameter discarded because sequencer is disabled */
	AdcHandle.Init.DiscontinuousConvMode = DISABLE;
	/* Parameter discarded because sequencer is disabled */
	AdcHandle.Init.NbrOfDiscConversion   = 1;
#ifndef ENABLE_SW_TRG
	/* Trig of conversion start done by external event */
	AdcHandle.Init.ExternalTrigConv      = ADC_EXTERNALTRIGCONV_T1_TRGO;
	AdcHandle.Init.ExternalTrigConvEdge  = ADC_EXTERNALTRIGCONVEDGE_RISING;
#else
	AdcHandle.Init.ExternalTrigConv      = ADC_SOFTWARE_START;
	AdcHandle.Init.ExternalTrigConvEdge  = ADC_EXTERNALTRIGCONVEDGE_NONE;
#endif
	AdcHandle.Init.DMAContinuousRequests = ENABLE;
	AdcHandle.Init.Overrun               = ADC_OVR_DATA_OVERWRITTEN;

	if (HAL_ADC_Init(&AdcHandle) != HAL_OK) {
		/* ADC initialization error */
		pr_err();
	}

	/* Configuration of channel on ADC regular group on sequencer rank 1 */
	/* Note: Considering IT occurring after each ADC conversion if ADC          */
	/*       conversion is out of the analog watchdog widow selected (ADC IT    */
	/*       enabled), select sampling time and ADC clock with sufficient       */
	/*       duration to not create an overhead situation in IRQHandler.        */
	sConfig.Channel      = ADC_CHANNEL_1;
	sConfig.Rank         = ADC_REGULAR_RANK_1;
	sConfig.SamplingTime = ADC_SAMPLETIME_181CYCLES_5;
	sConfig.SingleDiff   = ADC_SINGLE_ENDED;
	sConfig.OffsetNumber = ADC_OFFSET_NONE;
	sConfig.Offset       = 0;

	if (HAL_ADC_ConfigChannel(&AdcHandle, &sConfig) != HAL_OK) {
		/* Channel Configuration Error */
		pr_err();
	}

#if 1
	/* Analog watchdog 1 configuration */
	AnalogWDGConfig.WatchdogNumber = ADC_ANALOGWATCHDOG_1;
	AnalogWDGConfig.WatchdogMode = ADC_ANALOGWATCHDOG_ALL_REG;
	AnalogWDGConfig.Channel = ADC_CHANNEL_1;
	AnalogWDGConfig.ITMode = ENABLE;
	AnalogWDGConfig.HighThreshold = (RANGE_12BITS * 6/8);
	//AnalogWDGConfig.LowThreshold = (RANGE_12BITS * 2/8);
	HAL_ADC_AnalogWDGConfig(&AdcHandle, &AnalogWDGConfig);
#endif
}

#ifndef ENABLE_SW_TRG
static void TIM_Config(void)
{
	TIM_MasterConfigTypeDef sMasterConfig;

	/* Time Base configuration */
	TimHandle.Instance = TIM1;

	/* Configure timer frequency */
	/* This should be changed according to the sampling rate setting by frontend */
#if 1
	TimHandle.Init.Period = ((HAL_RCC_GetPCLK2Freq() / (1099 * 1000)) - 1);
	TimHandle.Init.Prescaler = (1099-1);
#else
	TimHandle.Init.Period = 10000 - 1;
	TimHandle.Init.Prescaler = (uint32_t)(SystemCoreClock / 10000) - 1;
#endif
	TimHandle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	TimHandle.Init.CounterMode = TIM_COUNTERMODE_UP;
	TimHandle.Init.RepetitionCounter = 0x0;
	TimHandle.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;

	if (HAL_TIM_Base_Init(&TimHandle) != HAL_OK) {
		/* Timer initialization Error */
		pr_err();
	}

	/* Timer TRGO selection */
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
	sMasterConfig.MasterOutputTrigger2 = TIM_TRGO2_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;

	if (HAL_TIMEx_MasterConfigSynchronization(&TimHandle, &sMasterConfig) != HAL_OK) {
		/* Timer TRGO selection Error */
		pr_err();
	}
}
#endif /* ENABLE_SW_TRG */
#endif /* DISABLE_ADC */

/* this function will be called from HAL_ADC_Init function */
void HAL_ADC_MspInit(ADC_HandleTypeDef *hadc)
{
	GPIO_InitTypeDef          GPIO_InitStruct;
	static DMA_HandleTypeDef  DmaHandle;
	RCC_PeriphCLKInitTypeDef  RCC_PeriphCLKInitStruct;

	/* Enable clock of GPIO associated to the peripheral channels */
	__HAL_RCC_GPIOA_CLK_ENABLE();

	/* Enable clock of ADC2 peripheral */
	__HAL_RCC_ADC2_CLK_ENABLE();

	/* Note: In case of usage of asynchronous clock derived from ADC dedicated  */
	/*       PLL 72MHz, with ADC setting                                        */
	/*       "AdcHandle.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1",            */
	/*       the clock source has to be enabled at RCC top level using macro    */
	/*       "__HAL_RCC_ADC12_CONFIG(RCC_ADC12PLLCLK_DIV1)" or function         */
	/*       "HAL_RCCEx_PeriphCLKConfig()" (refer to comments in file           */
	/*       "stm32f3_hal_adc.c_ex" header).                                    */

	/* Enable asynchronous clock source of ADC2 */
	RCC_PeriphCLKInitStruct.PeriphClockSelection = RCC_PERIPHCLK_ADC12;
	RCC_PeriphCLKInitStruct.Adc12ClockSelection = RCC_ADC12PLLCLK_DIV1;
	HAL_RCCEx_PeriphCLKConfig(&RCC_PeriphCLKInitStruct);

	/* Enable clock of DMA associated to the peripheral */
	__HAL_RCC_DMA2_CLK_ENABLE();

	/* Configure GPIO pin of the selected ADC channel */
	GPIO_InitStruct.Pin = GPIO_PIN_4;
	GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	/* Configure DMA parameters */
	DmaHandle.Instance = DMA2_Channel1;

	DmaHandle.Init.Direction           = DMA_PERIPH_TO_MEMORY;
	DmaHandle.Init.PeriphInc           = DMA_PINC_DISABLE;
	DmaHandle.Init.MemInc              = DMA_MINC_ENABLE;
	/* Transfer from ADC by half-word to match with ADC resolution 10 or 12 bits */
	DmaHandle.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
	/* Transfer to memory by half-word to match with buffer variable type: half-word */
	DmaHandle.Init.MemDataAlignment    = DMA_MDATAALIGN_HALFWORD;
	DmaHandle.Init.Mode                = DMA_CIRCULAR;
	DmaHandle.Init.Priority            = DMA_PRIORITY_HIGH;

	/* Deinitialize  & Initialize the DMA for new transfer */
	HAL_DMA_DeInit(&DmaHandle);
	HAL_DMA_Init(&DmaHandle);

	/* Associate the initialized DMA handle to the ADC handle */
	__HAL_LINKDMA(hadc, DMA_Handle, DmaHandle);

	/* NVIC configuration for DMA interrupt (transfer completion or error) */
	/* Priority: high-priority */
	HAL_NVIC_SetPriority(DMA2_Channel1_IRQn, 1, 0);
	HAL_NVIC_EnableIRQ(DMA2_Channel1_IRQn);

	/* NVIC configuration for ADC interrupt */
	/* Priority: high-priority */
	HAL_NVIC_SetPriority(ADC1_2_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(ADC1_2_IRQn);
}

#ifndef DISABLE_ADC
static void TaskADCInit(void *data)
{
	GPIO_InitTypeDef GPIO_InitStruct;

	GPIO_InitStruct.Pin = B1_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	//GPIO_InitStruct.Speed = GPIO_SPEED_SLOW;
	GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
	HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 1, 0);
	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

	/* Configure the ADC peripheral */
	ADC_Config();

	/* Run the ADC calibration in single-ended mode */
	if (HAL_ADCEx_Calibration_Start(&AdcHandle, ADC_SINGLE_ENDED) != HAL_OK) {
		/* Calibration Error */
		pr_err();
	}

	/* TIM1 peripheral clock enable */
	__HAL_RCC_TIM1_CLK_ENABLE();

#ifndef ENABLE_SW_TRG
	/* Configure the TIM peripheral */
	TIM_Config();

	/* Timer counter enable */
	if (HAL_TIM_Base_Start(&TimHandle) != HAL_OK) {
		/* Counter Enable Error */
		pr_err();
	}
#endif

	/* Start ADC conversion on regular group with transfer by DMA */
	if (HAL_ADC_Start_DMA(&AdcHandle,
			(uint32_t *)ADC_samples, ADC_SAMPLES_BUFFSIZE) != HAL_OK) {
		/* Start Error */
		pr_err();
	}
}
#else
static void TaskADCInit(void *data) {}
#endif

void TaskADC(void *data)
{
}

void ADC1_2_IRQHandler(void)
{
	//pr_err("");
	HAL_ADC_IRQHandler(&AdcHandle);
}

void DMA2_Channel1_IRQHandler(void)
{
	//printf("DMA!!\r\n");
	HAL_DMA_IRQHandler(AdcHandle.DMA_Handle);

}

/* User Button Interrupt Handler */
void EXTI15_10_IRQHandler(void)
{
	HAL_GPIO_EXTI_IRQHandler(B1_Pin);
	pr_err("");
}

/*
  * @brief  Conversion DMA half-transfer callback in non blocking mode
  * @param  hadc: ADC handle
  * @retval None
  */
void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef* hadc)
{
	//pr_err("");
}

/**
  * @brief  Conversion complete callback in non blocking mode
  * @param  AdcHandle : AdcHandle handle
  * @note   This example shows a simple way to report end of conversion
  *         and get conversion result. You can add your own implementation.
  * @retval None
  */
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{
	pr_err("");

	if (AWD_event) {
		/* copy sampled data to the another buffer to be used to send to frontend */
		memcpy((void *)samples, (void *)ADC_samples,
				sizeof(uint16_t)*ADC_SAMPLES_BUFFSIZE);
		AWD_event = 0;
		pr_err("memcpy!!\n");

#ifdef ENABLE_ADC_DUMP
		//hex_dump(samples, 512);
		for (int i=0;i<ADC_SAMPLES_BUFFSIZE;i++) {
			printf("%03X ", samples[i]);
			if ((i+1)%16 == 0)
				printf("\n");
		}
#endif
	}

	/* enable Analog Watchdog again */
	__HAL_ADC_ENABLE_IT(hadc, ADC_IT_AWD1);
}

/**
  * @brief  Analog watchdog callback in non blocking mode.
  * @note:  In case of several analog watchdog enabled, if needed to know
            which one triggered and on which ADCx, check Analog Watchdog flag
            ADC_FLAG_AWD1/2/3 into HAL_ADC_LevelOutOfWindowCallback() function.
            For example:"if (__HAL_ADC_GET_FLAG(hadc1, ADC_FLAG_AWD1) != RESET)"
  * @param  hadc: ADC handle
  * @retval None
  */
void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef* hadc)
{
	/* Set variable to report analog watchdog out of window status to main program. */
	pr_err("");

	/* disable Analog Watchdog temporarily to save captured samples */
	__HAL_ADC_DISABLE_IT(hadc, ADC_IT_AWD1);

	AWD_event = 1;

#if 0
	if (HAL_ADC_Stop_DMA(hadc) != HAL_OK) {
		pr_err();
	}

	if (HAL_ADC_Start_DMA(&hadc,
			(uint32_t *)ADC_samples, ADC_SAMPLES_BUFFSIZE) != HAL_OK) {
		pr_err();
	}
#endif
}

/**
  * @brief  ADC error callback in non blocking mode
  *        (ADC conversion with interruption or transfer by DMA)
  * @param  hadc: ADC handle
  * @retval None
  */
void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc)
{
	/* In case of ADC error, call main error handler */
	pr_err("");
}

ADD_TASK(TaskADC, TaskADCInit, NULL, "ADC task")
