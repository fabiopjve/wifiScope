/* Header file generated automatically from SVD file
 * for STM32F303xE
 *  DO NOT EDIT 
 */
#include <stdio.h>
#include <stdint.h>
#include "decoder.h"

const Field_t TIM2_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode               selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM2_CR2_fields[] = {
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
};

const Field_t TIM2_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x3c\x30\xd3", 3, 1 },  /* OCCS: OCREF clear selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
   { "\x4c\xd4\xe5\x78", 16, 1 },  /* SMS_3: Slave mode selection bit3 */
};

const Field_t TIM2_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt               enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt               enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt               enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request               enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request               enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request               enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM2_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt               flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt               flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt               flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture               flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture               flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture               flag */
};

const Field_t TIM2_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2               generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3               generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
};

const Field_t TIM2_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: Output compare 1 clear               enable */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output compare 2 fast               enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output compare 2 preload               enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output compare 2 mode */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: Output compare 2 clear               enable */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output compare 1 mode bit               3 */
   { "\x3c\x37\x4d\x95\xe0", 24, 1 },  /* OC2M_3: Output compare 2 mode bit               3 */
};

const Field_t TIM2_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/compare 2               selection */
   { "\x24\x37\x50\x4c\x30", 10, 2 },  /* IC2PSC: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM2_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3               selection */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: Output compare 3 fast               enable */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: Output compare 3 preload               enable */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: Output compare 3 mode */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: Output compare 3 clear               enable */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: Output compare 4 fast               enable */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: Output compare 4 preload               enable */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: Output compare 4 mode */
   { "\x3d\xd7\xc3\x14", 15, 1 },  /* O24CE: Output compare 4 clear               enable */
   { "\x3c\x37\x8d\x95\xe0", 16, 1 },  /* OC3M_3: Output compare 3 mode bit3 */
   { "\x3c\x37\xcd\x95\xe0", 24, 1 },  /* OC4M_3: Output compare 4 mode bit3 */
};

const Field_t TIM2_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3               selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM2_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output               enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output               enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output               enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 3 output               Polarity */
};

const Field_t TIM2_CNT_fields[] = {
   { "\x0c\xe5\x0c", 0, 16 },  /* CNTL: Low counter value */
   { "\x0c\xe5\x08", 16, 15 },  /* CNTH: High counter value */
   { "\x0c\xe5\x25\x3d\x29\x55\x24\x60\xd0\x64", 31, 1 },  /* CNT_or_UIFCPY: if IUFREMAP=0 than CNT with read write               access else UIFCPY with read only               access */
};

const Field_t TIM2_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM2_ARR_fields[] = {
   { "\x05\x24\x8c", 0, 16 },  /* ARRL: Low Auto-reload value */
   { "\x05\x24\x88", 16, 16 },  /* ARRH: High Auto-reload value */
};

const Field_t TIM2_CCR1_fields[] = {
   { "\x0c\x34\x9c\x30", 0, 16 },  /* CCR1L: Low Capture/Compare 1               value */
   { "\x0c\x34\x9c\x20", 16, 16 },  /* CCR1H: High Capture/Compare 1 value (on               TIM2) */
};

const Field_t TIM2_CCR2_fields[] = {
   { "\x0c\x34\x9d\x30", 0, 16 },  /* CCR2L: Low Capture/Compare 2               value */
   { "\x0c\x34\x9d\x20", 16, 16 },  /* CCR2H: High Capture/Compare 2 value (on               TIM2) */
};

const Field_t TIM2_CCR3_fields[] = {
   { "\x0c\x34\x9e\x30", 0, 16 },  /* CCR3L: Low Capture/Compare value */
   { "\x0c\x34\x9e\x20", 16, 16 },  /* CCR3H: High Capture/Compare value (on               TIM2) */
};

const Field_t TIM2_CCR4_fields[] = {
   { "\x0c\x34\x9f\x30", 0, 16 },  /* CCR4L: Low Capture/Compare value */
   { "\x0c\x34\x9f\x20", 16, 16 },  /* CCR4H: High Capture/Compare value (on               TIM2) */
};

const Field_t TIM2_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM2_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM2_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM2_CR1_fields, 9}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM2_CR2_fields, 3}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM2_SMCR_fields, 9}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM2_DIER_fields, 12}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM2_SR_fields, 10}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM2_EGR_fields, 6}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM2_CCMR1_Output_fields, 12}, /* CCMR1_Output: capture/compare mode register 1 (output           mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM2_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM2_CCMR2_Output_fields, 12}, /* CCMR2_Output: capture/compare mode register 2 (output           mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM2_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM2_CCER_fields, 12}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM2_CNT_fields, 3}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM2_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM2_ARR_fields, 2}, /* ARR: auto-reload register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM2_CCR1_fields, 2}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM2_CCR2_fields, 2}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM2_CCR3_fields, 2}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM2_CCR4_fields, 2}, /* CCR4: capture/compare register 4 */
   {"\x10\x34\x80", 72, 32, 0, TIM2_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM2_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t TIM6_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM6_CR2_fields[] = {
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
};

const Field_t TIM6_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
};

const Field_t TIM6_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
};

const Field_t TIM6_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
};

const Field_t TIM6_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: Low counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF Copy */
};

const Field_t TIM6_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM6_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Low Auto-reload value */
};

const Register_t TIM6_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM6_CR1_fields, 6}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM6_CR2_fields, 1}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM6_DIER_fields, 2}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM6_SR_fields, 1}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM6_EGR_fields, 1}, /* EGR: event generation register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM6_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM6_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM6_ARR_fields, 1}, /* ARR: auto-reload register */
};

const Field_t RTC_TR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
};

const Field_t RTC_DR_fields[] = {
   { "\x11\x50", 0, 4 },  /* DU: Date units in BCD format */
   { "\x11\x40", 4, 2 },  /* DT: Date tens in BCD format */
   { "\x35\x50", 8, 4 },  /* MU: Month units in BCD format */
   { "\x35\x40", 12, 1 },  /* MT: Month tens in BCD format */
   { "\x5c\x45\x40", 13, 3 },  /* WDU: Week day units */
   { "\x65\x50", 16, 4 },  /* YU: Year units in BCD format */
   { "\x65\x40", 20, 4 },  /* YT: Year tens in BCD format */
};

const Field_t RTC_CR_fields[] = {
   { "\x5c\x32\xd3\x14\xc0", 0, 3 },  /* WCKSEL: Wakeup clock selection */
   { "\x51\x31\x44\x1c\x50", 3, 1 },  /* TSEDGE: Time-stamp event active               edge */
   { "\x48\x51\x83\x2c\xf3\x80", 4, 1 },  /* REFCKON: Reference clock detection enable (50 or               60 Hz) */
   { "\x09\x94\x13\x20\x11\x00", 5, 1 },  /* BYPSHAD: Bypass the shadow               registers */
   { "\x18\xd5\x00", 6, 1 },  /* FMT: Hour format */
   { "\x04\xc4\x81\x14", 8, 1 },  /* ALRAE: Alarm A enable */
   { "\x04\xc4\x82\x14", 9, 1 },  /* ALRBE: Alarm B enable */
   { "\x5d\x55\x05", 10, 1 },  /* WUTE: Wakeup timer enable */
   { "\x51\x31\x40", 11, 1 },  /* TSE: Time stamp enable */
   { "\x04\xc4\x81\x24\x50", 12, 1 },  /* ALRAIE: Alarm A interrupt enable */
   { "\x04\xc4\x82\x24\x50", 13, 1 },  /* ALRBIE: Alarm B interrupt enable */
   { "\x5d\x55\x09\x14", 14, 1 },  /* WUTIE: Wakeup timer interrupt               enable */
   { "\x51\x32\x45", 15, 1 },  /* TSIE: Time-stamp interrupt               enable */
   { "\x04\x41\x1c\x20", 16, 1 },  /* ADD1H: Add 1 hour (summer time               change) */
   { "\x4d\x50\x9c\x20", 17, 1 },  /* SUB1H: Subtract 1 hour (winter time               change) */
   { "\x08\xb4\x00", 18, 1 },  /* BKP: Backup */
   { "\x0c\xf4\xc5\x30", 19, 1 },  /* COSEL: Calibration output               selection */
   { "\x40\xf3\x00", 20, 1 },  /* POL: Output polarity */
   { "\x3d\x31\x4c", 21, 2 },  /* OSEL: Output selection */
   { "\x0c\xf1\x40", 23, 1 },  /* COE: Calibration output enable */
};

const Field_t RTC_ISR_fields[] = {
   { "\x04\xc4\x81\x5c\x60", 0, 1 },  /* ALRAWF: Alarm A write flag */
   { "\x04\xc4\x82\x5c\x60", 1, 1 },  /* ALRBWF: Alarm B write flag */
   { "\x5d\x55\x17\x18", 2, 1 },  /* WUTWF: Wakeup timer write flag */
   { "\x4c\x84\x06", 3, 1 },  /* SHPF: Shift operation pending */
   { "\x24\xe2\x54\x4c", 4, 1 },  /* INITS: Initialization status flag */
   { "\x49\x31\x80", 5, 1 },  /* RSF: Registers synchronization               flag */
   { "\x24\xe2\x54\x18", 6, 1 },  /* INITF: Initialization flag */
   { "\x24\xe2\x54", 7, 1 },  /* INIT: Initialization mode */
   { "\x04\xc4\x81\x18", 8, 1 },  /* ALRAF: Alarm A flag */
   { "\x04\xc4\x82\x18", 9, 1 },  /* ALRBF: Alarm B flag */
   { "\x5d\x55\x06", 10, 1 },  /* WUTF: Wakeup timer flag */
   { "\x51\x31\x80", 11, 1 },  /* TSF: Time-stamp flag */
   { "\x51\x33\xd6\x18", 12, 1 },  /* TSOVF: Time-stamp overflow flag */
   { "\x50\x13\x50\x70\x60", 13, 1 },  /* TAMP1F: Tamper detection flag */
   { "\x50\x13\x50\x74\x60", 14, 1 },  /* TAMP2F: RTC_TAMP2 detection flag */
   { "\x50\x13\x50\x78\x60", 15, 1 },  /* TAMP3F: RTC_TAMP3 detection flag */
   { "\x48\x50\xc1\x31\x01\x80", 16, 1 },  /* RECALPF: Recalibration pending Flag */
};

const Field_t RTC_PRER_fields[] = {
   { "\x41\x21\x44\x25\x69\x53", 0, 15 },  /* PREDIV_S: Synchronous prescaler               factor */
   { "\x41\x21\x44\x25\x69\x41", 16, 7 },  /* PREDIV_A: Asynchronous prescaler               factor */
};

const Field_t RTC_WUTR_fields[] = {
   { "\x5d\x55\x00", 0, 16 },  /* WUT: Wakeup auto-reload value               bits */
};

const Field_t RTC_ALRMAR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x35\x32\xdc", 7, 1 },  /* MSK1: Alarm A seconds mask */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x35\x32\xdd", 15, 1 },  /* MSK2: Alarm A minutes mask */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
   { "\x35\x32\xde", 23, 1 },  /* MSK3: Alarm A hours mask */
   { "\x11\x50", 24, 4 },  /* DU: Date units or day in BCD               format */
   { "\x11\x40", 28, 2 },  /* DT: Date tens in BCD format */
   { "\x5c\x44\xc5\x30", 30, 1 },  /* WDSEL: Week day selection */
   { "\x35\x32\xdf", 31, 1 },  /* MSK4: Alarm A date mask */
};

const Field_t RTC_ALRMBR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x35\x32\xdc", 7, 1 },  /* MSK1: Alarm B seconds mask */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x35\x32\xdd", 15, 1 },  /* MSK2: Alarm B minutes mask */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
   { "\x35\x32\xde", 23, 1 },  /* MSK3: Alarm B hours mask */
   { "\x11\x50", 24, 4 },  /* DU: Date units or day in BCD               format */
   { "\x11\x40", 28, 2 },  /* DT: Date tens in BCD format */
   { "\x5c\x44\xc5\x30", 30, 1 },  /* WDSEL: Week day selection */
   { "\x35\x32\xdf", 31, 1 },  /* MSK4: Alarm B date mask */
};

const Field_t RTC_WPR_fields[] = {
   { "\x2c\x56\x40", 0, 8 },  /* KEY: Write protection key */
};

const Field_t RTC_SSR_fields[] = {
   { "\x4d\x30", 0, 16 },  /* SS: Sub second value */
};

const Field_t RTC_SHIFTR_fields[] = {
   { "\x4d\x50\x86\x4c", 0, 15 },  /* SUBFS: Subtract a fraction of a               second */
   { "\x04\x41\x1c\x4c", 31, 1 },  /* ADD1S: Add one second */
};

const Field_t RTC_TSTR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
};

const Field_t RTC_TSDR_fields[] = {
   { "\x11\x50", 0, 4 },  /* DU: Date units in BCD format */
   { "\x11\x40", 4, 2 },  /* DT: Date tens in BCD format */
   { "\x35\x50", 8, 4 },  /* MU: Month units in BCD format */
   { "\x35\x40", 12, 1 },  /* MT: Month tens in BCD format */
   { "\x5c\x45\x40", 13, 3 },  /* WDU: Week day units */
};

const Field_t RTC_TSSSR_fields[] = {
   { "\x4d\x30", 0, 16 },  /* SS: Sub second value */
};

const Field_t RTC_CALR_fields[] = {
   { "\x0c\x13\x0d", 0, 9 },  /* CALM: Calibration minus */
   { "\x0c\x13\x17\x72\x10", 13, 1 },  /* CALW16: Use a 16-second calibration cycle               period */
   { "\x0c\x13\x17\x8c", 14, 1 },  /* CALW8: Use an 8-second calibration cycle               period */
   { "\x0c\x13\x10", 15, 1 },  /* CALP: Increase frequency of RTC by 488.5               ppm */
};

const Field_t RTC_TAFCR_fields[] = {
   { "\x50\x13\x50\x70\x50", 0, 1 },  /* TAMP1E: Tamper 1 detection enable */
   { "\x50\x13\x50\x71\x44\x87", 1, 1 },  /* TAMP1TRG: Active level for tamper 1 */
   { "\x50\x13\x50\x24\x50", 2, 1 },  /* TAMPIE: Tamper interrupt enable */
   { "\x50\x13\x50\x74\x50", 3, 1 },  /* TAMP2E: Tamper 2 detection enable */
   { "\x50\x13\x50\x75\x44\x87", 4, 1 },  /* TAMP2TRG: Active level for tamper 2 */
   { "\x50\x13\x50\x78\x50", 5, 1 },  /* TAMP3E: Tamper 3 detection enable */
   { "\x50\x13\x50\x79\x44\x87", 6, 1 },  /* TAMP3TRG: Active level for tamper 3 */
   { "\x50\x13\x50\x51\x30", 7, 1 },  /* TAMPTS: Activate timestamp on tamper detection               event */
   { "\x50\x13\x50\x19\x21\x51", 8, 3 },  /* TAMPFREQ: Tamper sampling frequency */
   { "\x50\x13\x50\x18\xc5\x00", 11, 2 },  /* TAMPFLT: Tamper filter count */
   { "\x50\x13\x50\x41\x20\xc8", 13, 2 },  /* TAMPPRCH: Tamper precharge duration */
   { "\x50\x13\x50\x41\x51\x09\x4c", 15, 1 },  /* TAMPPUDIS: TAMPER pull-up disable */
   { "\x40\x37\x1e\x58\x13\x15\x14", 18, 1 },  /* PC13VALUE: PC13 value */
   { "\x40\x37\x1e\x34\xf1\x05", 19, 1 },  /* PC13MODE: PC13 mode */
   { "\x40\x37\x1f\x58\x13\x15\x14", 20, 1 },  /* PC14VALUE: PC14 value */
   { "\x40\x37\x1f\x34\xf1\x05", 21, 1 },  /* PC14MODE: PC 14 mode */
   { "\x40\x37\x20\x58\x13\x15\x14", 22, 1 },  /* PC15VALUE: PC15 value */
   { "\x40\x37\x20\x34\xf1\x05", 23, 1 },  /* PC15MODE: PC15 mode */
};

const Field_t RTC_ALRMASSR_fields[] = {
   { "\x4d\x30", 0, 15 },  /* SS: Sub seconds value */
   { "\x34\x14\xcb\x4d\x30", 24, 4 },  /* MASKSS: Mask the most-significant bits starting               at this bit */
};

const Field_t RTC_ALRMBSSR_fields[] = {
   { "\x4d\x30", 0, 15 },  /* SS: Sub seconds value */
   { "\x34\x14\xcb\x4d\x30", 24, 4 },  /* MASKSS: Mask the most-significant bits starting               at this bit */
};

const Field_t RTC_BKP0R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP1R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP2R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP3R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP4R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP5R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP6R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP7R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP8R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP9R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP10R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP11R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP12R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP13R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP14R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP15R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP16R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP17R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP18R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP19R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP20R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP21R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP22R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP23R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP24R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP25R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP26R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP27R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP28R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP29R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP30R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP31R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Register_t RTC_registers[] = {
   {"\x51\x20", 0, 32, 0, RTC_TR_fields, 7}, /* TR: time register */
   {"\x11\x20", 4, 32, 0, RTC_DR_fields, 7}, /* DR: date register */
   {"\x0d\x20", 8, 32, 0, RTC_CR_fields, 20}, /* CR: control register */
   {"\x25\x34\x80", 12, 32, 0, RTC_ISR_fields, 17}, /* ISR: initialization and status           register */
   {"\x41\x21\x52", 16, 32, 0, RTC_PRER_fields, 2}, /* PRER: prescaler register */
   {"\x5d\x55\x12", 20, 32, 0, RTC_WUTR_fields, 1}, /* WUTR: wakeup timer register */
   {"\x04\xc4\x8d\x05\x20", 28, 32, 0, RTC_ALRMAR_fields, 14}, /* ALRMAR: alarm A register */
   {"\x04\xc4\x8d\x09\x20", 32, 32, 0, RTC_ALRMBR_fields, 14}, /* ALRMBR: alarm B register */
   {"\x5d\x04\x80", 36, 32, 0, RTC_WPR_fields, 1}, /* WPR: write protection register */
   {"\x4d\x34\x80", 40, 32, 0, RTC_SSR_fields, 1}, /* SSR: sub second register */
   {"\x4c\x82\x46\x51\x20", 44, 32, 0, RTC_SHIFTR_fields, 2}, /* SHIFTR: shift control register */
   {"\x51\x35\x12", 48, 32, 0, RTC_TSTR_fields, 7}, /* TSTR: time stamp time register */
   {"\x51\x31\x12", 52, 32, 0, RTC_TSDR_fields, 5}, /* TSDR: time stamp date register */
   {"\x51\x34\xd3\x48", 56, 32, 0, RTC_TSSSR_fields, 1}, /* TSSSR: timestamp sub second register */
   {"\x0c\x13\x12", 60, 32, 0, RTC_CALR_fields, 4}, /* CALR: calibration register */
   {"\x50\x11\x83\x48", 64, 32, 0, RTC_TAFCR_fields, 18}, /* TAFCR: tamper and alternate function configuration           register */
   {"\x04\xc4\x8d\x05\x34\xd2", 68, 32, 0, RTC_ALRMASSR_fields, 2}, /* ALRMASSR: alarm A sub second register */
   {"\x04\xc4\x8d\x09\x34\xd2", 72, 32, 0, RTC_ALRMBSSR_fields, 2}, /* ALRMBSSR: alarm B sub second register */
   {"\x08\xb4\x1b\x48", 80, 32, 0, RTC_BKP0R_fields, 1}, /* BKP0R: backup register */
   {"\x08\xb4\x1c\x48", 84, 32, 0, RTC_BKP1R_fields, 1}, /* BKP1R: backup register */
   {"\x08\xb4\x1d\x48", 88, 32, 0, RTC_BKP2R_fields, 1}, /* BKP2R: backup register */
   {"\x08\xb4\x1e\x48", 92, 32, 0, RTC_BKP3R_fields, 1}, /* BKP3R: backup register */
   {"\x08\xb4\x1f\x48", 96, 32, 0, RTC_BKP4R_fields, 1}, /* BKP4R: backup register */
   {"\x08\xb4\x20\x48", 100, 32, 0, RTC_BKP5R_fields, 1}, /* BKP5R: backup register */
   {"\x08\xb4\x21\x48", 104, 32, 0, RTC_BKP6R_fields, 1}, /* BKP6R: backup register */
   {"\x08\xb4\x22\x48", 108, 32, 0, RTC_BKP7R_fields, 1}, /* BKP7R: backup register */
   {"\x08\xb4\x23\x48", 112, 32, 0, RTC_BKP8R_fields, 1}, /* BKP8R: backup register */
   {"\x08\xb4\x24\x48", 116, 32, 0, RTC_BKP9R_fields, 1}, /* BKP9R: backup register */
   {"\x08\xb4\x1c\x6d\x20", 120, 32, 0, RTC_BKP10R_fields, 1}, /* BKP10R: backup register */
   {"\x08\xb4\x1c\x71\x20", 124, 32, 0, RTC_BKP11R_fields, 1}, /* BKP11R: backup register */
   {"\x08\xb4\x1c\x75\x20", 128, 32, 0, RTC_BKP12R_fields, 1}, /* BKP12R: backup register */
   {"\x08\xb4\x1c\x79\x20", 132, 32, 0, RTC_BKP13R_fields, 1}, /* BKP13R: backup register */
   {"\x08\xb4\x1c\x7d\x20", 136, 32, 0, RTC_BKP14R_fields, 1}, /* BKP14R: backup register */
   {"\x08\xb4\x1c\x81\x20", 140, 32, 0, RTC_BKP15R_fields, 1}, /* BKP15R: backup register */
   {"\x08\xb4\x1c\x85\x20", 144, 32, 0, RTC_BKP16R_fields, 1}, /* BKP16R: backup register */
   {"\x08\xb4\x1c\x89\x20", 148, 32, 0, RTC_BKP17R_fields, 1}, /* BKP17R: backup register */
   {"\x08\xb4\x1c\x8d\x20", 152, 32, 0, RTC_BKP18R_fields, 1}, /* BKP18R: backup register */
   {"\x08\xb4\x1c\x91\x20", 156, 32, 0, RTC_BKP19R_fields, 1}, /* BKP19R: backup register */
   {"\x08\xb4\x1d\x6d\x20", 160, 32, 0, RTC_BKP20R_fields, 1}, /* BKP20R: backup register */
   {"\x08\xb4\x1d\x71\x20", 164, 32, 0, RTC_BKP21R_fields, 1}, /* BKP21R: backup register */
   {"\x08\xb4\x1d\x75\x20", 168, 32, 0, RTC_BKP22R_fields, 1}, /* BKP22R: backup register */
   {"\x08\xb4\x1d\x79\x20", 172, 32, 0, RTC_BKP23R_fields, 1}, /* BKP23R: backup register */
   {"\x08\xb4\x1d\x7d\x20", 176, 32, 0, RTC_BKP24R_fields, 1}, /* BKP24R: backup register */
   {"\x08\xb4\x1d\x81\x20", 180, 32, 0, RTC_BKP25R_fields, 1}, /* BKP25R: backup register */
   {"\x08\xb4\x1d\x85\x20", 184, 32, 0, RTC_BKP26R_fields, 1}, /* BKP26R: backup register */
   {"\x08\xb4\x1d\x89\x20", 188, 32, 0, RTC_BKP27R_fields, 1}, /* BKP27R: backup register */
   {"\x08\xb4\x1d\x8d\x20", 192, 32, 0, RTC_BKP28R_fields, 1}, /* BKP28R: backup register */
   {"\x08\xb4\x1d\x91\x20", 196, 32, 0, RTC_BKP29R_fields, 1}, /* BKP29R: backup register */
   {"\x08\xb4\x1e\x6d\x20", 200, 32, 0, RTC_BKP30R_fields, 1}, /* BKP30R: backup register */
   {"\x08\xb4\x1e\x71\x20", 204, 32, 0, RTC_BKP31R_fields, 1}, /* BKP31R: backup register */
};

const Field_t WWDG_CR_fields[] = {
   { "\x50", 0, 7 },  /* T: 7-bit counter */
   { "\x5c\x41\xc1", 7, 1 },  /* WDGA: Activation bit */
};

const Field_t WWDG_CFR_fields[] = {
   { "\x5c", 0, 7 },  /* W: 7-bit window value */
   { "\x5c\x41\xd4\x08", 7, 2 },  /* WDGTB: Timer base */
   { "\x15\x72\x40", 9, 1 },  /* EWI: Early wakeup interrupt */
};

const Field_t WWDG_SR_fields[] = {
   { "\x15\x72\x46", 0, 1 },  /* EWIF: Early wakeup interrupt               flag */
};

const Register_t WWDG_registers[] = {
   {"\x0d\x20", 0, 32, 0, WWDG_CR_fields, 2}, /* CR: Control register */
   {"\x0c\x64\x80", 4, 32, 0, WWDG_CFR_fields, 3}, /* CFR: Configuration register */
   {"\x4d\x20", 8, 32, 0, WWDG_SR_fields, 1}, /* SR: Status register */
};

const Field_t IWDG_KR_fields[] = {
   { "\x2c\x56\x40", 0, 16 },  /* KEY: Key value */
};

const Field_t IWDG_PR_fields[] = {
   { "\x41\x20", 0, 3 },  /* PR: Prescaler divider */
};

const Field_t IWDG_RLR_fields[] = {
   { "\x48\xc0", 0, 12 },  /* RL: Watchdog counter reload               value */
};

const Field_t IWDG_SR_fields[] = {
   { "\x41\x65\x40", 0, 1 },  /* PVU: Watchdog prescaler value               update */
   { "\x49\x65\x40", 1, 1 },  /* RVU: Watchdog counter reload value               update */
   { "\x5d\x65\x40", 2, 1 },  /* WVU: Watchdog counter window value               update */
};

const Field_t IWDG_WINR_fields[] = {
   { "\x5c\x93\x80", 0, 12 },  /* WIN: Watchdog counter window               value */
};

const Register_t IWDG_registers[] = {
   {"\x2d\x20", 0, 32, 0, IWDG_KR_fields, 1}, /* KR: Key register */
   {"\x41\x20", 4, 32, 0, IWDG_PR_fields, 1}, /* PR: Prescaler register */
   {"\x48\xc4\x80", 8, 32, 0, IWDG_RLR_fields, 1}, /* RLR: Reload register */
   {"\x4d\x20", 12, 32, 0, IWDG_SR_fields, 3}, /* SR: Status register */
   {"\x5c\x93\x92", 16, 32, 0, IWDG_WINR_fields, 1}, /* WINR: Window register */
};

const Field_t I2C1_CR1_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: Peripheral enable */
   { "\x51\x82\x45", 1, 1 },  /* TXIE: TX Interrupt enable */
   { "\x49\x82\x45", 2, 1 },  /* RXIE: RX Interrupt enable */
   { "\x04\x41\x12\x24\x50", 3, 1 },  /* ADDRIE: Address match interrupt enable (slave               only) */
   { "\x38\x10\xcb\x24\x50", 4, 1 },  /* NACKIE: Not acknowledge received interrupt               enable */
   { "\x4d\x43\xd0\x24\x50", 5, 1 },  /* STOPIE: STOP detection Interrupt               enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transfer Complete interrupt               enable */
   { "\x15\x24\x89\x14", 7, 1 },  /* ERRIE: Error interrupts enable */
   { "\x10\xe1\x80", 8, 4 },  /* DNF: Digital noise filter */
   { "\x04\xe1\x8f\x18\x60", 12, 1 },  /* ANFOFF: Analog noise filter OFF */
   { "\x4d\x74\x93\x50", 13, 1 },  /* SWRST: Software reset */
   { "\x51\x81\x0d\x04\x53\x80", 14, 1 },  /* TXDMAEN: DMA transmission requests               enable */
   { "\x49\x81\x0d\x04\x53\x80", 15, 1 },  /* RXDMAEN: DMA reception requests               enable */
   { "\x4c\x20\xc0", 16, 1 },  /* SBC: Slave byte control */
   { "\x38\xf4\xd4\x48\x55\x03\x20", 17, 1 },  /* NOSTRETCH: Clock stretching disable */
   { "\x5d\x54\x05\x38", 18, 1 },  /* WUPEN: Wakeup from STOP enable */
   { "\x1c\x31\x4e", 19, 1 },  /* GCEN: General call enable */
   { "\x4c\xd0\x88\x14\xe0", 20, 1 },  /* SMBHEN: SMBus Host address enable */
   { "\x4c\xd0\x84\x14\xe0", 21, 1 },  /* SMBDEN: SMBus Device Default address               enable */
   { "\x04\xc1\x52\x50\x53\x80", 22, 1 },  /* ALERTEN: SMBUS alert enable */
   { "\x40\x50\xc5\x38", 23, 1 },  /* PECEN: PEC enable */
};

const Field_t I2C1_CR2_fields[] = {
   { "\x4c\x11\x04\x6c", 0, 1 },  /* SADD0: Slave address bit 0 (master               mode) */
   { "\x4c\x11\x04\x70", 1, 7 },  /* SADD1: Slave address bit 7:1 (master               mode) */
   { "\x4c\x11\x04\x8c", 8, 2 },  /* SADD8: Slave address bit 9:8 (master               mode) */
   { "\x48\x49\x57\x48\xe0", 10, 1 },  /* RD_WRN: Transfer direction (master               mode) */
   { "\x04\x41\x1c\x6c", 11, 1 },  /* ADD10: 10-bit addressing mode (master               mode) */
   { "\x20\x50\x44\x71\xb4\x80", 12, 1 },  /* HEAD10R: 10-bit address header only read               direction (master receiver mode) */
   { "\x4d\x40\x52\x50", 13, 1 },  /* START: Start generation */
   { "\x4d\x43\xd0", 14, 1 },  /* STOP: Stop generation (master               mode) */
   { "\x38\x10\xcb", 15, 1 },  /* NACK: NACK generation (slave               mode) */
   { "\x38\x26\x54\x15\x30", 16, 8 },  /* NBYTES: Number of bytes */
   { "\x48\x53\x0f\x04\x40", 24, 1 },  /* RELOAD: NBYTES reload mode */
   { "\x05\x55\x0f\x14\xe1\x00", 25, 1 },  /* AUTOEND: Automatic end mode (master               mode) */
   { "\x40\x50\xc2\x65\x41\x40", 26, 1 },  /* PECBYTE: Packet error checking byte */
};

const Field_t I2C1_OAR1_fields[] = {
   { "\x3c\x17\x25\x6c", 0, 1 },  /* OA1_0: Interface address */
   { "\x3c\x17\x25\x70", 1, 7 },  /* OA1_1: Interface address */
   { "\x3c\x17\x25\x8c", 8, 2 },  /* OA1_8: Interface address */
   { "\x3c\x17\x0d\x3c\x41\x40", 10, 1 },  /* OA1MODE: Own Address 1 10-bit mode */
   { "\x3c\x17\x05\x38", 15, 1 },  /* OA1EN: Own Address 1 enable */
};

const Field_t I2C1_OAR2_fields[] = {
   { "\x3c\x17\x40", 1, 7 },  /* OA2: Interface address */
   { "\x3c\x17\x4d\x4c\xb0", 8, 3 },  /* OA2MSK: Own Address 2 masks */
   { "\x3c\x17\x45\x38", 15, 1 },  /* OA2EN: Own Address 2 enable */
};

const Field_t I2C1_TIMINGR_fields[] = {
   { "\x4c\x33\x0c", 0, 8 },  /* SCLL: SCL low period (master               mode) */
   { "\x4c\x33\x08", 8, 8 },  /* SCLH: SCL high period (master               mode) */
   { "\x4c\x40\x44\x14\xc0", 16, 4 },  /* SDADEL: Data hold time */
   { "\x4c\x33\x04\x14\xc0", 20, 4 },  /* SCLDEL: Data setup time */
   { "\x41\x21\x53\x0c", 28, 4 },  /* PRESC: Timing prescaler */
};

const Field_t I2C1_TIMEOUTR_fields[] = {
   { "\x50\x93\x45\x3d\x55\x01", 0, 12 },  /* TIMEOUTA: Bus timeout A */
   { "\x50\x91\x0c\x14", 12, 1 },  /* TIDLE: Idle clock timeout               detection */
   { "\x50\x93\x4f\x55\x41\x4e", 15, 1 },  /* TIMOUTEN: Clock timeout enable */
   { "\x50\x93\x45\x3d\x55\x02", 16, 12 },  /* TIMEOUTB: Bus timeout B */
   { "\x50\x56\x14\x14\xe0", 31, 1 },  /* TEXTEN: Extended clock timeout               enable */
};

const Field_t I2C1_ISR_fields[] = {
   { "\x51\x81\x40", 0, 1 },  /* TXE: Transmit data register empty               (transmitters) */
   { "\x51\x82\x53", 1, 1 },  /* TXIS: Transmit interrupt status               (transmitters) */
   { "\x49\x83\x85", 2, 1 },  /* RXNE: Receive data register not empty               (receivers) */
   { "\x04\x41\x12", 3, 1 },  /* ADDR: Address matched (slave               mode) */
   { "\x38\x10\xcb\x18", 4, 1 },  /* NACKF: Not acknowledge received               flag */
   { "\x4d\x43\xd0\x18", 5, 1 },  /* STOPF: Stop detection flag */
   { "\x50\x30", 6, 1 },  /* TC: Transfer Complete (master               mode) */
   { "\x50\x34\x80", 7, 1 },  /* TCR: Transfer Complete Reload */
   { "\x08\x54\x92", 8, 1 },  /* BERR: Bus error */
   { "\x05\x23\x0f", 9, 1 },  /* ARLO: Arbitration lost */
   { "\x3d\x64\x80", 10, 1 },  /* OVR: Overrun/Underrun (slave               mode) */
   { "\x40\x50\xc5\x49\x20", 11, 1 },  /* PECERR: PEC Error in reception */
   { "\x50\x93\x45\x3d\x55\x00", 12, 1 },  /* TIMEOUT: Timeout or t_low detection               flag */
   { "\x04\xc1\x52\x50", 13, 1 },  /* ALERT: SMBus alert */
   { "\x09\x54\xd9", 15, 1 },  /* BUSY: Bus busy */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Transfer direction (Slave               mode) */
   { "\x04\x41\x03\x3c\x41\x40", 17, 7 },  /* ADDCODE: Address match code (Slave               mode) */
};

const Field_t I2C1_ICR_fields[] = {
   { "\x04\x41\x12\x0c\x60", 3, 1 },  /* ADDRCF: Address Matched flag clear */
   { "\x38\x10\xcb\x0c\x60", 4, 1 },  /* NACKCF: Not Acknowledge flag clear */
   { "\x4d\x43\xd0\x0c\x60", 5, 1 },  /* STOPCF: Stop detection flag clear */
   { "\x08\x54\x92\x0c\x60", 8, 1 },  /* BERRCF: Bus error flag clear */
   { "\x05\x23\x0f\x0c\x60", 9, 1 },  /* ARLOCF: Arbitration lost flag               clear */
   { "\x3d\x64\x83\x18", 10, 1 },  /* OVRCF: Overrun/Underrun flag               clear */
   { "\x40\x50\xc3\x18", 11, 1 },  /* PECCF: PEC Error flag clear */
   { "\x50\x93\x4f\x55\x40\xc6", 12, 1 },  /* TIMOUTCF: Timeout detection flag               clear */
   { "\x04\xc1\x52\x50\x31\x80", 13, 1 },  /* ALERTCF: Alert flag clear */
};

const Field_t I2C1_PECR_fields[] = {
   { "\x40\x50\xc0", 0, 8 },  /* PEC: Packet error checking               register */
};

const Field_t I2C1_RXDR_fields[] = {
   { "\x49\x81\x01\x50\x10", 0, 8 },  /* RXDATA: 8-bit receive data */
};

const Field_t I2C1_TXDR_fields[] = {
   { "\x51\x81\x01\x50\x10", 0, 8 },  /* TXDATA: 8-bit transmit data */
};

const Register_t I2C1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, I2C1_CR1_fields, 21}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, I2C1_CR2_fields, 13}, /* CR2: Control register 2 */
   {"\x3c\x14\x9c", 8, 32, 0, I2C1_OAR1_fields, 5}, /* OAR1: Own address register 1 */
   {"\x3c\x14\x9d", 12, 32, 0, I2C1_OAR2_fields, 3}, /* OAR2: Own address register 2 */
   {"\x50\x93\x49\x38\x74\x80", 16, 32, 0, I2C1_TIMINGR_fields, 5}, /* TIMINGR: Timing register */
   {"\x50\x93\x45\x3d\x55\x12", 20, 32, 0, I2C1_TIMEOUTR_fields, 5}, /* TIMEOUTR: Status register 1 */
   {"\x25\x34\x80", 24, 32, 0, I2C1_ISR_fields, 17}, /* ISR: Interrupt and Status register */
   {"\x24\x34\x80", 28, 32, 0, I2C1_ICR_fields, 9}, /* ICR: Interrupt clear register */
   {"\x40\x50\xd2", 32, 32, 0, I2C1_PECR_fields, 1}, /* PECR: PEC register */
   {"\x49\x81\x12", 36, 32, 0, I2C1_RXDR_fields, 1}, /* RXDR: Receive data register */
   {"\x51\x81\x12", 40, 32, 0, I2C1_TXDR_fields, 1}, /* TXDR: Transmit data register */
};

const Field_t USB_FS_USB_EP0R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_EP1R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_EP2R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_EP3R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_EP4R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_EP5R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_EP6R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_EP7R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission               transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission               transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for               transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction               completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception               transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception               transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for               reception */
};

const Field_t USB_FS_USB_CNTR_fields[] = {
   { "\x19\x21\x53", 0, 1 },  /* FRES: Force USB Reset */
   { "\x40\x45\xce", 1, 1 },  /* PDWN: Power down */
   { "\x31\x03\x4f\x10\x50", 2, 1 },  /* LPMODE: Low-power mode */
   { "\x19\x35\x53\x40", 3, 1 },  /* FSUSP: Force suspend */
   { "\x48\x54\xd5\x34\x50", 4, 1 },  /* RESUME: Resume request */
   { "\x15\x33\xc6\x34", 8, 1 },  /* ESOFM: Expected start of frame interrupt               mask */
   { "\x4c\xf1\x8d", 9, 1 },  /* SOFM: Start of frame interrupt               mask */
   { "\x48\x54\xc5\x50\xd0", 10, 1 },  /* RESETM: USB reset interrupt mask */
   { "\x4d\x54\xd0\x34", 11, 1 },  /* SUSPM: Suspend mode interrupt               mask */
   { "\x5c\xb5\x50\x34", 12, 1 },  /* WKUPM: Wakeup interrupt mask */
   { "\x15\x24\x8d", 13, 1 },  /* ERRM: Error interrupt mask */
   { "\x40\xd0\x4f\x59\x23\x40", 14, 1 },  /* PMAOVRM: Packet memory area over / underrun               interrupt mask */
   { "\x0d\x44\x8d", 15, 1 },  /* CTRM: Correct transfer interrupt               mask */
};

const Field_t USB_FS_ISTR_fields[] = {
   { "\x15\x09\x49\x10", 0, 4 },  /* EP_ID: Endpoint Identifier */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction of transaction */
   { "\x15\x33\xc6", 8, 1 },  /* ESOF: Expected start frame */
   { "\x4c\xf1\x80", 9, 1 },  /* SOF: start of frame */
   { "\x48\x54\xc5\x50", 10, 1 },  /* RESET: reset request */
   { "\x4d\x54\xd0", 11, 1 },  /* SUSP: Suspend mode request */
   { "\x5c\xb5\x50", 12, 1 },  /* WKUP: Wakeup */
   { "\x15\x24\x80", 13, 1 },  /* ERR: Error */
   { "\x40\xd0\x4f\x59\x20", 14, 1 },  /* PMAOVR: Packet memory area over /               underrun */
   { "\x0d\x44\x80", 15, 1 },  /* CTR: Correct transfer */
};

const Field_t USB_FS_FNR_fields[] = {
   { "\x18\xe0", 0, 11 },  /* FN: Frame number */
   { "\x31\x33\xc6", 11, 2 },  /* LSOF: Lost SOF */
   { "\x30\x32\xc0", 13, 1 },  /* LCK: Locked */
   { "\x49\x81\x0d", 14, 1 },  /* RXDM: Receive data - line status */
   { "\x49\x81\x10", 15, 1 },  /* RXDP: Receive data + line status */
};

const Field_t USB_FS_DADDR_fields[] = {
   { "\x04\x41\x00", 0, 1 },  /* ADD: Device address */
   { "\x04\x41\x1c", 1, 1 },  /* ADD1: Device address */
   { "\x04\x41\x1d", 2, 1 },  /* ADD2: Device address */
   { "\x04\x41\x1e", 3, 1 },  /* ADD3: Device address */
   { "\x04\x41\x1f", 4, 1 },  /* ADD4: Device address */
   { "\x04\x41\x20", 5, 1 },  /* ADD5: Device address */
   { "\x04\x41\x21", 6, 1 },  /* ADD6: Device address */
   { "\x14\x60", 7, 1 },  /* EF: Enable function */
};

const Field_t USB_FS_BTABLE_fields[] = {
   { "\x09\x40\x42\x30\x50", 3, 13 },  /* BTABLE: Buffer table */
};

const Register_t USB_FS_registers[] = {
   {"\x55\x30\xa5\x15\x06\xd2", 0, 32, 0, USB_FS_USB_EP0R_fields, 10}, /* USB_EP0R: endpoint 0 register */
   {"\x55\x30\xa5\x15\x07\x12", 4, 32, 0, USB_FS_USB_EP1R_fields, 10}, /* USB_EP1R: endpoint 1 register */
   {"\x55\x30\xa5\x15\x07\x52", 8, 32, 0, USB_FS_USB_EP2R_fields, 10}, /* USB_EP2R: endpoint 2 register */
   {"\x55\x30\xa5\x15\x07\x92", 12, 32, 0, USB_FS_USB_EP3R_fields, 10}, /* USB_EP3R: endpoint 3 register */
   {"\x55\x30\xa5\x15\x07\xd2", 16, 32, 0, USB_FS_USB_EP4R_fields, 10}, /* USB_EP4R: endpoint 4 register */
   {"\x55\x30\xa5\x15\x08\x12", 20, 32, 0, USB_FS_USB_EP5R_fields, 10}, /* USB_EP5R: endpoint 5 register */
   {"\x55\x30\xa5\x15\x08\x52", 24, 32, 0, USB_FS_USB_EP6R_fields, 10}, /* USB_EP6R: endpoint 6 register */
   {"\x55\x30\xa5\x15\x08\x92", 28, 32, 0, USB_FS_USB_EP7R_fields, 10}, /* USB_EP7R: endpoint 7 register */
   {"\x55\x30\xa5\x0c\xe5\x12", 64, 32, 0, USB_FS_USB_CNTR_fields, 13}, /* USB_CNTR: control register */
   {"\x25\x35\x12", 68, 32, 0, USB_FS_ISTR_fields, 10}, /* ISTR: interrupt status register */
   {"\x18\xe4\x80", 72, 32, 0, USB_FS_FNR_fields, 5}, /* FNR: frame number register */
   {"\x10\x11\x04\x48", 76, 32, 0, USB_FS_DADDR_fields, 8}, /* DADDR: device address */
   {"\x09\x40\x42\x30\x50", 80, 32, 0, USB_FS_BTABLE_fields, 1}, /* BTABLE: Buffer table address */
};

const Field_t CAN_MCR_fields[] = {
   { "\x24\xe4\x91", 0, 1 },  /* INRQ: INRQ */
   { "\x4c\xc1\x45\x40", 1, 1 },  /* SLEEP: SLEEP */
   { "\x51\x81\x90", 2, 1 },  /* TXFP: TXFP */
   { "\x48\x63\x0d", 3, 1 },  /* RFLM: RFLM */
   { "\x38\x14\x94", 4, 1 },  /* NART: NART */
   { "\x05\x75\x4d", 5, 1 },  /* AWUM: AWUM */
   { "\x04\x23\xcd", 6, 1 },  /* ABOM: ABOM */
   { "\x51\x40\xcd", 7, 1 },  /* TTCM: TTCM */
   { "\x48\x54\xc5\x50", 15, 1 },  /* RESET: RESET */
   { "\x10\x21\x80", 16, 1 },  /* DBF: DBF */
};

const Field_t CAN_MSR_fields[] = {
   { "\x24\xe0\x4b", 0, 1 },  /* INAK: INAK */
   { "\x4c\xc0\x4b", 1, 1 },  /* SLAK: SLAK */
   { "\x15\x24\x89", 2, 1 },  /* ERRI: ERRI */
   { "\x5c\xb5\x49", 3, 1 },  /* WKUI: WKUI */
   { "\x4c\xc0\x4b\x24", 4, 1 },  /* SLAKI: SLAKI */
   { "\x51\x83\x40", 8, 1 },  /* TXM: TXM */
   { "\x49\x83\x40", 9, 1 },  /* RXM: RXM */
   { "\x4c\x13\x50", 10, 1 },  /* SAMP: SAMP */
   { "\x49\x80", 11, 1 },  /* RX: RX */
};

const Field_t CAN_TSR_fields[] = {
   { "\x49\x10\xd0\x6c", 0, 1 },  /* RQCP0: RQCP0 */
   { "\x51\x83\xcb\x6c", 1, 1 },  /* TXOK0: TXOK0 */
   { "\x04\xc4\xd4\x6c", 2, 1 },  /* ALST0: ALST0 */
   { "\x50\x54\x92\x6c", 3, 1 },  /* TERR0: TERR0 */
   { "\x04\x24\x91\x6c", 7, 1 },  /* ABRQ0: ABRQ0 */
   { "\x49\x10\xd0\x70", 8, 1 },  /* RQCP1: RQCP1 */
   { "\x51\x83\xcb\x70", 9, 1 },  /* TXOK1: TXOK1 */
   { "\x04\xc4\xd4\x70", 10, 1 },  /* ALST1: ALST1 */
   { "\x50\x54\x92\x70", 11, 1 },  /* TERR1: TERR1 */
   { "\x04\x24\x91\x70", 15, 1 },  /* ABRQ1: ABRQ1 */
   { "\x49\x10\xd0\x74", 16, 1 },  /* RQCP2: RQCP2 */
   { "\x51\x83\xcb\x74", 17, 1 },  /* TXOK2: TXOK2 */
   { "\x04\xc4\xd4\x74", 18, 1 },  /* ALST2: ALST2 */
   { "\x50\x54\x92\x74", 19, 1 },  /* TERR2: TERR2 */
   { "\x04\x24\x91\x74", 23, 1 },  /* ABRQ2: ABRQ2 */
   { "\x0c\xf1\x05", 24, 2 },  /* CODE: CODE */
   { "\x50\xd1\x5b", 26, 1 },  /* TME0: Lowest priority flag for mailbox               0 */
   { "\x50\xd1\x5c", 27, 1 },  /* TME1: Lowest priority flag for mailbox               1 */
   { "\x50\xd1\x5d", 28, 1 },  /* TME2: Lowest priority flag for mailbox               2 */
   { "\x30\xf5\xdb", 29, 1 },  /* LOW0: Lowest priority flag for mailbox               0 */
   { "\x30\xf5\xdc", 30, 1 },  /* LOW1: Lowest priority flag for mailbox               1 */
   { "\x30\xf5\xdd", 31, 1 },  /* LOW2: Lowest priority flag for mailbox               2 */
};

const Field_t CAN_RF0R_fields[] = {
   { "\x18\xd4\x1b", 0, 2 },  /* FMP0: FMP0 */
   { "\x19\x53\x0c\x6c", 3, 1 },  /* FULL0: FULL0 */
   { "\x18\xf5\x92\x6c", 4, 1 },  /* FOVR0: FOVR0 */
   { "\x48\x63\xcd\x6c", 5, 1 },  /* RFOM0: RFOM0 */
};

const Field_t CAN_RF1R_fields[] = {
   { "\x18\xd4\x1c", 0, 2 },  /* FMP1: FMP1 */
   { "\x19\x53\x0c\x70", 3, 1 },  /* FULL1: FULL1 */
   { "\x18\xf5\x92\x70", 4, 1 },  /* FOVR1: FOVR1 */
   { "\x48\x63\xcd\x70", 5, 1 },  /* RFOM1: RFOM1 */
};

const Field_t CAN_IER_fields[] = {
   { "\x50\xd1\x49\x14", 0, 1 },  /* TMEIE: TMEIE */
   { "\x18\xd4\x09\x15\xb0", 1, 1 },  /* FMPIE0: FMPIE0 */
   { "\x18\x62\x45\x6c", 2, 1 },  /* FFIE0: FFIE0 */
   { "\x18\xf5\x89\x15\xb0", 3, 1 },  /* FOVIE0: FOVIE0 */
   { "\x18\xd4\x09\x15\xc0", 4, 1 },  /* FMPIE1: FMPIE1 */
   { "\x18\x62\x45\x70", 5, 1 },  /* FFIE1: FFIE1 */
   { "\x18\xf5\x89\x15\xc0", 6, 1 },  /* FOVIE1: FOVIE1 */
   { "\x15\x71\xc9\x14", 8, 1 },  /* EWGIE: EWGIE */
   { "\x15\x05\x89\x14", 9, 1 },  /* EPVIE: EPVIE */
   { "\x08\xf1\x89\x14", 10, 1 },  /* BOFIE: BOFIE */
   { "\x30\x50\xc9\x14", 11, 1 },  /* LECIE: LECIE */
   { "\x15\x24\x89\x14", 15, 1 },  /* ERRIE: ERRIE */
   { "\x5c\xb5\x49\x14", 16, 1 },  /* WKUIE: WKUIE */
   { "\x4c\xc2\xc9\x14", 17, 1 },  /* SLKIE: SLKIE */
};

const Field_t CAN_ESR_fields[] = {
   { "\x15\x71\xc6", 0, 1 },  /* EWGF: EWGF */
   { "\x15\x05\x86", 1, 1 },  /* EPVF: EPVF */
   { "\x08\xf1\x86", 2, 1 },  /* BOFF: BOFF */
   { "\x30\x50\xc0", 4, 3 },  /* LEC: LEC */
   { "\x50\x50\xc0", 16, 8 },  /* TEC: TEC */
   { "\x48\x50\xc0", 24, 8 },  /* REC: REC */
};

const Field_t CAN_BTR_fields[] = {
   { "\x09\x24\x00", 0, 10 },  /* BRP: BRP */
   { "\x51\x37\x00", 16, 4 },  /* TS1: TS1 */
   { "\x51\x37\x40", 20, 3 },  /* TS2: TS2 */
   { "\x4c\xa5\xc0", 24, 2 },  /* SJW: SJW */
   { "\x30\x22\xcd", 30, 1 },  /* LBKM: LBKM */
   { "\x4c\x93\x0d", 31, 1 },  /* SILM: SILM */
};

const Field_t CAN_TI0R_fields[] = {
   { "\x51\x84\x91", 0, 1 },  /* TXRQ: TXRQ */
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN_TDT0R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x50\x75\x00", 8, 1 },  /* TGT: TGT */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN_TDL0R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN_TDH0R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN_TI1R_fields[] = {
   { "\x51\x84\x91", 0, 1 },  /* TXRQ: TXRQ */
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN_TDT1R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x50\x75\x00", 8, 1 },  /* TGT: TGT */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN_TDL1R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN_TDH1R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN_TI2R_fields[] = {
   { "\x51\x84\x91", 0, 1 },  /* TXRQ: TXRQ */
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN_TDT2R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x50\x75\x00", 8, 1 },  /* TGT: TGT */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN_TDL2R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN_TDH2R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN_RI0R_fields[] = {
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN_RDT0R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x18\xd2\x40", 8, 8 },  /* FMI: FMI */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN_RDL0R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN_RDH0R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN_RI1R_fields[] = {
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN_RDT1R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x18\xd2\x40", 8, 8 },  /* FMI: FMI */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN_RDL1R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN_RDH1R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN_FMR_fields[] = {
   { "\x18\x93\x89\x50", 0, 1 },  /* FINIT: Filter init mode */
   { "\x0c\x13\x9d\x4c\x20", 8, 6 },  /* CAN2SB: CAN2 start bank */
};

const Field_t CAN_FM1R_fields[] = {
   { "\x18\x23\x5b", 0, 1 },  /* FBM0: Filter mode */
   { "\x18\x23\x5c", 1, 1 },  /* FBM1: Filter mode */
   { "\x18\x23\x5d", 2, 1 },  /* FBM2: Filter mode */
   { "\x18\x23\x5e", 3, 1 },  /* FBM3: Filter mode */
   { "\x18\x23\x5f", 4, 1 },  /* FBM4: Filter mode */
   { "\x18\x23\x60", 5, 1 },  /* FBM5: Filter mode */
   { "\x18\x23\x61", 6, 1 },  /* FBM6: Filter mode */
   { "\x18\x23\x62", 7, 1 },  /* FBM7: Filter mode */
   { "\x18\x23\x63", 8, 1 },  /* FBM8: Filter mode */
   { "\x18\x23\x64", 9, 1 },  /* FBM9: Filter mode */
   { "\x18\x23\x5c\x6c", 10, 1 },  /* FBM10: Filter mode */
   { "\x18\x23\x5c\x70", 11, 1 },  /* FBM11: Filter mode */
   { "\x18\x23\x5c\x74", 12, 1 },  /* FBM12: Filter mode */
   { "\x18\x23\x5c\x78", 13, 1 },  /* FBM13: Filter mode */
   { "\x18\x23\x5c\x7c", 14, 1 },  /* FBM14: Filter mode */
   { "\x18\x23\x5c\x80", 15, 1 },  /* FBM15: Filter mode */
   { "\x18\x23\x5c\x84", 16, 1 },  /* FBM16: Filter mode */
   { "\x18\x23\x5c\x88", 17, 1 },  /* FBM17: Filter mode */
   { "\x18\x23\x5c\x8c", 18, 1 },  /* FBM18: Filter mode */
   { "\x18\x23\x5c\x90", 19, 1 },  /* FBM19: Filter mode */
   { "\x18\x23\x5d\x6c", 20, 1 },  /* FBM20: Filter mode */
   { "\x18\x23\x5d\x70", 21, 1 },  /* FBM21: Filter mode */
   { "\x18\x23\x5d\x74", 22, 1 },  /* FBM22: Filter mode */
   { "\x18\x23\x5d\x78", 23, 1 },  /* FBM23: Filter mode */
   { "\x18\x23\x5d\x7c", 24, 1 },  /* FBM24: Filter mode */
   { "\x18\x23\x5d\x80", 25, 1 },  /* FBM25: Filter mode */
   { "\x18\x23\x5d\x84", 26, 1 },  /* FBM26: Filter mode */
   { "\x18\x23\x5d\x88", 27, 1 },  /* FBM27: Filter mode */
};

const Field_t CAN_FS1R_fields[] = {
   { "\x19\x30\xdb", 0, 1 },  /* FSC0: Filter scale configuration */
   { "\x19\x30\xdc", 1, 1 },  /* FSC1: Filter scale configuration */
   { "\x19\x30\xdd", 2, 1 },  /* FSC2: Filter scale configuration */
   { "\x19\x30\xde", 3, 1 },  /* FSC3: Filter scale configuration */
   { "\x19\x30\xdf", 4, 1 },  /* FSC4: Filter scale configuration */
   { "\x19\x30\xe0", 5, 1 },  /* FSC5: Filter scale configuration */
   { "\x19\x30\xe1", 6, 1 },  /* FSC6: Filter scale configuration */
   { "\x19\x30\xe2", 7, 1 },  /* FSC7: Filter scale configuration */
   { "\x19\x30\xe3", 8, 1 },  /* FSC8: Filter scale configuration */
   { "\x19\x30\xe4", 9, 1 },  /* FSC9: Filter scale configuration */
   { "\x19\x30\xdc\x6c", 10, 1 },  /* FSC10: Filter scale configuration */
   { "\x19\x30\xdc\x70", 11, 1 },  /* FSC11: Filter scale configuration */
   { "\x19\x30\xdc\x74", 12, 1 },  /* FSC12: Filter scale configuration */
   { "\x19\x30\xdc\x78", 13, 1 },  /* FSC13: Filter scale configuration */
   { "\x19\x30\xdc\x7c", 14, 1 },  /* FSC14: Filter scale configuration */
   { "\x19\x30\xdc\x80", 15, 1 },  /* FSC15: Filter scale configuration */
   { "\x19\x30\xdc\x84", 16, 1 },  /* FSC16: Filter scale configuration */
   { "\x19\x30\xdc\x88", 17, 1 },  /* FSC17: Filter scale configuration */
   { "\x19\x30\xdc\x8c", 18, 1 },  /* FSC18: Filter scale configuration */
   { "\x19\x30\xdc\x90", 19, 1 },  /* FSC19: Filter scale configuration */
   { "\x19\x30\xdd\x6c", 20, 1 },  /* FSC20: Filter scale configuration */
   { "\x19\x30\xdd\x70", 21, 1 },  /* FSC21: Filter scale configuration */
   { "\x19\x30\xdd\x74", 22, 1 },  /* FSC22: Filter scale configuration */
   { "\x19\x30\xdd\x78", 23, 1 },  /* FSC23: Filter scale configuration */
   { "\x19\x30\xdd\x7c", 24, 1 },  /* FSC24: Filter scale configuration */
   { "\x19\x30\xdd\x80", 25, 1 },  /* FSC25: Filter scale configuration */
   { "\x19\x30\xdd\x84", 26, 1 },  /* FSC26: Filter scale configuration */
   { "\x19\x30\xdd\x88", 27, 1 },  /* FSC27: Filter scale configuration */
};

const Field_t CAN_FFA1R_fields[] = {
   { "\x18\x60\x5b", 0, 1 },  /* FFA0: Filter FIFO assignment for filter               0 */
   { "\x18\x60\x5c", 1, 1 },  /* FFA1: Filter FIFO assignment for filter               1 */
   { "\x18\x60\x5d", 2, 1 },  /* FFA2: Filter FIFO assignment for filter               2 */
   { "\x18\x60\x5e", 3, 1 },  /* FFA3: Filter FIFO assignment for filter               3 */
   { "\x18\x60\x5f", 4, 1 },  /* FFA4: Filter FIFO assignment for filter               4 */
   { "\x18\x60\x60", 5, 1 },  /* FFA5: Filter FIFO assignment for filter               5 */
   { "\x18\x60\x61", 6, 1 },  /* FFA6: Filter FIFO assignment for filter               6 */
   { "\x18\x60\x62", 7, 1 },  /* FFA7: Filter FIFO assignment for filter               7 */
   { "\x18\x60\x63", 8, 1 },  /* FFA8: Filter FIFO assignment for filter               8 */
   { "\x18\x60\x64", 9, 1 },  /* FFA9: Filter FIFO assignment for filter               9 */
   { "\x18\x60\x5c\x6c", 10, 1 },  /* FFA10: Filter FIFO assignment for filter               10 */
   { "\x18\x60\x5c\x70", 11, 1 },  /* FFA11: Filter FIFO assignment for filter               11 */
   { "\x18\x60\x5c\x74", 12, 1 },  /* FFA12: Filter FIFO assignment for filter               12 */
   { "\x18\x60\x5c\x78", 13, 1 },  /* FFA13: Filter FIFO assignment for filter               13 */
   { "\x18\x60\x5c\x7c", 14, 1 },  /* FFA14: Filter FIFO assignment for filter               14 */
   { "\x18\x60\x5c\x80", 15, 1 },  /* FFA15: Filter FIFO assignment for filter               15 */
   { "\x18\x60\x5c\x84", 16, 1 },  /* FFA16: Filter FIFO assignment for filter               16 */
   { "\x18\x60\x5c\x88", 17, 1 },  /* FFA17: Filter FIFO assignment for filter               17 */
   { "\x18\x60\x5c\x8c", 18, 1 },  /* FFA18: Filter FIFO assignment for filter               18 */
   { "\x18\x60\x5c\x90", 19, 1 },  /* FFA19: Filter FIFO assignment for filter               19 */
   { "\x18\x60\x5d\x6c", 20, 1 },  /* FFA20: Filter FIFO assignment for filter               20 */
   { "\x18\x60\x5d\x70", 21, 1 },  /* FFA21: Filter FIFO assignment for filter               21 */
   { "\x18\x60\x5d\x74", 22, 1 },  /* FFA22: Filter FIFO assignment for filter               22 */
   { "\x18\x60\x5d\x78", 23, 1 },  /* FFA23: Filter FIFO assignment for filter               23 */
   { "\x18\x60\x5d\x7c", 24, 1 },  /* FFA24: Filter FIFO assignment for filter               24 */
   { "\x18\x60\x5d\x80", 25, 1 },  /* FFA25: Filter FIFO assignment for filter               25 */
   { "\x18\x60\x5d\x84", 26, 1 },  /* FFA26: Filter FIFO assignment for filter               26 */
   { "\x18\x60\x5d\x88", 27, 1 },  /* FFA27: Filter FIFO assignment for filter               27 */
};

const Field_t CAN_FA1R_fields[] = {
   { "\x18\x10\xd4\x6c", 0, 1 },  /* FACT0: Filter active */
   { "\x18\x10\xd4\x70", 1, 1 },  /* FACT1: Filter active */
   { "\x18\x10\xd4\x74", 2, 1 },  /* FACT2: Filter active */
   { "\x18\x10\xd4\x78", 3, 1 },  /* FACT3: Filter active */
   { "\x18\x10\xd4\x7c", 4, 1 },  /* FACT4: Filter active */
   { "\x18\x10\xd4\x80", 5, 1 },  /* FACT5: Filter active */
   { "\x18\x10\xd4\x84", 6, 1 },  /* FACT6: Filter active */
   { "\x18\x10\xd4\x88", 7, 1 },  /* FACT7: Filter active */
   { "\x18\x10\xd4\x8c", 8, 1 },  /* FACT8: Filter active */
   { "\x18\x10\xd4\x90", 9, 1 },  /* FACT9: Filter active */
   { "\x18\x10\xd4\x71\xb0", 10, 1 },  /* FACT10: Filter active */
   { "\x18\x10\xd4\x71\xc0", 11, 1 },  /* FACT11: Filter active */
   { "\x18\x10\xd4\x71\xd0", 12, 1 },  /* FACT12: Filter active */
   { "\x18\x10\xd4\x71\xe0", 13, 1 },  /* FACT13: Filter active */
   { "\x18\x10\xd4\x71\xf0", 14, 1 },  /* FACT14: Filter active */
   { "\x18\x10\xd4\x72\x00", 15, 1 },  /* FACT15: Filter active */
   { "\x18\x10\xd4\x72\x10", 16, 1 },  /* FACT16: Filter active */
   { "\x18\x10\xd4\x72\x20", 17, 1 },  /* FACT17: Filter active */
   { "\x18\x10\xd4\x72\x30", 18, 1 },  /* FACT18: Filter active */
   { "\x18\x10\xd4\x72\x40", 19, 1 },  /* FACT19: Filter active */
   { "\x18\x10\xd4\x75\xb0", 20, 1 },  /* FACT20: Filter active */
   { "\x18\x10\xd4\x75\xc0", 21, 1 },  /* FACT21: Filter active */
   { "\x18\x10\xd4\x75\xd0", 22, 1 },  /* FACT22: Filter active */
   { "\x18\x10\xd4\x75\xe0", 23, 1 },  /* FACT23: Filter active */
   { "\x18\x10\xd4\x75\xf0", 24, 1 },  /* FACT24: Filter active */
   { "\x18\x10\xd4\x76\x00", 25, 1 },  /* FACT25: Filter active */
   { "\x18\x10\xd4\x76\x10", 26, 1 },  /* FACT26: Filter active */
   { "\x18\x10\xd4\x76\x20", 27, 1 },  /* FACT27: Filter active */
};

const Field_t CAN_F0R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F0R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F1R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F1R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F2R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F2R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F3R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F3R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F4R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F4R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F5R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F5R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F6R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F6R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F7R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F7R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F8R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F8R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F9R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F9R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F10R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F10R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F11R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F11R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F12R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F12R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F13R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F13R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F14R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F14R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F15R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F15R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F16R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F16R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F17R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F17R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F18R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F18R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F19R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F19R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F20R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F20R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F21R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F21R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F22R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F22R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F23R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F23R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F24R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F24R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F25R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F25R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F26R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F26R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F27R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN_F27R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Register_t CAN_registers[] = {
   {"\x34\x34\x80", 0, 32, 0, CAN_MCR_fields, 10}, /* MCR: master control register */
   {"\x35\x34\x80", 4, 32, 0, CAN_MSR_fields, 9}, /* MSR: master status register */
   {"\x51\x34\x80", 8, 32, 0, CAN_TSR_fields, 22}, /* TSR: transmit status register */
   {"\x48\x66\xd2", 12, 32, 0, CAN_RF0R_fields, 4}, /* RF0R: receive FIFO 0 register */
   {"\x48\x67\x12", 16, 32, 0, CAN_RF1R_fields, 4}, /* RF1R: receive FIFO 1 register */
   {"\x24\x54\x80", 20, 32, 0, CAN_IER_fields, 14}, /* IER: interrupt enable register */
   {"\x15\x34\x80", 24, 32, 0, CAN_ESR_fields, 6}, /* ESR: error status register */
   {"\x09\x44\x80", 28, 32, 0, CAN_BTR_fields, 6}, /* BTR: bit timing register */
   {"\x50\x96\xd2", 384, 32, 0, CAN_TI0R_fields, 5}, /* TI0R: TX mailbox identifier register */
   {"\x50\x45\x1b\x48", 388, 32, 0, CAN_TDT0R_fields, 3}, /* TDT0R: mailbox data length control and time stamp           register */
   {"\x50\x43\x1b\x48", 392, 32, 0, CAN_TDL0R_fields, 4}, /* TDL0R: mailbox data low register */
   {"\x50\x42\x1b\x48", 396, 32, 0, CAN_TDH0R_fields, 4}, /* TDH0R: mailbox data high register */
   {"\x50\x97\x12", 400, 32, 0, CAN_TI1R_fields, 5}, /* TI1R: TX mailbox identifier register */
   {"\x50\x45\x1c\x48", 404, 32, 0, CAN_TDT1R_fields, 3}, /* TDT1R: mailbox data length control and time stamp           register */
   {"\x50\x43\x1c\x48", 408, 32, 0, CAN_TDL1R_fields, 4}, /* TDL1R: mailbox data low register */
   {"\x50\x42\x1c\x48", 412, 32, 0, CAN_TDH1R_fields, 4}, /* TDH1R: mailbox data high register */
   {"\x50\x97\x52", 416, 32, 0, CAN_TI2R_fields, 5}, /* TI2R: TX mailbox identifier register */
   {"\x50\x45\x1d\x48", 420, 32, 0, CAN_TDT2R_fields, 3}, /* TDT2R: mailbox data length control and time stamp           register */
   {"\x50\x43\x1d\x48", 424, 32, 0, CAN_TDL2R_fields, 4}, /* TDL2R: mailbox data low register */
   {"\x50\x42\x1d\x48", 428, 32, 0, CAN_TDH2R_fields, 4}, /* TDH2R: mailbox data high register */
   {"\x48\x96\xd2", 432, 32, 0, CAN_RI0R_fields, 4}, /* RI0R: receive FIFO mailbox identifier           register */
   {"\x48\x45\x1b\x48", 436, 32, 0, CAN_RDT0R_fields, 3}, /* RDT0R: receive FIFO mailbox data length control and           time stamp register */
   {"\x48\x43\x1b\x48", 440, 32, 0, CAN_RDL0R_fields, 4}, /* RDL0R: receive FIFO mailbox data low           register */
   {"\x48\x42\x1b\x48", 444, 32, 0, CAN_RDH0R_fields, 4}, /* RDH0R: receive FIFO mailbox data high           register */
   {"\x48\x97\x12", 448, 32, 0, CAN_RI1R_fields, 4}, /* RI1R: receive FIFO mailbox identifier           register */
   {"\x48\x45\x1c\x48", 452, 32, 0, CAN_RDT1R_fields, 3}, /* RDT1R: receive FIFO mailbox data length control and           time stamp register */
   {"\x48\x43\x1c\x48", 456, 32, 0, CAN_RDL1R_fields, 4}, /* RDL1R: receive FIFO mailbox data low           register */
   {"\x48\x42\x1c\x48", 460, 32, 0, CAN_RDH1R_fields, 4}, /* RDH1R: receive FIFO mailbox data high           register */
   {"\x18\xd4\x80", 512, 32, 0, CAN_FMR_fields, 2}, /* FMR: filter master register */
   {"\x18\xd7\x12", 516, 32, 0, CAN_FM1R_fields, 28}, /* FM1R: filter mode register */
   {"\x19\x37\x12", 524, 32, 0, CAN_FS1R_fields, 28}, /* FS1R: filter scale register */
   {"\x18\x60\x5c\x48", 532, 32, 0, CAN_FFA1R_fields, 28}, /* FFA1R: filter FIFO assignment           register */
   {"\x18\x17\x12", 540, 32, 0, CAN_FA1R_fields, 28}, /* FA1R: CAN filter activation register */
   {"\x19\xb4\x9c", 576, 32, 0, CAN_F0R1_fields, 32}, /* F0R1: Filter bank 0 register 1 */
   {"\x19\xb4\x9d", 580, 32, 0, CAN_F0R2_fields, 32}, /* F0R2: Filter bank 0 register 2 */
   {"\x19\xc4\x9c", 584, 32, 0, CAN_F1R1_fields, 32}, /* F1R1: Filter bank 1 register 1 */
   {"\x19\xc4\x9d", 588, 32, 0, CAN_F1R2_fields, 32}, /* F1R2: Filter bank 1 register 2 */
   {"\x19\xd4\x9c", 592, 32, 0, CAN_F2R1_fields, 32}, /* F2R1: Filter bank 2 register 1 */
   {"\x19\xd4\x9d", 596, 32, 0, CAN_F2R2_fields, 32}, /* F2R2: Filter bank 2 register 2 */
   {"\x19\xe4\x9c", 600, 32, 0, CAN_F3R1_fields, 32}, /* F3R1: Filter bank 3 register 1 */
   {"\x19\xe4\x9d", 604, 32, 0, CAN_F3R2_fields, 32}, /* F3R2: Filter bank 3 register 2 */
   {"\x19\xf4\x9c", 608, 32, 0, CAN_F4R1_fields, 32}, /* F4R1: Filter bank 4 register 1 */
   {"\x19\xf4\x9d", 612, 32, 0, CAN_F4R2_fields, 32}, /* F4R2: Filter bank 4 register 2 */
   {"\x1a\x04\x9c", 616, 32, 0, CAN_F5R1_fields, 32}, /* F5R1: Filter bank 5 register 1 */
   {"\x1a\x04\x9d", 620, 32, 0, CAN_F5R2_fields, 32}, /* F5R2: Filter bank 5 register 2 */
   {"\x1a\x14\x9c", 624, 32, 0, CAN_F6R1_fields, 32}, /* F6R1: Filter bank 6 register 1 */
   {"\x1a\x14\x9d", 628, 32, 0, CAN_F6R2_fields, 32}, /* F6R2: Filter bank 6 register 2 */
   {"\x1a\x24\x9c", 632, 32, 0, CAN_F7R1_fields, 32}, /* F7R1: Filter bank 7 register 1 */
   {"\x1a\x24\x9d", 636, 32, 0, CAN_F7R2_fields, 32}, /* F7R2: Filter bank 7 register 2 */
   {"\x1a\x34\x9c", 640, 32, 0, CAN_F8R1_fields, 32}, /* F8R1: Filter bank 8 register 1 */
   {"\x1a\x34\x9d", 644, 32, 0, CAN_F8R2_fields, 32}, /* F8R2: Filter bank 8 register 2 */
   {"\x1a\x44\x9c", 648, 32, 0, CAN_F9R1_fields, 32}, /* F9R1: Filter bank 9 register 1 */
   {"\x1a\x44\x9d", 652, 32, 0, CAN_F9R2_fields, 32}, /* F9R2: Filter bank 9 register 2 */
   {"\x19\xc6\xd2\x70", 656, 32, 0, CAN_F10R1_fields, 32}, /* F10R1: Filter bank 10 register 1 */
   {"\x19\xc6\xd2\x74", 660, 32, 0, CAN_F10R2_fields, 32}, /* F10R2: Filter bank 10 register 2 */
   {"\x19\xc7\x12\x70", 664, 32, 0, CAN_F11R1_fields, 32}, /* F11R1: Filter bank 11 register 1 */
   {"\x19\xc7\x12\x74", 668, 32, 0, CAN_F11R2_fields, 32}, /* F11R2: Filter bank 11 register 2 */
   {"\x19\xc7\x52\x70", 672, 32, 0, CAN_F12R1_fields, 32}, /* F12R1: Filter bank 4 register 1 */
   {"\x19\xc7\x52\x74", 676, 32, 0, CAN_F12R2_fields, 32}, /* F12R2: Filter bank 12 register 2 */
   {"\x19\xc7\x92\x70", 680, 32, 0, CAN_F13R1_fields, 32}, /* F13R1: Filter bank 13 register 1 */
   {"\x19\xc7\x92\x74", 684, 32, 0, CAN_F13R2_fields, 32}, /* F13R2: Filter bank 13 register 2 */
   {"\x19\xc7\xd2\x70", 688, 32, 0, CAN_F14R1_fields, 32}, /* F14R1: Filter bank 14 register 1 */
   {"\x19\xc7\xd2\x74", 692, 32, 0, CAN_F14R2_fields, 32}, /* F14R2: Filter bank 14 register 2 */
   {"\x19\xc8\x12\x70", 696, 32, 0, CAN_F15R1_fields, 32}, /* F15R1: Filter bank 15 register 1 */
   {"\x19\xc8\x12\x74", 700, 32, 0, CAN_F15R2_fields, 32}, /* F15R2: Filter bank 15 register 2 */
   {"\x19\xc8\x52\x70", 704, 32, 0, CAN_F16R1_fields, 32}, /* F16R1: Filter bank 16 register 1 */
   {"\x19\xc8\x52\x74", 708, 32, 0, CAN_F16R2_fields, 32}, /* F16R2: Filter bank 16 register 2 */
   {"\x19\xc8\x92\x70", 712, 32, 0, CAN_F17R1_fields, 32}, /* F17R1: Filter bank 17 register 1 */
   {"\x19\xc8\x92\x74", 716, 32, 0, CAN_F17R2_fields, 32}, /* F17R2: Filter bank 17 register 2 */
   {"\x19\xc8\xd2\x70", 720, 32, 0, CAN_F18R1_fields, 32}, /* F18R1: Filter bank 18 register 1 */
   {"\x19\xc8\xd2\x74", 724, 32, 0, CAN_F18R2_fields, 32}, /* F18R2: Filter bank 18 register 2 */
   {"\x19\xc9\x12\x70", 728, 32, 0, CAN_F19R1_fields, 32}, /* F19R1: Filter bank 19 register 1 */
   {"\x19\xc9\x12\x74", 732, 32, 0, CAN_F19R2_fields, 32}, /* F19R2: Filter bank 19 register 2 */
   {"\x19\xd6\xd2\x70", 736, 32, 0, CAN_F20R1_fields, 32}, /* F20R1: Filter bank 20 register 1 */
   {"\x19\xd6\xd2\x74", 740, 32, 0, CAN_F20R2_fields, 32}, /* F20R2: Filter bank 20 register 2 */
   {"\x19\xd7\x12\x70", 744, 32, 0, CAN_F21R1_fields, 32}, /* F21R1: Filter bank 21 register 1 */
   {"\x19\xd7\x12\x74", 748, 32, 0, CAN_F21R2_fields, 32}, /* F21R2: Filter bank 21 register 2 */
   {"\x19\xd7\x52\x70", 752, 32, 0, CAN_F22R1_fields, 32}, /* F22R1: Filter bank 22 register 1 */
   {"\x19\xd7\x52\x74", 756, 32, 0, CAN_F22R2_fields, 32}, /* F22R2: Filter bank 22 register 2 */
   {"\x19\xd7\x92\x70", 760, 32, 0, CAN_F23R1_fields, 32}, /* F23R1: Filter bank 23 register 1 */
   {"\x19\xd7\x92\x74", 764, 32, 0, CAN_F23R2_fields, 32}, /* F23R2: Filter bank 23 register 2 */
   {"\x19\xd7\xd2\x70", 768, 32, 0, CAN_F24R1_fields, 32}, /* F24R1: Filter bank 24 register 1 */
   {"\x19\xd7\xd2\x74", 772, 32, 0, CAN_F24R2_fields, 32}, /* F24R2: Filter bank 24 register 2 */
   {"\x19\xd8\x12\x70", 776, 32, 0, CAN_F25R1_fields, 32}, /* F25R1: Filter bank 25 register 1 */
   {"\x19\xd8\x12\x74", 780, 32, 0, CAN_F25R2_fields, 32}, /* F25R2: Filter bank 25 register 2 */
   {"\x19\xd8\x52\x70", 784, 32, 0, CAN_F26R1_fields, 32}, /* F26R1: Filter bank 26 register 1 */
   {"\x19\xd8\x52\x74", 788, 32, 0, CAN_F26R2_fields, 32}, /* F26R2: Filter bank 26 register 2 */
   {"\x19\xd8\x92\x70", 792, 32, 0, CAN_F27R1_fields, 32}, /* F27R1: Filter bank 27 register 1 */
   {"\x19\xd8\x92\x74", 796, 32, 0, CAN_F27R2_fields, 32}, /* F27R2: Filter bank 27 register 2 */
};

const Field_t PWR_CR_fields[] = {
   { "\x31\x01\x13", 0, 1 },  /* LPDS: Low-power deep sleep */
   { "\x40\x41\x13", 1, 1 },  /* PDDS: Power down deepsleep */
   { "\x0d\x75\x46", 2, 1 },  /* CWUF: Clear wakeup flag */
   { "\x0d\x30\x86", 3, 1 },  /* CSBF: Clear standby flag */
   { "\x41\x61\x05", 4, 1 },  /* PVDE: Power voltage detector               enable */
   { "\x40\xc4\xc0", 5, 3 },  /* PLS: PVD level selection */
   { "\x10\x24\x00", 8, 1 },  /* DBP: Disable backup domain write               protection */
};

const Field_t PWR_CSR_fields[] = {
   { "\x5d\x51\x80", 0, 1 },  /* WUF: Wakeup flag */
   { "\x4c\x21\x80", 1, 1 },  /* SBF: Standby flag */
   { "\x41\x61\x0f", 2, 1 },  /* PVDO: PVD output */
   { "\x15\x75\x50\x70", 8, 1 },  /* EWUP1: Enable WKUP1 pin */
   { "\x15\x75\x50\x74", 9, 1 },  /* EWUP2: Enable WKUP2 pin */
};

const Register_t PWR_registers[] = {
   {"\x0d\x20", 0, 32, 0, PWR_CR_fields, 7}, /* CR: power control register */
   {"\x0d\x34\x80", 4, 32, 0, PWR_CSR_fields, 5}, /* CSR: power control/status register */
};

const Field_t DAC_CR_fields[] = {
   { "\x14\xe7\x00", 0, 1 },  /* EN1: DAC channel1 enable */
   { "\x08\xf1\x86\x70", 1, 1 },  /* BOFF1: DAC channel1 output buffer               disable */
   { "\x50\x53\x9c", 2, 1 },  /* TEN1: DAC channel1 trigger               enable */
   { "\x51\x31\x4c\x70", 3, 3 },  /* TSEL1: DAC channel1 trigger               selection */
   { "\x5c\x15\x85\x70", 6, 2 },  /* WAVE1: DAC channel1 noise/triangle wave               generation enable */
   { "\x34\x13\x50\x70", 8, 4 },  /* MAMP1: DAC channel1 mask/amplitude               selector */
   { "\x10\xd0\x45\x39\xc0", 12, 1 },  /* DMAEN1: DAC channel1 DMA enable */
   { "\x10\xd0\x55\x11\x22\x45\x70", 13, 1 },  /* DMAUDRIE1: DAC channel1 DMA Underrun Interrupt               enable */
   { "\x14\xe7\x40", 16, 1 },  /* EN2: DAC channel2 enable */
   { "\x08\xf1\x86\x74", 17, 1 },  /* BOFF2: DAC channel2 output buffer               disable */
   { "\x50\x53\x9d", 18, 1 },  /* TEN2: DAC channel2 trigger               enable */
   { "\x51\x31\x4c\x74", 19, 3 },  /* TSEL2: DAC channel2 trigger               selection */
   { "\x5c\x15\x85\x74", 22, 2 },  /* WAVE2: DAC channel2 noise/triangle wave               generation enable */
   { "\x34\x13\x50\x74", 24, 4 },  /* MAMP2: DAC channel2 mask/amplitude               selector */
   { "\x10\xd0\x45\x39\xd0", 28, 1 },  /* DMAEN2: DAC channel2 DMA enable */
   { "\x10\xd0\x55\x11\x22\x45\x74", 29, 1 },  /* DMAUDRIE2: DAC channel2 DMA underrun interrupt               enable */
};

const Field_t DAC_SWTRIGR_fields[] = {
   { "\x4d\x75\x12\x24\x77\x00", 0, 1 },  /* SWTRIG1: DAC channel1 software               trigger */
   { "\x4d\x75\x12\x24\x77\x40", 1, 1 },  /* SWTRIG2: DAC channel2 software               trigger */
};

const Field_t DAC_DHR12R1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 12 },  /* DACC1DHR: DAC channel1 12-bit right-aligned               data */
};

const Field_t DAC_DHR12L1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 4, 12 },  /* DACC1DHR: DAC channel1 12-bit left-aligned               data */
};

const Field_t DAC_DHR8R1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 8 },  /* DACC1DHR: DAC channel1 8-bit right-aligned               data */
};

const Field_t DAC_DHR12R2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 0, 12 },  /* DACC2DHR: DAC channel2 12-bit right-aligned               data */
};

const Field_t DAC_DHR12L2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 4, 12 },  /* DACC2DHR: DAC channel2 12-bit left-aligned               data */
};

const Field_t DAC_DHR8R2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 0, 8 },  /* DACC2DHR: DAC channel2 8-bit right-aligned               data */
};

const Field_t DAC_DHR12RD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 12 },  /* DACC1DHR: DAC channel1 12-bit right-aligned               data */
   { "\x10\x10\xc3\x74\x42\x12", 16, 12 },  /* DACC2DHR: DAC channel2 12-bit right-aligned               data */
};

const Field_t DAC_DHR12LD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 4, 12 },  /* DACC1DHR: DAC channel1 12-bit left-aligned               data */
   { "\x10\x10\xc3\x74\x42\x12", 20, 12 },  /* DACC2DHR: DAC channel2 12-bit left-aligned               data */
};

const Field_t DAC_DHR8RD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 8 },  /* DACC1DHR: DAC channel1 8-bit right-aligned               data */
   { "\x10\x10\xc3\x74\x42\x12", 8, 8 },  /* DACC2DHR: DAC channel2 8-bit right-aligned               data */
};

const Field_t DAC_DOR1_fields[] = {
   { "\x10\x10\xc3\x70\x43\xd2", 0, 12 },  /* DACC1DOR: DAC channel1 data output */
};

const Field_t DAC_DOR2_fields[] = {
   { "\x10\x10\xc3\x74\x43\xd2", 0, 12 },  /* DACC2DOR: DAC channel2 data output */
};

const Field_t DAC_SR_fields[] = {
   { "\x10\xd0\x55\x11\x27\x00", 13, 1 },  /* DMAUDR1: DAC channel1 DMA underrun               flag */
   { "\x10\xd0\x55\x11\x27\x40", 29, 1 },  /* DMAUDR2: DAC channel2 DMA underrun               flag */
};

const Register_t DAC_registers[] = {
   {"\x0d\x20", 0, 32, 0, DAC_CR_fields, 16}, /* CR: control register */
   {"\x4d\x75\x12\x24\x74\x80", 4, 32, 0, DAC_SWTRIGR_fields, 2}, /* SWTRIGR: software trigger register */
   {"\x10\x84\x9c\x75\x27\x00", 8, 32, 0, DAC_DHR12R1_fields, 1}, /* DHR12R1: channel1 12-bit right-aligned data holding           register */
   {"\x10\x84\x9c\x74\xc7\x00", 12, 32, 0, DAC_DHR12L1_fields, 1}, /* DHR12L1: channel1 12-bit left aligned data holding           register */
   {"\x10\x84\xa3\x49\xc0", 16, 32, 0, DAC_DHR8R1_fields, 1}, /* DHR8R1: channel1 8-bit right aligned data holding           register */
   {"\x10\x84\x9c\x75\x27\x40", 20, 32, 0, DAC_DHR12R2_fields, 1}, /* DHR12R2: channel2 12-bit right aligned data holding           register */
   {"\x10\x84\x9c\x74\xc7\x40", 24, 32, 0, DAC_DHR12L2_fields, 1}, /* DHR12L2: channel2 12-bit left aligned data holding           register */
   {"\x10\x84\xa3\x49\xd0", 28, 32, 0, DAC_DHR8R2_fields, 1}, /* DHR8R2: channel2 8-bit right-aligned data holding           register */
   {"\x10\x84\x9c\x75\x21\x00", 32, 32, 0, DAC_DHR12RD_fields, 2}, /* DHR12RD: Dual DAC 12-bit right-aligned data holding           register */
   {"\x10\x84\x9c\x74\xc1\x00", 36, 32, 0, DAC_DHR12LD_fields, 2}, /* DHR12LD: DUAL DAC 12-bit left aligned data holding           register */
   {"\x10\x84\xa3\x48\x40", 40, 32, 0, DAC_DHR8RD_fields, 2}, /* DHR8RD: DUAL DAC 8-bit right aligned data holding           register */
   {"\x10\xf4\x9c", 44, 32, 0, DAC_DOR1_fields, 1}, /* DOR1: channel1 data output register */
   {"\x10\xf4\x9d", 48, 32, 0, DAC_DOR2_fields, 1}, /* DOR2: channel2 data output register */
   {"\x4d\x20", 52, 32, 0, DAC_SR_fields, 2}, /* SR: status register */
};

const Field_t SYSCFG_CFGR1_fields[] = {
   { "\x34\x53\x65\x34\xf1\x05", 0, 2 },  /* MEM_MODE: Memory mapping selection               bits */
   { "\x55\x30\xa5\x25\x49\x52\x35\x00", 5, 1 },  /* USB_IT_RMP: USB interrupt remap */
   { "\x50\x93\x5c\x94\x95\x12\x95\x23\x50", 6, 1 },  /* TIM1_ITR_RMP: Timer 1 ITR3 selection */
   { "\x10\x10\xe5\x51\x22\x47\x95\x23\x50", 7, 1 },  /* DAC_TRIG_RMP: DAC trigger remap (when TSEL =               001) */
   { "\x04\x40\xdd\x7e\x51\x0d\x06\x54\x8d\x40", 8, 1 },  /* ADC24_DMA_RMP: ADC24 DMA remapping bit */
   { "\x50\x93\x5c\x86\x51\x0d\x06\x54\x8d\x40", 11, 1 },  /* TIM16_DMA_RMP: TIM16 DMA request remapping               bit */
   { "\x50\x93\x5c\x8a\x51\x0d\x06\x54\x8d\x40", 12, 1 },  /* TIM17_DMA_RMP: TIM17 DMA request remapping               bit */
   { "\x50\x93\x61\x94\x40\x43\x72\x51\x0d\x06\x54\x8d\x40", 13, 1 },  /* TIM6_DAC1_DMA_RMP: TIM6 and DAC1 DMA request remapping               bit */
   { "\x50\x93\x62\x94\x40\x43\x76\x51\x0d\x06\x54\x8d\x40", 14, 1 },  /* TIM7_DAC2_DMA_RMP: TIM7 and DAC2 DMA request remapping               bit */
   { "\x25\xd0\xe5\x40\x28\x65\x18\xd0", 16, 1 },  /* I2C_PB6_FM: Fast Mode Plus (FM+) driving capability               activation bits. */
   { "\x25\xd0\xe5\x40\x28\xa5\x18\xd0", 17, 1 },  /* I2C_PB7_FM: Fast Mode Plus (FM+) driving capability               activation bits. */
   { "\x25\xd0\xe5\x40\x28\xe5\x18\xd0", 18, 1 },  /* I2C_PB8_FM: Fast Mode Plus (FM+) driving capability               activation bits. */
   { "\x25\xd0\xe5\x40\x29\x25\x18\xd0", 19, 1 },  /* I2C_PB9_FM: Fast Mode Plus (FM+) driving capability               activation bits. */
   { "\x25\xd0\xdc\x94\x63\x40", 20, 1 },  /* I2C1_FM: I2C1 Fast Mode Plus */
   { "\x25\xd0\xdd\x94\x63\x40", 21, 1 },  /* I2C2_FM: I2C2 Fast Mode Plus */
   { "\x14\xe0\xcf\x10\x54\xa5\x34\xf1\x05", 22, 2 },  /* ENCODER_MODE: Encoder mode */
   { "\x19\x05\x65\x25\x40", 26, 6 },  /* FPU_IT: Interrupt enable bits from               FPU */
};

const Field_t SYSCFG_RCR_fields[] = {
   { "\x40\x11\xc5\x6e\x55\xd0", 0, 1 },  /* PAGE0_WP: CCM SRAM page write protection               bit */
   { "\x40\x11\xc5\x72\x55\xd0", 1, 1 },  /* PAGE1_WP: CCM SRAM page write protection               bit */
   { "\x40\x11\xc5\x76\x55\xd0", 2, 1 },  /* PAGE2_WP: CCM SRAM page write protection               bit */
   { "\x40\x11\xc5\x7a\x55\xd0", 3, 1 },  /* PAGE3_WP: CCM SRAM page write protection               bit */
   { "\x40\x11\xc5\x7e\x55\xd0", 4, 1 },  /* PAGE4_WP: CCM SRAM page write protection               bit */
   { "\x40\x11\xc5\x82\x55\xd0", 5, 1 },  /* PAGE5_WP: CCM SRAM page write protection               bit */
   { "\x40\x11\xc5\x86\x55\xd0", 6, 1 },  /* PAGE6_WP: CCM SRAM page write protection               bit */
   { "\x40\x11\xc5\x8a\x55\xd0", 7, 1 },  /* PAGE7_WP: CCM SRAM page write protection               bit */
};

const Field_t SYSCFG_EXTICR1_fields[] = {
   { "\x15\x85\x09\x6c", 0, 4 },  /* EXTI0: EXTI 0 configuration bits */
   { "\x15\x85\x09\x70", 4, 4 },  /* EXTI1: EXTI 1 configuration bits */
   { "\x15\x85\x09\x74", 8, 4 },  /* EXTI2: EXTI 2 configuration bits */
   { "\x15\x85\x09\x78", 12, 4 },  /* EXTI3: EXTI 3 configuration bits */
};

const Field_t SYSCFG_EXTICR2_fields[] = {
   { "\x15\x85\x09\x7c", 0, 4 },  /* EXTI4: EXTI 4 configuration bits */
   { "\x15\x85\x09\x80", 4, 4 },  /* EXTI5: EXTI 5 configuration bits */
   { "\x15\x85\x09\x84", 8, 4 },  /* EXTI6: EXTI 6 configuration bits */
   { "\x15\x85\x09\x88", 12, 4 },  /* EXTI7: EXTI 7 configuration bits */
};

const Field_t SYSCFG_EXTICR3_fields[] = {
   { "\x15\x85\x09\x8c", 0, 4 },  /* EXTI8: EXTI 8 configuration bits */
   { "\x15\x85\x09\x90", 4, 4 },  /* EXTI9: EXTI 9 configuration bits */
   { "\x15\x85\x09\x71\xb0", 8, 4 },  /* EXTI10: EXTI 10 configuration bits */
   { "\x15\x85\x09\x71\xc0", 12, 4 },  /* EXTI11: EXTI 11 configuration bits */
};

const Field_t SYSCFG_EXTICR4_fields[] = {
   { "\x15\x85\x09\x71\xd0", 0, 4 },  /* EXTI12: EXTI 12 configuration bits */
   { "\x15\x85\x09\x71\xe0", 4, 4 },  /* EXTI13: EXTI 13 configuration bits */
   { "\x15\x85\x09\x71\xf0", 8, 4 },  /* EXTI14: EXTI 14 configuration bits */
   { "\x15\x85\x09\x72\x00", 12, 4 },  /* EXTI15: EXTI 15 configuration bits */
};

const Field_t SYSCFG_CFGR2_fields[] = {
   { "\x30\xf0\xd5\x42\x53\x0f\x0c\xb0", 0, 1 },  /* LOCUP_LOCK: Cortex-M0 LOCKUP bit enable               bit */
   { "\x4d\x20\x4d\x95\x00\x52\x25\x46\x65\x30\xf0\xcb", 1, 1 },  /* SRAM_PARITY_LOCK: SRAM parity lock bit */
   { "\x41\x61\x25\x30\xf0\xcb", 2, 1 },  /* PVD_LOCK: PVD lock enable bit */
   { "\x09\x94\x25\x04\x41\x25\x40\x14\x80", 4, 1 },  /* BYP_ADD_PAR: Bypass address bit 29 in parity               calculation */
   { "\x4d\x20\x4d\x95\x01\x46", 8, 1 },  /* SRAM_PEF: SRAM parity flag */
};

const Register_t SYSCFG_registers[] = {
   {"\x0c\x61\xd2\x70", 0, 32, 0, SYSCFG_CFGR1_fields, 17}, /* CFGR1: configuration register 1 */
   {"\x48\x34\x80", 4, 32, 0, SYSCFG_RCR_fields, 8}, /* RCR: CCM SRAM protection register */
   {"\x15\x85\x09\x0d\x27\x00", 8, 32, 0, SYSCFG_EXTICR1_fields, 4}, /* EXTICR1: external interrupt configuration register           1 */
   {"\x15\x85\x09\x0d\x27\x40", 12, 32, 0, SYSCFG_EXTICR2_fields, 4}, /* EXTICR2: external interrupt configuration register           2 */
   {"\x15\x85\x09\x0d\x27\x80", 16, 32, 0, SYSCFG_EXTICR3_fields, 4}, /* EXTICR3: external interrupt configuration register           3 */
   {"\x15\x85\x09\x0d\x27\xc0", 20, 32, 0, SYSCFG_EXTICR4_fields, 4}, /* EXTICR4: external interrupt configuration register           4 */
   {"\x0c\x61\xd2\x74", 24, 32, 0, SYSCFG_CFGR2_fields, 5}, /* CFGR2: configuration register 2 */
};

const Field_t COMP_COMP1_CSR_fields[] = {
   { "\x0c\xf3\x50\x70\x53\x80", 0, 1 },  /* COMP1EN: Comparator 1 enable */
   { "\x0c\xf3\x50\x72\x52\x4e\x42\x51\x01\x0c", 1, 1 },  /* COMP1_INP_DAC: COMP1_INP_DAC */
   { "\x0c\xf3\x50\x70\xd3\xc4\x14", 2, 2 },  /* COMP1MODE: Comparator 1 mode */
   { "\x0c\xf3\x50\x70\x93\x93\x14\xc0", 4, 3 },  /* COMP1INSEL: Comparator 1 inverting input               selection */
   { "\x0c\xf3\x50\x72\x53\xd5\x52\x54\xc5\x30", 10, 4 },  /* COMP1_OUT_SEL: Comparator 1 output               selection */
   { "\x0c\xf3\x50\x71\x03\xcc", 15, 1 },  /* COMP1POL: Comparator 1 output               polarity */
   { "\x0c\xf3\x50\x70\x86\x53\x50", 16, 2 },  /* COMP1HYST: Comparator 1 hysteresis */
   { "\x0c\xf3\x50\x72\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP1_BLANKING: Comparator 1 blanking               source */
   { "\x0c\xf3\x50\x70\xf5\x54", 30, 1 },  /* COMP1OUT: Comparator 1 output */
   { "\x0c\xf3\x50\x70\xc3\xc3\x2c", 31, 1 },  /* COMP1LOCK: Comparator 1 lock */
};

const Field_t COMP_COMP2_CSR_fields[] = {
   { "\x0c\xf3\x50\x74\x53\x80", 0, 1 },  /* COMP2EN: Comparator 2 enable */
   { "\x0c\xf3\x50\x74\xd3\xc4\x14", 2, 2 },  /* COMP2MODE: Comparator 2 mode */
   { "\x0c\xf3\x50\x74\x93\x93\x14\xc0", 4, 3 },  /* COMP2INSEL: Comparator 2 inverting input               selection */
   { "\x0c\xf3\x50\x74\x93\x90\x4c\x53\x00", 7, 1 },  /* COMP2INPSEL: Comparator 2 non inverted input               selection */
   { "\x0c\xf3\x50\x74\x93\x8d\x4c\x53\x00", 9, 1 },  /* COMP2INMSEL: Comparator 1inverting input               selection */
   { "\x0c\xf3\x50\x76\x53\xd5\x52\x54\xc5\x30", 10, 4 },  /* COMP2_OUT_SEL: Comparator 2 output               selection */
   { "\x0c\xf3\x50\x75\x03\xcc", 15, 1 },  /* COMP2POL: Comparator 2 output               polarity */
   { "\x0c\xf3\x50\x74\x86\x53\x50", 16, 2 },  /* COMP2HYST: Comparator 2 hysteresis */
   { "\x0c\xf3\x50\x76\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP2_BLANKING: Comparator 2 blanking               source */
   { "\x0c\xf3\x50\x74\xc3\xc3\x2c", 31, 1 },  /* COMP2LOCK: Comparator 2 lock */
};

const Field_t COMP_COMP3_CSR_fields[] = {
   { "\x0c\xf3\x50\x78\x53\x80", 0, 1 },  /* COMP3EN: Comparator 3 enable */
   { "\x0c\xf3\x50\x78\xd3\xc4\x14", 2, 2 },  /* COMP3MODE: Comparator 3 mode */
   { "\x0c\xf3\x50\x78\x93\x93\x14\xc0", 4, 3 },  /* COMP3INSEL: Comparator 3 inverting input               selection */
   { "\x0c\xf3\x50\x78\x93\x90\x4c\x53\x00", 7, 1 },  /* COMP3INPSEL: Comparator 3 non inverted input               selection */
   { "\x0c\xf3\x50\x7a\x53\xd5\x52\x54\xc5\x30", 10, 4 },  /* COMP3_OUT_SEL: Comparator 3 output               selection */
   { "\x0c\xf3\x50\x79\x03\xcc", 15, 1 },  /* COMP3POL: Comparator 3 output               polarity */
   { "\x0c\xf3\x50\x78\x86\x53\x50", 16, 2 },  /* COMP3HYST: Comparator 3 hysteresis */
   { "\x0c\xf3\x50\x7a\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP3_BLANKING: Comparator 3 blanking               source */
   { "\x0c\xf3\x50\x78\xf5\x54", 30, 1 },  /* COMP3OUT: Comparator 3 output */
   { "\x0c\xf3\x50\x78\xc3\xc3\x2c", 31, 1 },  /* COMP3LOCK: Comparator 3 lock */
};

const Field_t COMP_COMP4_CSR_fields[] = {
   { "\x0c\xf3\x50\x7c\x53\x80", 0, 1 },  /* COMP4EN: Comparator 4 enable */
   { "\x0c\xf3\x50\x7c\xd3\xc4\x14", 2, 2 },  /* COMP4MODE: Comparator 4 mode */
   { "\x0c\xf3\x50\x7c\x93\x93\x14\xc0", 4, 3 },  /* COMP4INSEL: Comparator 4 inverting input               selection */
   { "\x0c\xf3\x50\x7c\x93\x90\x4c\x53\x00", 7, 1 },  /* COMP4INPSEL: Comparator 4 non inverted input               selection */
   { "\x0c\xf3\x5f\x5c\x93\x8d\x3c\x41\x40", 9, 1 },  /* COM4WINMODE: Comparator 4 window mode */
   { "\x0c\xf3\x50\x7e\x53\xd5\x52\x54\xc5\x30", 10, 4 },  /* COMP4_OUT_SEL: Comparator 4 output               selection */
   { "\x0c\xf3\x50\x7d\x03\xcc", 15, 1 },  /* COMP4POL: Comparator 4 output               polarity */
   { "\x0c\xf3\x50\x7c\x86\x53\x50", 16, 2 },  /* COMP4HYST: Comparator 4 hysteresis */
   { "\x0c\xf3\x50\x7e\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP4_BLANKING: Comparator 4 blanking               source */
   { "\x0c\xf3\x50\x7c\xf5\x54", 30, 1 },  /* COMP4OUT: Comparator 4 output */
   { "\x0c\xf3\x50\x7c\xc3\xc3\x2c", 31, 1 },  /* COMP4LOCK: Comparator 4 lock */
};

const Field_t COMP_COMP5_CSR_fields[] = {
   { "\x0c\xf3\x50\x80\x53\x80", 0, 1 },  /* COMP5EN: Comparator 5 enable */
   { "\x0c\xf3\x50\x80\xd3\xc4\x14", 2, 2 },  /* COMP5MODE: Comparator 5 mode */
   { "\x0c\xf3\x50\x80\x93\x93\x14\xc0", 4, 3 },  /* COMP5INSEL: Comparator 5 inverting input               selection */
   { "\x0c\xf3\x50\x80\x93\x90\x4c\x53\x00", 7, 1 },  /* COMP5INPSEL: Comparator 5 non inverted input               selection */
   { "\x0c\xf3\x50\x82\x53\xd5\x52\x54\xc5\x30", 10, 4 },  /* COMP5_OUT_SEL: Comparator 5 output               selection */
   { "\x0c\xf3\x50\x81\x03\xcc", 15, 1 },  /* COMP5POL: Comparator 5 output               polarity */
   { "\x0c\xf3\x50\x80\x86\x53\x50", 16, 2 },  /* COMP5HYST: Comparator 5 hysteresis */
   { "\x0c\xf3\x50\x82\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP5_BLANKING: Comparator 5 blanking               source */
   { "\x0c\xf3\x50\x80\xf5\x54", 30, 1 },  /* COMP5OUT: Comparator51 output */
   { "\x0c\xf3\x50\x80\xc3\xc3\x2c", 31, 1 },  /* COMP5LOCK: Comparator 5 lock */
};

const Field_t COMP_COMP6_CSR_fields[] = {
   { "\x0c\xf3\x50\x84\x53\x80", 0, 1 },  /* COMP6EN: Comparator 6 enable */
   { "\x0c\xf3\x50\x84\xd3\xc4\x14", 2, 2 },  /* COMP6MODE: Comparator 6 mode */
   { "\x0c\xf3\x50\x84\x93\x93\x14\xc0", 4, 3 },  /* COMP6INSEL: Comparator 6 inverting input               selection */
   { "\x0c\xf3\x50\x84\x93\x90\x4c\x53\x00", 7, 1 },  /* COMP6INPSEL: Comparator 6 non inverted input               selection */
   { "\x0c\xf3\x61\x5c\x93\x8d\x3c\x41\x40", 9, 1 },  /* COM6WINMODE: Comparator 6 window mode */
   { "\x0c\xf3\x50\x86\x53\xd5\x52\x54\xc5\x30", 10, 4 },  /* COMP6_OUT_SEL: Comparator 6 output               selection */
   { "\x0c\xf3\x50\x85\x03\xcc", 15, 1 },  /* COMP6POL: Comparator 6 output               polarity */
   { "\x0c\xf3\x50\x84\x86\x53\x50", 16, 2 },  /* COMP6HYST: Comparator 6 hysteresis */
   { "\x0c\xf3\x50\x86\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP6_BLANKING: Comparator 6 blanking               source */
   { "\x0c\xf3\x50\x84\xf5\x54", 30, 1 },  /* COMP6OUT: Comparator 6 output */
   { "\x0c\xf3\x50\x84\xc3\xc3\x2c", 31, 1 },  /* COMP6LOCK: Comparator 6 lock */
};

const Field_t COMP_COMP7_CSR_fields[] = {
   { "\x0c\xf3\x50\x88\x53\x80", 0, 1 },  /* COMP7EN: Comparator 7 enable */
   { "\x0c\xf3\x50\x88\xd3\xc4\x14", 2, 2 },  /* COMP7MODE: Comparator 7 mode */
   { "\x0c\xf3\x50\x88\x93\x93\x14\xc0", 4, 3 },  /* COMP7INSEL: Comparator 7 inverting input               selection */
   { "\x0c\xf3\x50\x88\x93\x90\x4c\x53\x00", 7, 1 },  /* COMP7INPSEL: Comparator 7 non inverted input               selection */
   { "\x0c\xf3\x50\x8a\x53\xd5\x52\x54\xc5\x30", 10, 4 },  /* COMP7_OUT_SEL: Comparator 7 output               selection */
   { "\x0c\xf3\x50\x89\x03\xcc", 15, 1 },  /* COMP7POL: Comparator 7 output               polarity */
   { "\x0c\xf3\x50\x88\x86\x53\x50", 16, 2 },  /* COMP7HYST: Comparator 7 hysteresis */
   { "\x0c\xf3\x50\x8a\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP7_BLANKING: Comparator 7 blanking               source */
   { "\x0c\xf3\x50\x88\xf5\x54", 30, 1 },  /* COMP7OUT: Comparator 7 output */
   { "\x0c\xf3\x50\x88\xc3\xc3\x2c", 31, 1 },  /* COMP7LOCK: Comparator 7 lock */
};

const Register_t COMP_registers[] = {
   {"\x0c\xf3\x50\x72\x50\xd3\x48", 0, 32, 0, COMP_COMP1_CSR_fields, 10}, /* COMP1_CSR: control and status register */
   {"\x0c\xf3\x50\x76\x50\xd3\x48", 4, 32, 0, COMP_COMP2_CSR_fields, 10}, /* COMP2_CSR: control and status register */
   {"\x0c\xf3\x50\x7a\x50\xd3\x48", 8, 32, 0, COMP_COMP3_CSR_fields, 10}, /* COMP3_CSR: control and status register */
   {"\x0c\xf3\x50\x7e\x50\xd3\x48", 12, 32, 0, COMP_COMP4_CSR_fields, 11}, /* COMP4_CSR: control and status register */
   {"\x0c\xf3\x50\x82\x50\xd3\x48", 16, 32, 0, COMP_COMP5_CSR_fields, 10}, /* COMP5_CSR: control and status register */
   {"\x0c\xf3\x50\x86\x50\xd3\x48", 20, 32, 0, COMP_COMP6_CSR_fields, 11}, /* COMP6_CSR: control and status register */
   {"\x0c\xf3\x50\x8a\x50\xd3\x48", 24, 32, 0, COMP_COMP7_CSR_fields, 10}, /* COMP7_CSR: control and status register */
};

const Field_t OPAMP_OPAMP1_CR_fields[] = {
   { "\x3d\x00\x4d\x41\xc9\x45\x38", 0, 1 },  /* OPAMP1_EN: OPAMP1 enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: OPAMP1 Non inverting input               selection */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: OPAMP1 inverting input               selection */
   { "\x50\x33\x65\x14\xe0", 7, 1 },  /* TCM_EN: Timer controlled Mux mode               enable */
   { "\x58\xd4\xe5\x4c\x53\x00", 8, 1 },  /* VMS_SEL: OPAMP1 inverting input secondary               selection */
   { "\x59\x04\xe5\x4c\x53\x00", 9, 2 },  /* VPS_SEL: OPAMP1 Non inverting input secondary               selection */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: Calibration mode enable */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: Calibration selection */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 4 },  /* PGA_GAIN: Gain in PGA mode */
   { "\x55\x31\x52\x95\x44\x89\x34", 18, 1 },  /* USER_TRIM: User trimming enable */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: Offset trimming value               (PMOS) */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: Offset trimming value               (NMOS) */
   { "\x51\x35\x12\x14\x60", 29, 1 },  /* TSTREF: TSTREF */
   { "\x3d\x55\x03\x04\xc0", 30, 1 },  /* OUTCAL: OPAMP 1 ouput status flag */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: OPAMP 1 lock */
};

const Field_t OPAMP_OPAMP2_CR_fields[] = {
   { "\x3d\x00\x4d\x41\xd1\x4e", 0, 1 },  /* OPAMP2EN: OPAMP2 enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: OPAMP2 Non inverting input               selection */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: OPAMP2 inverting input               selection */
   { "\x50\x33\x65\x14\xe0", 7, 1 },  /* TCM_EN: Timer controlled Mux mode               enable */
   { "\x58\xd4\xe5\x4c\x53\x00", 8, 1 },  /* VMS_SEL: OPAMP2 inverting input secondary               selection */
   { "\x59\x04\xe5\x4c\x53\x00", 9, 2 },  /* VPS_SEL: OPAMP2 Non inverting input secondary               selection */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: Calibration mode enable */
   { "\x0c\x13\x25\x4c\x53\x00", 12, 2 },  /* CAL_SEL: Calibration selection */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 4 },  /* PGA_GAIN: Gain in PGA mode */
   { "\x55\x31\x52\x95\x44\x89\x34", 18, 1 },  /* USER_TRIM: User trimming enable */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: Offset trimming value               (PMOS) */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: Offset trimming value               (NMOS) */
   { "\x51\x35\x12\x14\x60", 29, 1 },  /* TSTREF: TSTREF */
   { "\x3d\x55\x03\x04\xc0", 30, 1 },  /* OUTCAL: OPAMP 2 ouput status flag */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: OPAMP 2 lock */
};

const Field_t OPAMP_OPAMP3_CR_fields[] = {
   { "\x3d\x00\x4d\x41\xe1\x4e", 0, 1 },  /* OPAMP3EN: OPAMP3 enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: OPAMP3 Non inverting input               selection */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: OPAMP3 inverting input               selection */
   { "\x50\x33\x65\x14\xe0", 7, 1 },  /* TCM_EN: Timer controlled Mux mode               enable */
   { "\x58\xd4\xe5\x4c\x53\x00", 8, 1 },  /* VMS_SEL: OPAMP3 inverting input secondary               selection */
   { "\x59\x04\xe5\x4c\x53\x00", 9, 2 },  /* VPS_SEL: OPAMP3 Non inverting input secondary               selection */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: Calibration mode enable */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: Calibration selection */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 4 },  /* PGA_GAIN: Gain in PGA mode */
   { "\x55\x31\x52\x95\x44\x89\x34", 18, 1 },  /* USER_TRIM: User trimming enable */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: Offset trimming value               (PMOS) */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: Offset trimming value               (NMOS) */
   { "\x51\x35\x12\x14\x60", 29, 1 },  /* TSTREF: TSTREF */
   { "\x3d\x55\x03\x04\xc0", 30, 1 },  /* OUTCAL: OPAMP 3 ouput status flag */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: OPAMP 3 lock */
};

const Field_t OPAMP_OPAMP4_CR_fields[] = {
   { "\x3d\x00\x4d\x41\xf1\x4e", 0, 1 },  /* OPAMP4EN: OPAMP4 enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: OPAMP4 Non inverting input               selection */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: OPAMP4 inverting input               selection */
   { "\x50\x33\x65\x14\xe0", 7, 1 },  /* TCM_EN: Timer controlled Mux mode               enable */
   { "\x58\xd4\xe5\x4c\x53\x00", 8, 1 },  /* VMS_SEL: OPAMP4 inverting input secondary               selection */
   { "\x59\x04\xe5\x4c\x53\x00", 9, 2 },  /* VPS_SEL: OPAMP4 Non inverting input secondary               selection */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: Calibration mode enable */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: Calibration selection */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 4 },  /* PGA_GAIN: Gain in PGA mode */
   { "\x55\x31\x52\x95\x44\x89\x34", 18, 1 },  /* USER_TRIM: User trimming enable */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: Offset trimming value               (PMOS) */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: Offset trimming value               (NMOS) */
   { "\x51\x35\x12\x14\x60", 29, 1 },  /* TSTREF: TSTREF */
   { "\x3d\x55\x03\x04\xc0", 30, 1 },  /* OUTCAL: OPAMP 4 ouput status flag */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: OPAMP 4 lock */
};

const Register_t OPAMP_registers[] = {
   {"\x3d\x00\x4d\x41\xc9\x43\x48", 0, 32, 0, OPAMP_OPAMP1_CR_fields, 16}, /* OPAMP1_CR: OPAMP1 control register */
   {"\x3d\x00\x4d\x41\xd9\x43\x48", 4, 32, 0, OPAMP_OPAMP2_CR_fields, 16}, /* OPAMP2_CR: OPAMP2 control register */
   {"\x3d\x00\x4d\x41\xe9\x43\x48", 8, 32, 0, OPAMP_OPAMP3_CR_fields, 16}, /* OPAMP3_CR: OPAMP3 control register */
   {"\x3d\x00\x4d\x41\xf9\x43\x48", 12, 32, 0, OPAMP_OPAMP4_CR_fields, 16}, /* OPAMP4_CR: OPAMP4 control register */
};

const Field_t EXTI_IMR1_fields[] = {
   { "\x35\x26\xc0", 0, 1 },  /* MR0: Interrupt Mask on line 0 */
   { "\x35\x27\x00", 1, 1 },  /* MR1: Interrupt Mask on line 1 */
   { "\x35\x27\x40", 2, 1 },  /* MR2: Interrupt Mask on line 2 */
   { "\x35\x27\x80", 3, 1 },  /* MR3: Interrupt Mask on line 3 */
   { "\x35\x27\xc0", 4, 1 },  /* MR4: Interrupt Mask on line 4 */
   { "\x35\x28\x00", 5, 1 },  /* MR5: Interrupt Mask on line 5 */
   { "\x35\x28\x40", 6, 1 },  /* MR6: Interrupt Mask on line 6 */
   { "\x35\x28\x80", 7, 1 },  /* MR7: Interrupt Mask on line 7 */
   { "\x35\x28\xc0", 8, 1 },  /* MR8: Interrupt Mask on line 8 */
   { "\x35\x29\x00", 9, 1 },  /* MR9: Interrupt Mask on line 9 */
   { "\x35\x27\x1b", 10, 1 },  /* MR10: Interrupt Mask on line 10 */
   { "\x35\x27\x1c", 11, 1 },  /* MR11: Interrupt Mask on line 11 */
   { "\x35\x27\x1d", 12, 1 },  /* MR12: Interrupt Mask on line 12 */
   { "\x35\x27\x1e", 13, 1 },  /* MR13: Interrupt Mask on line 13 */
   { "\x35\x27\x1f", 14, 1 },  /* MR14: Interrupt Mask on line 14 */
   { "\x35\x27\x20", 15, 1 },  /* MR15: Interrupt Mask on line 15 */
   { "\x35\x27\x21", 16, 1 },  /* MR16: Interrupt Mask on line 16 */
   { "\x35\x27\x22", 17, 1 },  /* MR17: Interrupt Mask on line 17 */
   { "\x35\x27\x23", 18, 1 },  /* MR18: Interrupt Mask on line 18 */
   { "\x35\x27\x24", 19, 1 },  /* MR19: Interrupt Mask on line 19 */
   { "\x35\x27\x5b", 20, 1 },  /* MR20: Interrupt Mask on line 20 */
   { "\x35\x27\x5c", 21, 1 },  /* MR21: Interrupt Mask on line 21 */
   { "\x35\x27\x5d", 22, 1 },  /* MR22: Interrupt Mask on line 22 */
   { "\x35\x27\x5e", 23, 1 },  /* MR23: Interrupt Mask on line 23 */
   { "\x35\x27\x5f", 24, 1 },  /* MR24: Interrupt Mask on line 24 */
   { "\x35\x27\x60", 25, 1 },  /* MR25: Interrupt Mask on line 25 */
   { "\x35\x27\x61", 26, 1 },  /* MR26: Interrupt Mask on line 26 */
   { "\x35\x27\x62", 27, 1 },  /* MR27: Interrupt Mask on line 27 */
   { "\x35\x27\x63", 28, 1 },  /* MR28: Interrupt Mask on line 28 */
   { "\x35\x27\x64", 29, 1 },  /* MR29: Interrupt Mask on line 29 */
   { "\x35\x27\x9b", 30, 1 },  /* MR30: Interrupt Mask on line 30 */
   { "\x35\x27\x9c", 31, 1 },  /* MR31: Interrupt Mask on line 31 */
};

const Field_t EXTI_EMR1_fields[] = {
   { "\x35\x26\xc0", 0, 1 },  /* MR0: Event Mask on line 0 */
   { "\x35\x27\x00", 1, 1 },  /* MR1: Event Mask on line 1 */
   { "\x35\x27\x40", 2, 1 },  /* MR2: Event Mask on line 2 */
   { "\x35\x27\x80", 3, 1 },  /* MR3: Event Mask on line 3 */
   { "\x35\x27\xc0", 4, 1 },  /* MR4: Event Mask on line 4 */
   { "\x35\x28\x00", 5, 1 },  /* MR5: Event Mask on line 5 */
   { "\x35\x28\x40", 6, 1 },  /* MR6: Event Mask on line 6 */
   { "\x35\x28\x80", 7, 1 },  /* MR7: Event Mask on line 7 */
   { "\x35\x28\xc0", 8, 1 },  /* MR8: Event Mask on line 8 */
   { "\x35\x29\x00", 9, 1 },  /* MR9: Event Mask on line 9 */
   { "\x35\x27\x1b", 10, 1 },  /* MR10: Event Mask on line 10 */
   { "\x35\x27\x1c", 11, 1 },  /* MR11: Event Mask on line 11 */
   { "\x35\x27\x1d", 12, 1 },  /* MR12: Event Mask on line 12 */
   { "\x35\x27\x1e", 13, 1 },  /* MR13: Event Mask on line 13 */
   { "\x35\x27\x1f", 14, 1 },  /* MR14: Event Mask on line 14 */
   { "\x35\x27\x20", 15, 1 },  /* MR15: Event Mask on line 15 */
   { "\x35\x27\x21", 16, 1 },  /* MR16: Event Mask on line 16 */
   { "\x35\x27\x22", 17, 1 },  /* MR17: Event Mask on line 17 */
   { "\x35\x27\x23", 18, 1 },  /* MR18: Event Mask on line 18 */
   { "\x35\x27\x24", 19, 1 },  /* MR19: Event Mask on line 19 */
   { "\x35\x27\x5b", 20, 1 },  /* MR20: Event Mask on line 20 */
   { "\x35\x27\x5c", 21, 1 },  /* MR21: Event Mask on line 21 */
   { "\x35\x27\x5d", 22, 1 },  /* MR22: Event Mask on line 22 */
   { "\x35\x27\x5e", 23, 1 },  /* MR23: Event Mask on line 23 */
   { "\x35\x27\x5f", 24, 1 },  /* MR24: Event Mask on line 24 */
   { "\x35\x27\x60", 25, 1 },  /* MR25: Event Mask on line 25 */
   { "\x35\x27\x61", 26, 1 },  /* MR26: Event Mask on line 26 */
   { "\x35\x27\x62", 27, 1 },  /* MR27: Event Mask on line 27 */
   { "\x35\x27\x63", 28, 1 },  /* MR28: Event Mask on line 28 */
   { "\x35\x27\x64", 29, 1 },  /* MR29: Event Mask on line 29 */
   { "\x35\x27\x9b", 30, 1 },  /* MR30: Event Mask on line 30 */
   { "\x35\x27\x9c", 31, 1 },  /* MR31: Event Mask on line 31 */
};

const Field_t EXTI_RTSR1_fields[] = {
   { "\x51\x26\xc0", 0, 1 },  /* TR0: Rising trigger event configuration of               line 0 */
   { "\x51\x27\x00", 1, 1 },  /* TR1: Rising trigger event configuration of               line 1 */
   { "\x51\x27\x40", 2, 1 },  /* TR2: Rising trigger event configuration of               line 2 */
   { "\x51\x27\x80", 3, 1 },  /* TR3: Rising trigger event configuration of               line 3 */
   { "\x51\x27\xc0", 4, 1 },  /* TR4: Rising trigger event configuration of               line 4 */
   { "\x51\x28\x00", 5, 1 },  /* TR5: Rising trigger event configuration of               line 5 */
   { "\x51\x28\x40", 6, 1 },  /* TR6: Rising trigger event configuration of               line 6 */
   { "\x51\x28\x80", 7, 1 },  /* TR7: Rising trigger event configuration of               line 7 */
   { "\x51\x28\xc0", 8, 1 },  /* TR8: Rising trigger event configuration of               line 8 */
   { "\x51\x29\x00", 9, 1 },  /* TR9: Rising trigger event configuration of               line 9 */
   { "\x51\x27\x1b", 10, 1 },  /* TR10: Rising trigger event configuration of               line 10 */
   { "\x51\x27\x1c", 11, 1 },  /* TR11: Rising trigger event configuration of               line 11 */
   { "\x51\x27\x1d", 12, 1 },  /* TR12: Rising trigger event configuration of               line 12 */
   { "\x51\x27\x1e", 13, 1 },  /* TR13: Rising trigger event configuration of               line 13 */
   { "\x51\x27\x1f", 14, 1 },  /* TR14: Rising trigger event configuration of               line 14 */
   { "\x51\x27\x20", 15, 1 },  /* TR15: Rising trigger event configuration of               line 15 */
   { "\x51\x27\x21", 16, 1 },  /* TR16: Rising trigger event configuration of               line 16 */
   { "\x51\x27\x22", 17, 1 },  /* TR17: Rising trigger event configuration of               line 17 */
   { "\x51\x27\x23", 18, 1 },  /* TR18: Rising trigger event configuration of               line 18 */
   { "\x51\x27\x24", 19, 1 },  /* TR19: Rising trigger event configuration of               line 19 */
   { "\x51\x27\x5b", 20, 1 },  /* TR20: Rising trigger event configuration of               line 20 */
   { "\x51\x27\x5c", 21, 1 },  /* TR21: Rising trigger event configuration of               line 21 */
   { "\x51\x27\x5d", 22, 1 },  /* TR22: Rising trigger event configuration of               line 22 */
   { "\x51\x27\x64", 29, 1 },  /* TR29: Rising trigger event configuration of               line 29 */
   { "\x51\x27\x9b", 30, 1 },  /* TR30: Rising trigger event configuration of               line 30 */
   { "\x51\x27\x9c", 31, 1 },  /* TR31: Rising trigger event configuration of               line 31 */
};

const Field_t EXTI_FTSR1_fields[] = {
   { "\x51\x26\xc0", 0, 1 },  /* TR0: Falling trigger event configuration of               line 0 */
   { "\x51\x27\x00", 1, 1 },  /* TR1: Falling trigger event configuration of               line 1 */
   { "\x51\x27\x40", 2, 1 },  /* TR2: Falling trigger event configuration of               line 2 */
   { "\x51\x27\x80", 3, 1 },  /* TR3: Falling trigger event configuration of               line 3 */
   { "\x51\x27\xc0", 4, 1 },  /* TR4: Falling trigger event configuration of               line 4 */
   { "\x51\x28\x00", 5, 1 },  /* TR5: Falling trigger event configuration of               line 5 */
   { "\x51\x28\x40", 6, 1 },  /* TR6: Falling trigger event configuration of               line 6 */
   { "\x51\x28\x80", 7, 1 },  /* TR7: Falling trigger event configuration of               line 7 */
   { "\x51\x28\xc0", 8, 1 },  /* TR8: Falling trigger event configuration of               line 8 */
   { "\x51\x29\x00", 9, 1 },  /* TR9: Falling trigger event configuration of               line 9 */
   { "\x51\x27\x1b", 10, 1 },  /* TR10: Falling trigger event configuration of               line 10 */
   { "\x51\x27\x1c", 11, 1 },  /* TR11: Falling trigger event configuration of               line 11 */
   { "\x51\x27\x1d", 12, 1 },  /* TR12: Falling trigger event configuration of               line 12 */
   { "\x51\x27\x1e", 13, 1 },  /* TR13: Falling trigger event configuration of               line 13 */
   { "\x51\x27\x1f", 14, 1 },  /* TR14: Falling trigger event configuration of               line 14 */
   { "\x51\x27\x20", 15, 1 },  /* TR15: Falling trigger event configuration of               line 15 */
   { "\x51\x27\x21", 16, 1 },  /* TR16: Falling trigger event configuration of               line 16 */
   { "\x51\x27\x22", 17, 1 },  /* TR17: Falling trigger event configuration of               line 17 */
   { "\x51\x27\x23", 18, 1 },  /* TR18: Falling trigger event configuration of               line 18 */
   { "\x51\x27\x24", 19, 1 },  /* TR19: Falling trigger event configuration of               line 19 */
   { "\x51\x27\x5b", 20, 1 },  /* TR20: Falling trigger event configuration of               line 20 */
   { "\x51\x27\x5c", 21, 1 },  /* TR21: Falling trigger event configuration of               line 21 */
   { "\x51\x27\x5d", 22, 1 },  /* TR22: Falling trigger event configuration of               line 22 */
   { "\x51\x27\x64", 29, 1 },  /* TR29: Falling trigger event configuration of               line 29 */
   { "\x51\x27\x9b", 30, 1 },  /* TR30: Falling trigger event configuration of               line 30. */
   { "\x51\x27\x9c", 31, 1 },  /* TR31: Falling trigger event configuration of               line 31 */
};

const Field_t EXTI_SWIER1_fields[] = {
   { "\x4d\x72\x45\x49\xb0", 0, 1 },  /* SWIER0: Software Interrupt on line               0 */
   { "\x4d\x72\x45\x49\xc0", 1, 1 },  /* SWIER1: Software Interrupt on line               1 */
   { "\x4d\x72\x45\x49\xd0", 2, 1 },  /* SWIER2: Software Interrupt on line               2 */
   { "\x4d\x72\x45\x49\xe0", 3, 1 },  /* SWIER3: Software Interrupt on line               3 */
   { "\x4d\x72\x45\x49\xf0", 4, 1 },  /* SWIER4: Software Interrupt on line               4 */
   { "\x4d\x72\x45\x4a\x00", 5, 1 },  /* SWIER5: Software Interrupt on line               5 */
   { "\x4d\x72\x45\x4a\x10", 6, 1 },  /* SWIER6: Software Interrupt on line               6 */
   { "\x4d\x72\x45\x4a\x20", 7, 1 },  /* SWIER7: Software Interrupt on line               7 */
   { "\x4d\x72\x45\x4a\x30", 8, 1 },  /* SWIER8: Software Interrupt on line               8 */
   { "\x4d\x72\x45\x4a\x40", 9, 1 },  /* SWIER9: Software Interrupt on line               9 */
   { "\x4d\x72\x45\x49\xc6\xc0", 10, 1 },  /* SWIER10: Software Interrupt on line               10 */
   { "\x4d\x72\x45\x49\xc7\x00", 11, 1 },  /* SWIER11: Software Interrupt on line               11 */
   { "\x4d\x72\x45\x49\xc7\x40", 12, 1 },  /* SWIER12: Software Interrupt on line               12 */
   { "\x4d\x72\x45\x49\xc7\x80", 13, 1 },  /* SWIER13: Software Interrupt on line               13 */
   { "\x4d\x72\x45\x49\xc7\xc0", 14, 1 },  /* SWIER14: Software Interrupt on line               14 */
   { "\x4d\x72\x45\x49\xc8\x00", 15, 1 },  /* SWIER15: Software Interrupt on line               15 */
   { "\x4d\x72\x45\x49\xc8\x40", 16, 1 },  /* SWIER16: Software Interrupt on line               16 */
   { "\x4d\x72\x45\x49\xc8\x80", 17, 1 },  /* SWIER17: Software Interrupt on line               17 */
   { "\x4d\x72\x45\x49\xc8\xc0", 18, 1 },  /* SWIER18: Software Interrupt on line               18 */
   { "\x4d\x72\x45\x49\xc9\x00", 19, 1 },  /* SWIER19: Software Interrupt on line               19 */
   { "\x4d\x72\x45\x49\xd6\xc0", 20, 1 },  /* SWIER20: Software Interrupt on line               20 */
   { "\x4d\x72\x45\x49\xd7\x00", 21, 1 },  /* SWIER21: Software Interrupt on line               21 */
   { "\x4d\x72\x45\x49\xd7\x40", 22, 1 },  /* SWIER22: Software Interrupt on line               22 */
   { "\x4d\x72\x45\x49\xd9\x00", 29, 1 },  /* SWIER29: Software Interrupt on line               29 */
   { "\x4d\x72\x45\x49\xe6\xc0", 30, 1 },  /* SWIER30: Software Interrupt on line               309 */
   { "\x4d\x72\x45\x49\xe7\x00", 31, 1 },  /* SWIER31: Software Interrupt on line               319 */
};

const Field_t EXTI_PR1_fields[] = {
   { "\x41\x26\xc0", 0, 1 },  /* PR0: Pending bit 0 */
   { "\x41\x27\x00", 1, 1 },  /* PR1: Pending bit 1 */
   { "\x41\x27\x40", 2, 1 },  /* PR2: Pending bit 2 */
   { "\x41\x27\x80", 3, 1 },  /* PR3: Pending bit 3 */
   { "\x41\x27\xc0", 4, 1 },  /* PR4: Pending bit 4 */
   { "\x41\x28\x00", 5, 1 },  /* PR5: Pending bit 5 */
   { "\x41\x28\x40", 6, 1 },  /* PR6: Pending bit 6 */
   { "\x41\x28\x80", 7, 1 },  /* PR7: Pending bit 7 */
   { "\x41\x28\xc0", 8, 1 },  /* PR8: Pending bit 8 */
   { "\x41\x29\x00", 9, 1 },  /* PR9: Pending bit 9 */
   { "\x41\x27\x1b", 10, 1 },  /* PR10: Pending bit 10 */
   { "\x41\x27\x1c", 11, 1 },  /* PR11: Pending bit 11 */
   { "\x41\x27\x1d", 12, 1 },  /* PR12: Pending bit 12 */
   { "\x41\x27\x1e", 13, 1 },  /* PR13: Pending bit 13 */
   { "\x41\x27\x1f", 14, 1 },  /* PR14: Pending bit 14 */
   { "\x41\x27\x20", 15, 1 },  /* PR15: Pending bit 15 */
   { "\x41\x27\x21", 16, 1 },  /* PR16: Pending bit 16 */
   { "\x41\x27\x22", 17, 1 },  /* PR17: Pending bit 17 */
   { "\x41\x27\x23", 18, 1 },  /* PR18: Pending bit 18 */
   { "\x41\x27\x24", 19, 1 },  /* PR19: Pending bit 19 */
   { "\x41\x27\x5b", 20, 1 },  /* PR20: Pending bit 20 */
   { "\x41\x27\x5c", 21, 1 },  /* PR21: Pending bit 21 */
   { "\x41\x27\x5d", 22, 1 },  /* PR22: Pending bit 22 */
   { "\x41\x27\x64", 29, 1 },  /* PR29: Pending bit 29 */
   { "\x41\x27\x9b", 30, 1 },  /* PR30: Pending bit 30 */
   { "\x41\x27\x9c", 31, 1 },  /* PR31: Pending bit 31 */
};

const Field_t EXTI_IMR2_fields[] = {
   { "\x35\x27\x9d", 0, 1 },  /* MR32: Interrupt Mask on external/internal line               32 */
   { "\x35\x27\x9e", 1, 1 },  /* MR33: Interrupt Mask on external/internal line               33 */
   { "\x35\x27\x9f", 2, 1 },  /* MR34: Interrupt Mask on external/internal line               34 */
   { "\x35\x27\xa0", 3, 1 },  /* MR35: Interrupt Mask on external/internal line               35 */
};

const Field_t EXTI_EMR2_fields[] = {
   { "\x35\x27\x9d", 0, 1 },  /* MR32: Event mask on external/internal line               32 */
   { "\x35\x27\x9e", 1, 1 },  /* MR33: Event mask on external/internal line               33 */
   { "\x35\x27\x9f", 2, 1 },  /* MR34: Event mask on external/internal line               34 */
   { "\x35\x27\xa0", 3, 1 },  /* MR35: Event mask on external/internal line               35 */
};

const Field_t EXTI_RTSR2_fields[] = {
   { "\x51\x27\x9d", 0, 1 },  /* TR32: Rising trigger event configuration bit               of line 32 */
   { "\x51\x27\x9e", 1, 1 },  /* TR33: Rising trigger event configuration bit               of line 33 */
};

const Field_t EXTI_FTSR2_fields[] = {
   { "\x51\x27\x9d", 0, 1 },  /* TR32: Falling trigger event configuration bit               of line 32 */
   { "\x51\x27\x9e", 1, 1 },  /* TR33: Falling trigger event configuration bit               of line 33 */
};

const Field_t EXTI_SWIER2_fields[] = {
   { "\x4d\x72\x45\x49\xe7\x40", 0, 1 },  /* SWIER32: Software interrupt on line               32 */
   { "\x4d\x72\x45\x49\xe7\x80", 1, 1 },  /* SWIER33: Software interrupt on line               33 */
};

const Field_t EXTI_PR2_fields[] = {
   { "\x41\x27\x9d", 0, 1 },  /* PR32: Pending bit on line 32 */
   { "\x41\x27\x9e", 1, 1 },  /* PR33: Pending bit on line 33 */
};

const Register_t EXTI_registers[] = {
   {"\x24\xd4\x9c", 0, 32, 0, EXTI_IMR1_fields, 32}, /* IMR1: Interrupt mask register */
   {"\x14\xd4\x9c", 4, 32, 0, EXTI_EMR1_fields, 32}, /* EMR1: Event mask register */
   {"\x49\x44\xd2\x70", 8, 32, 0, EXTI_RTSR1_fields, 26}, /* RTSR1: Rising Trigger selection           register */
   {"\x19\x44\xd2\x70", 12, 32, 0, EXTI_FTSR1_fields, 26}, /* FTSR1: Falling Trigger selection           register */
   {"\x4d\x72\x45\x49\xc0", 16, 32, 0, EXTI_SWIER1_fields, 26}, /* SWIER1: Software interrupt event           register */
   {"\x41\x27\x00", 20, 32, 0, EXTI_PR1_fields, 26}, /* PR1: Pending register */
   {"\x24\xd4\x9d", 24, 32, 0, EXTI_IMR2_fields, 4}, /* IMR2: Interrupt mask register */
   {"\x14\xd4\x9d", 28, 32, 0, EXTI_EMR2_fields, 4}, /* EMR2: Event mask register */
   {"\x49\x44\xd2\x74", 32, 32, 0, EXTI_RTSR2_fields, 2}, /* RTSR2: Rising Trigger selection           register */
   {"\x19\x44\xd2\x74", 36, 32, 0, EXTI_FTSR2_fields, 2}, /* FTSR2: Falling Trigger selection           register */
   {"\x4d\x72\x45\x49\xd0", 40, 32, 0, EXTI_SWIER2_fields, 2}, /* SWIER2: Software interrupt event           register */
   {"\x41\x27\x40", 44, 32, 0, EXTI_PR2_fields, 2}, /* PR2: Pending register */
};

const Field_t TIM1_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode               selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM1_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
   { "\x3c\x94\xdd", 10, 1 },  /* OIS2: Output Idle state 2 */
   { "\x3c\x94\xdd\x38", 11, 1 },  /* OIS2N: Output Idle state 2 */
   { "\x3c\x94\xde", 12, 1 },  /* OIS3: Output Idle state 3 */
   { "\x3c\x94\xde\x38", 13, 1 },  /* OIS3N: Output Idle state 3 */
   { "\x3c\x94\xdf", 14, 1 },  /* OIS4: Output Idle state 4 */
   { "\x3c\x94\xe0", 16, 1 },  /* OIS5: Output Idle state 5 */
   { "\x3c\x94\xe1", 18, 1 },  /* OIS6: Output Idle state 6 */
   { "\x34\xd4\xdd", 20, 4 },  /* MMS2: Master mode selection 2 */
};

const Field_t TIM1_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x3c\x30\xd3", 3, 1 },  /* OCCS: OCREF clear selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
   { "\x4c\xd4\xde", 16, 1 },  /* SMS3: Slave mode selection bit 3 */
};

const Field_t TIM1_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt               enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt               enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request               enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request               enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: Reserved */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM1_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt               flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt               flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x09\xd2\x46", 8, 1 },  /* B2IF: Break 2 interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture               flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture               flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture               flag */
   { "\x0e\x02\x46", 16, 1 },  /* C5IF: Capture/Compare 5 interrupt               flag */
   { "\x0e\x12\x46", 17, 1 },  /* C6IF: Capture/Compare 6 interrupt               flag */
};

const Field_t TIM1_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2               generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3               generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
   { "\x09\xd1\xc0", 8, 1 },  /* B2G: Break 2 generation */
};

const Field_t TIM1_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x0d\x30", 2, 2 },  /* IC1PCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x24\x37\x50\x0d\x30", 10, 2 },  /* IC2PCS: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM1_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: Output Compare 1 clear               enable */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output Compare 2 fast               enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output Compare 2 preload               enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output Compare 2 mode */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: Output Compare 2 clear               enable */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode bit               3 */
   { "\x3c\x37\x4d\x95\xe0", 24, 1 },  /* OC2M_3: Output Compare 2 mode bit               3 */
};

const Field_t TIM1_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3               selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM1_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3               selection */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: Output compare 3 fast               enable */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: Output compare 3 preload               enable */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: Output compare 3 mode */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: Output compare 3 clear               enable */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: Output compare 4 fast               enable */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: Output compare 4 preload               enable */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: Output compare 4 mode */
   { "\x3c\x37\xc3\x14", 15, 1 },  /* OC4CE: Output compare 4 clear               enable */
   { "\x3c\x37\x8d\x95\xe0", 16, 1 },  /* OC3M_3: Output Compare 3 mode bit               3 */
   { "\x3c\x37\xcd\x95\xe0", 24, 1 },  /* OC4M_3: Output Compare 4 mode bit               3 */
};

const Field_t TIM1_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output               enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x4e\x14", 6, 1 },  /* CC2NE: Capture/Compare 2 complementary output               enable */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output               enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\x8e\x14", 10, 1 },  /* CC3NE: Capture/Compare 3 complementary output               enable */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output               enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 4 output               Polarity */
   { "\x0c\x38\x05", 16, 1 },  /* CC5E: Capture/Compare 5 output               enable */
   { "\x0c\x38\x10", 17, 1 },  /* CC5P: Capture/Compare 5 output               Polarity */
   { "\x0c\x38\x45", 20, 1 },  /* CC6E: Capture/Compare 6 output               enable */
   { "\x0c\x38\x50", 21, 1 },  /* CC6P: Capture/Compare 6 output               Polarity */
};

const Field_t TIM1_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF copy */
};

const Field_t TIM1_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM1_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM1_RCR_fields[] = {
   { "\x48\x54\x00", 0, 16 },  /* REP: Repetition counter value */
};

const Field_t TIM1_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM1_CCR2_fields[] = {
   { "\x0c\x34\x9d", 0, 16 },  /* CCR2: Capture/Compare 2 value */
};

const Field_t TIM1_CCR3_fields[] = {
   { "\x0c\x34\x9e", 0, 16 },  /* CCR3: Capture/Compare 3 value */
};

const Field_t TIM1_CCR4_fields[] = {
   { "\x0c\x34\x9f", 0, 16 },  /* CCR4: Capture/Compare 3 value */
};

const Field_t TIM1_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
   { "\x08\xb7\x46", 20, 4 },  /* BK2F: Break 2 filter */
   { "\x08\xb7\x45", 24, 1 },  /* BK2E: Break 2 enable */
   { "\x08\xb7\x50", 25, 1 },  /* BK2P: Break 2 polarity */
};

const Field_t TIM1_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM1_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst               accesses */
};

const Field_t TIM1_CCMR3_Output_fields[] = {
   { "\x3c\x38\x06\x14", 2, 1 },  /* OC5FE: Output compare 5 fast               enable */
   { "\x3c\x38\x10\x14", 3, 1 },  /* OC5PE: Output compare 5 preload               enable */
   { "\x3c\x38\x0d", 4, 3 },  /* OC5M: Output compare 5 mode */
   { "\x3c\x38\x03\x14", 7, 1 },  /* OC5CE: Output compare 5 clear               enable */
   { "\x3c\x38\x46\x14", 10, 1 },  /* OC6FE: Output compare 6 fast               enable */
   { "\x3c\x38\x50\x14", 11, 1 },  /* OC6PE: Output compare 6 preload               enable */
   { "\x3c\x38\x4d", 12, 3 },  /* OC6M: Output compare 6 mode */
   { "\x3c\x38\x43\x14", 15, 1 },  /* OC6CE: Output compare 6 clear               enable */
   { "\x3c\x38\x0d\x95\xe0", 16, 1 },  /* OC5M_3: Outout Compare 5 mode bit               3 */
   { "\x3c\x38\x4d\x95\xe0", 24, 1 },  /* OC6M_3: Outout Compare 6 mode bit               3 */
};

const Field_t TIM1_CCR5_fields[] = {
   { "\x0c\x34\xa0", 0, 16 },  /* CCR5: Capture/Compare 5 value */
   { "\x1c\x38\x03\x70", 29, 1 },  /* GC5C1: Group Channel 5 and Channel               1 */
   { "\x1c\x38\x03\x74", 30, 1 },  /* GC5C2: Group Channel 5 and Channel               2 */
   { "\x1c\x38\x03\x78", 31, 1 },  /* GC5C3: Group Channel 5 and Channel               3 */
};

const Field_t TIM1_CCR6_fields[] = {
   { "\x0c\x34\xa1", 0, 16 },  /* CCR6: Capture/Compare 6 value */
};

const Field_t TIM1_OR_fields[] = {
   { "\x50\x93\x5c\x94\x55\x12\x94\x11\x03\x72\x54\x8d\x40", 0, 2 },  /* TIM1_ETR_ADC1_RMP: TIM1_ETR_ADC1 remapping               capability */
   { "\x50\x93\x5c\x94\x55\x12\x94\x11\x03\x7e\x54\x8d\x40", 2, 2 },  /* TIM1_ETR_ADC4_RMP: TIM1_ETR_ADC4 remapping               capability */
};

const Register_t TIM1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM1_CR1_fields, 9}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM1_CR2_fields, 15}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM1_SMCR_fields, 9}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM1_DIER_fields, 15}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM1_SR_fields, 15}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM1_EGR_fields, 9}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM1_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM1_CCMR1_Output_fields, 12}, /* CCMR1_Output: capture/compare mode register (output           mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM1_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input           mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM1_CCMR2_Output_fields, 12}, /* CCMR2_Output: capture/compare mode register (output           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM1_CCER_fields, 19}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM1_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM1_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM1_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM1_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM1_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM1_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM1_CCR3_fields, 1}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM1_CCR4_fields, 1}, /* CCR4: capture/compare register 4 */
   {"\x08\x45\x12", 68, 32, 0, TIM1_BDTR_fields, 12}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM1_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM1_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
   {"\x0c\x33\x52\x7a\x53\xd5\x51\x05\x54", 84, 32, 0, TIM1_CCMR3_Output_fields, 10}, /* CCMR3_Output: capture/compare mode register 3 (output           mode) */
   {"\x0c\x34\xa0", 88, 32, 0, TIM1_CCR5_fields, 4}, /* CCR5: capture/compare register 5 */
   {"\x0c\x34\xa1", 92, 32, 0, TIM1_CCR6_fields, 1}, /* CCR6: capture/compare register 6 */
   {"\x3d\x20", 96, 32, 0, TIM1_OR_fields, 2}, /* OR: option registers */
};

const Field_t SPI1_CR1_fields[] = {
   { "\x0d\x02\x01", 0, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 1, 1 },  /* CPOL: Clock polarity */
   { "\x35\x35\x12", 2, 1 },  /* MSTR: Master selection */
   { "\x09\x20", 3, 3 },  /* BR: Baud rate control */
   { "\x4d\x01\x40", 6, 1 },  /* SPE: SPI enable */
   { "\x31\x30\x86\x25\x24\xd4", 7, 1 },  /* LSBFIRST: Frame format */
   { "\x4d\x32\x40", 8, 1 },  /* SSI: Internal slave select */
   { "\x4d\x33\x40", 9, 1 },  /* SSM: Software slave management */
   { "\x49\x83\xce\x31\x90", 10, 1 },  /* RXONLY: Receive only */
   { "\x10\x61\x80", 11, 1 },  /* DFF: Data frame format */
   { "\x0d\x20\xce\x15\x85\x00", 12, 1 },  /* CRCNEXT: CRC transfer next */
   { "\x0d\x20\xc5\x38", 13, 1 },  /* CRCEN: Hardware CRC calculation               enable */
   { "\x08\x91\x09\x3c\x50", 14, 1 },  /* BIDIOE: Output enable in bidirectional               mode */
   { "\x08\x91\x09\x34\xf1\x05", 15, 1 },  /* BIDIMODE: Bidirectional data mode               enable */
};

const Field_t SPI1_CR2_fields[] = {
   { "\x49\x81\x0d\x04\x53\x80", 0, 1 },  /* RXDMAEN: Rx buffer DMA enable */
   { "\x51\x81\x0d\x04\x53\x80", 1, 1 },  /* TXDMAEN: Tx buffer DMA enable */
   { "\x4d\x33\xc5", 2, 1 },  /* SSOE: SS output enable */
   { "\x39\x34\xd0", 3, 1 },  /* NSSP: NSS pulse management */
   { "\x19\x21\x80", 4, 1 },  /* FRF: Frame format */
   { "\x15\x24\x89\x14", 5, 1 },  /* ERRIE: Error interrupt enable */
   { "\x49\x83\x85\x24\x50", 6, 1 },  /* RXNEIE: RX buffer not empty interrupt               enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: Tx buffer empty interrupt               enable */
   { "\x11\x30", 8, 4 },  /* DS: Data size */
   { "\x19\x26\x14\x20", 12, 1 },  /* FRXTH: FIFO reception threshold */
   { "\x30\x43\x41\x95\x26\x00", 13, 1 },  /* LDMA_RX: Last DMA transfer for               reception */
   { "\x30\x43\x41\x95\x46\x00", 14, 1 },  /* LDMA_TX: Last DMA transfer for               transmission */
};

const Field_t SPI1_SR_fields[] = {
   { "\x49\x83\x85", 0, 1 },  /* RXNE: Receive buffer not empty */
   { "\x51\x81\x40", 1, 1 },  /* TXE: Transmit buffer empty */
   { "\x0c\x84\xc9\x10\x50", 2, 1 },  /* CHSIDE: Channel side */
   { "\x54\x44\x80", 3, 1 },  /* UDR: Underrun flag */
   { "\x0d\x20\xc5\x49\x20", 4, 1 },  /* CRCERR: CRC error flag */
   { "\x34\xf1\x06", 5, 1 },  /* MODF: Mode fault */
   { "\x3d\x64\x80", 6, 1 },  /* OVR: Overrun flag */
   { "\x09\x36\x40", 7, 1 },  /* BSY: Busy flag */
   { "\x50\x91\x92\x18\x50", 8, 1 },  /* TIFRFE: TI frame format error */
   { "\x19\x23\x16\x30", 9, 2 },  /* FRLVL: FIFO reception level */
   { "\x19\x43\x16\x30", 11, 2 },  /* FTLVL: FIFO transmission level */
};

const Field_t SPI1_DR_fields[] = {
   { "\x11\x20", 0, 16 },  /* DR: Data register */
};

const Field_t SPI1_CRCPR_fields[] = {
   { "\x0d\x20\xd0\x3c\xc6\x40", 0, 16 },  /* CRCPOLY: CRC polynomial register */
};

const Field_t SPI1_RXCRCR_fields[] = {
   { "\x49\x80\xd2\x0c", 0, 16 },  /* RxCRC: Rx CRC register */
};

const Field_t SPI1_TXCRCR_fields[] = {
   { "\x51\x80\xd2\x0c", 0, 16 },  /* TxCRC: Tx CRC register */
};

const Field_t SPI1_I2SCFGR_fields[] = {
   { "\x0c\x83\x05\x38", 0, 1 },  /* CHLEN: Channel length (number of bits per audio               channel) */
   { "\x10\x15\x0c\x14\xe0", 1, 2 },  /* DATLEN: Data length to be               transferred */
   { "\x0c\xb4\x0f\x30", 3, 1 },  /* CKPOL: Steady state clock               polarity */
   { "\x25\xd4\xd3\x50\x40", 4, 2 },  /* I2SSTD: I2S standard selection */
   { "\x40\x33\x53\x64\xe0\xc0", 7, 1 },  /* PCMSYNC: PCM frame synchronization */
   { "\x25\xd4\xc3\x18\x70", 8, 2 },  /* I2SCFG: I2S configuration mode */
   { "\x25\xd4\xc5", 10, 1 },  /* I2SE: I2S Enable */
   { "\x25\xd4\xcd\x3c\x40", 11, 1 },  /* I2SMOD: I2S mode selection */
};

const Field_t SPI1_I2SPR_fields[] = {
   { "\x25\xd4\xc4\x25\x60", 0, 8 },  /* I2SDIV: I2S Linear prescaler */
   { "\x3c\x41\x00", 8, 1 },  /* ODD: Odd factor for the               prescaler */
   { "\x34\x32\xcf\x14", 9, 1 },  /* MCKOE: Master clock output enable */
};

const Register_t SPI1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, SPI1_CR1_fields, 14}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, SPI1_CR2_fields, 12}, /* CR2: control register 2 */
   {"\x4d\x20", 8, 32, 0, SPI1_SR_fields, 11}, /* SR: status register */
   {"\x11\x20", 12, 32, 0, SPI1_DR_fields, 1}, /* DR: data register */
   {"\x0d\x20\xd0\x48", 16, 32, 0, SPI1_CRCPR_fields, 1}, /* CRCPR: CRC polynomial register */
   {"\x49\x80\xd2\x0d\x20", 20, 32, 0, SPI1_RXCRCR_fields, 1}, /* RXCRCR: RX CRC register */
   {"\x51\x80\xd2\x0d\x20", 24, 32, 0, SPI1_TXCRCR_fields, 1}, /* TXCRCR: TX CRC register */
   {"\x25\xd4\xc3\x18\x74\x80", 28, 32, 0, SPI1_I2SCFGR_fields, 8}, /* I2SCFGR: I2S configuration register */
   {"\x25\xd4\xd0\x48", 32, 32, 0, SPI1_I2SPR_fields, 3}, /* I2SPR: I2S prescaler register */
};

const Field_t TIM8_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode               selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM8_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
   { "\x3c\x94\xdd", 10, 1 },  /* OIS2: Output Idle state 2 */
   { "\x3c\x94\xdd\x38", 11, 1 },  /* OIS2N: Output Idle state 2 */
   { "\x3c\x94\xde", 12, 1 },  /* OIS3: Output Idle state 3 */
   { "\x3c\x94\xde\x38", 13, 1 },  /* OIS3N: Output Idle state 3 */
   { "\x3c\x94\xdf", 14, 1 },  /* OIS4: Output Idle state 4 */
   { "\x3c\x94\xe0", 16, 1 },  /* OIS5: Output Idle state 5 */
   { "\x3c\x94\xe1", 18, 1 },  /* OIS6: Output Idle state 6 */
   { "\x34\xd4\xdd", 20, 4 },  /* MMS2: Master mode selection 2 */
};

const Field_t TIM8_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x3c\x30\xd3", 3, 1 },  /* OCCS: OCREF clear selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
   { "\x4c\xd4\xde", 16, 1 },  /* SMS3: Slave mode selection bit 3 */
};

const Field_t TIM8_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt               enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt               enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request               enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request               enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: Reserved */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM8_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt               flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt               flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x09\xd2\x46", 8, 1 },  /* B2IF: Break 2 interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture               flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture               flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture               flag */
   { "\x0e\x02\x46", 16, 1 },  /* C5IF: Capture/Compare 5 interrupt               flag */
   { "\x0e\x12\x46", 17, 1 },  /* C6IF: Capture/Compare 6 interrupt               flag */
};

const Field_t TIM8_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2               generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3               generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
   { "\x09\xd1\xc0", 8, 1 },  /* B2G: Break 2 generation */
};

const Field_t TIM8_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: Output Compare 1 clear               enable */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output Compare 2 fast               enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output Compare 2 preload               enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output Compare 2 mode */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: Output Compare 2 clear               enable */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode bit               3 */
   { "\x3c\x37\x4d\x95\xe0", 24, 1 },  /* OC2M_3: Output Compare 2 mode bit               3 */
};

const Field_t TIM8_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x0d\x30", 2, 2 },  /* IC1PCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x24\x37\x50\x0d\x30", 10, 2 },  /* IC2PCS: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM8_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3               selection */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: Output compare 3 fast               enable */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: Output compare 3 preload               enable */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: Output compare 3 mode */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: Output compare 3 clear               enable */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: Output compare 4 fast               enable */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: Output compare 4 preload               enable */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: Output compare 4 mode */
   { "\x3c\x37\xc3\x14", 15, 1 },  /* OC4CE: Output compare 4 clear               enable */
   { "\x3c\x37\x8d\x95\xe0", 16, 1 },  /* OC3M_3: Output Compare 3 mode bit               3 */
   { "\x3c\x37\xcd\x95\xe0", 24, 1 },  /* OC4M_3: Output Compare 4 mode bit               3 */
};

const Field_t TIM8_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3               selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM8_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output               enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x4e\x14", 6, 1 },  /* CC2NE: Capture/Compare 2 complementary output               enable */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output               enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\x8e\x14", 10, 1 },  /* CC3NE: Capture/Compare 3 complementary output               enable */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output               enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 4 output               Polarity */
   { "\x0c\x38\x05", 16, 1 },  /* CC5E: Capture/Compare 5 output               enable */
   { "\x0c\x38\x10", 17, 1 },  /* CC5P: Capture/Compare 5 output               Polarity */
   { "\x0c\x38\x45", 20, 1 },  /* CC6E: Capture/Compare 6 output               enable */
   { "\x0c\x38\x50", 21, 1 },  /* CC6P: Capture/Compare 6 output               Polarity */
};

const Field_t TIM8_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF copy */
};

const Field_t TIM8_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM8_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM8_RCR_fields[] = {
   { "\x48\x54\x00", 0, 16 },  /* REP: Repetition counter value */
};

const Field_t TIM8_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM8_CCR2_fields[] = {
   { "\x0c\x34\x9d", 0, 16 },  /* CCR2: Capture/Compare 2 value */
};

const Field_t TIM8_CCR3_fields[] = {
   { "\x0c\x34\x9e", 0, 16 },  /* CCR3: Capture/Compare 3 value */
};

const Field_t TIM8_CCR4_fields[] = {
   { "\x0c\x34\x9f", 0, 16 },  /* CCR4: Capture/Compare 3 value */
};

const Field_t TIM8_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
   { "\x08\xb7\x46", 20, 4 },  /* BK2F: Break 2 filter */
   { "\x08\xb7\x45", 24, 1 },  /* BK2E: Break 2 enable */
   { "\x08\xb7\x50", 25, 1 },  /* BK2P: Break 2 polarity */
};

const Field_t TIM8_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM8_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst               accesses */
};

const Field_t TIM8_CCMR3_Output_fields[] = {
   { "\x3c\x38\x06\x14", 2, 1 },  /* OC5FE: Output compare 5 fast               enable */
   { "\x3c\x38\x10\x14", 3, 1 },  /* OC5PE: Output compare 5 preload               enable */
   { "\x3c\x38\x0d", 4, 3 },  /* OC5M: Output compare 5 mode */
   { "\x3c\x38\x03\x14", 7, 1 },  /* OC5CE: Output compare 5 clear               enable */
   { "\x3c\x38\x46\x14", 10, 1 },  /* OC6FE: Output compare 6 fast               enable */
   { "\x3c\x38\x50\x14", 11, 1 },  /* OC6PE: Output compare 6 preload               enable */
   { "\x3c\x38\x4d", 12, 3 },  /* OC6M: Output compare 6 mode */
   { "\x3c\x38\x43\x14", 15, 1 },  /* OC6CE: Output compare 6 clear               enable */
   { "\x3c\x38\x0d\x95\xe0", 16, 1 },  /* OC5M_3: Outout Compare 5 mode bit               3 */
   { "\x3c\x38\x4d\x95\xe0", 24, 1 },  /* OC6M_3: Outout Compare 6 mode bit               3 */
};

const Field_t TIM8_CCR5_fields[] = {
   { "\x0c\x34\xa0", 0, 16 },  /* CCR5: Capture/Compare 5 value */
   { "\x1c\x38\x03\x70", 29, 1 },  /* GC5C1: Group Channel 5 and Channel               1 */
   { "\x1c\x38\x03\x74", 30, 1 },  /* GC5C2: Group Channel 5 and Channel               2 */
   { "\x1c\x38\x03\x78", 31, 1 },  /* GC5C3: Group Channel 5 and Channel               3 */
};

const Field_t TIM8_CCR6_fields[] = {
   { "\x0c\x34\xa1", 0, 16 },  /* CCR6: Capture/Compare 6 value */
};

const Field_t TIM8_OR_fields[] = {
   { "\x50\x93\x63\x94\x55\x12\x94\x11\x03\x76\x54\x8d\x40", 0, 2 },  /* TIM8_ETR_ADC2_RMP: TIM8_ETR_ADC2 remapping               capability */
   { "\x50\x93\x63\x94\x55\x12\x94\x11\x03\x7a\x54\x8d\x40", 2, 2 },  /* TIM8_ETR_ADC3_RMP: TIM8_ETR_ADC3 remapping               capability */
};

const Register_t TIM8_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM8_CR1_fields, 9}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM8_CR2_fields, 15}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM8_SMCR_fields, 9}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM8_DIER_fields, 15}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM8_SR_fields, 15}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM8_EGR_fields, 9}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM8_CCMR1_Output_fields, 12}, /* CCMR1_Output: capture/compare mode register (output           mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM8_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM8_CCMR2_Output_fields, 12}, /* CCMR2_Output: capture/compare mode register (output           mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM8_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM8_CCER_fields, 19}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM8_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM8_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM8_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM8_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM8_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM8_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM8_CCR3_fields, 1}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM8_CCR4_fields, 1}, /* CCR4: capture/compare register 4 */
   {"\x08\x45\x12", 68, 32, 0, TIM8_BDTR_fields, 12}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM8_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM8_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
   {"\x0c\x33\x52\x7a\x53\xd5\x51\x05\x54", 84, 32, 0, TIM8_CCMR3_Output_fields, 10}, /* CCMR3_Output: capture/compare mode register 3 (output           mode) */
   {"\x0c\x34\xa0", 88, 32, 0, TIM8_CCR5_fields, 4}, /* CCR5: capture/compare register 5 */
   {"\x0c\x34\xa1", 92, 32, 0, TIM8_CCR6_fields, 1}, /* CCR6: capture/compare register 6 */
   {"\x3d\x20", 96, 32, 0, TIM8_OR_fields, 2}, /* OR: option registers */
};

const Field_t USART1_CR1_fields[] = {
   { "\x54\x50", 0, 1 },  /* UE: USART enable */
   { "\x54\x54\xcd", 1, 1 },  /* UESM: USART enable in Stop mode */
   { "\x48\x50", 2, 1 },  /* RE: Receiver enable */
   { "\x50\x50", 3, 1 },  /* TE: Transmitter enable */
   { "\x24\x43\x05\x24\x50", 4, 1 },  /* IDLEIE: IDLE interrupt enable */
   { "\x49\x83\x85\x24\x50", 5, 1 },  /* RXNEIE: RXNE interrupt enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transmission complete interrupt               enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: interrupt enable */
   { "\x40\x52\x45", 8, 1 },  /* PEIE: PE interrupt enable */
   { "\x41\x30", 9, 1 },  /* PS: Parity selection */
   { "\x40\x31\x40", 10, 1 },  /* PCE: Parity control enable */
   { "\x5c\x12\xc5", 11, 1 },  /* WAKE: Receiver wakeup method */
   { "\x34", 12, 1 },  /* M: Word length */
   { "\x34\xd1\x40", 13, 1 },  /* MME: Mute mode enable */
   { "\x0c\xd2\x45", 14, 1 },  /* CMIE: Character match interrupt               enable */
   { "\x3d\x61\x52\x8c", 15, 1 },  /* OVER8: Oversampling mode */
   { "\x10\x51\x14", 16, 5 },  /* DEDT: Driver Enable deassertion               time */
   { "\x10\x50\x54", 21, 5 },  /* DEAT: Driver Enable assertion               time */
   { "\x49\x43\xc9\x14", 26, 1 },  /* RTOIE: Receiver timeout interrupt               enable */
   { "\x14\xf0\x89\x14", 27, 1 },  /* EOBIE: End of Block interrupt               enable */
};

const Field_t USART1_CR2_fields[] = {
   { "\x04\x41\x0d\x88", 4, 1 },  /* ADDM7: 7-bit Address Detection/4-bit Address               Detection */
   { "\x30\x21\x0c", 5, 1 },  /* LBDL: LIN break detection length */
   { "\x30\x21\x09\x14", 6, 1 },  /* LBDIE: LIN break detection interrupt               enable */
   { "\x30\x20\xcc", 8, 1 },  /* LBCL: Last bit clock pulse */
   { "\x0d\x02\x01", 9, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 10, 1 },  /* CPOL: Clock polarity */
   { "\x0c\xc2\xc5\x38", 11, 1 },  /* CLKEN: Clock enable */
   { "\x4d\x43\xd0", 12, 2 },  /* STOP: STOP bits */
   { "\x30\x93\x85\x38", 14, 1 },  /* LINEN: LIN mode enable */
   { "\x4d\x70\x50", 15, 1 },  /* SWAP: Swap TX/RX pins */
   { "\x49\x82\x4e\x58", 16, 1 },  /* RXINV: RX pin active level               inversion */
   { "\x51\x82\x4e\x58", 17, 1 },  /* TXINV: TX pin active level               inversion */
   { "\x10\x15\x01\x24\xe5\x80", 18, 1 },  /* DATAINV: Binary data inversion */
   { "\x35\x30\x86\x25\x24\xd4", 19, 1 },  /* MSBFIRST: Most significant bit first */
   { "\x04\x24\x85\x38", 20, 1 },  /* ABREN: Auto baud rate enable */
   { "\x04\x24\x8d\x3c\x40", 21, 2 },  /* ABRMOD: Auto baud rate mode */
   { "\x49\x43\xc5\x38", 23, 1 },  /* RTOEN: Receiver timeout enable */
   { "\x04\x41\x1b", 24, 4 },  /* ADD0: Address of the USART node */
   { "\x04\x41\x1f", 28, 4 },  /* ADD4: Address of the USART node */
};

const Field_t USART1_CR3_fields[] = {
   { "\x14\x91\x40", 0, 1 },  /* EIE: Error interrupt enable */
   { "\x25\x21\x4e", 1, 1 },  /* IREN: IrDA mode enable */
   { "\x25\x23\x10", 2, 1 },  /* IRLP: IrDA low-power */
   { "\x20\x44\xc5\x30", 3, 1 },  /* HDSEL: Half-duplex selection */
   { "\x38\x10\xcb", 4, 1 },  /* NACK: Smartcard NACK enable */
   { "\x4c\x31\x4e", 5, 1 },  /* SCEN: Smartcard mode enable */
   { "\x10\xd0\x52", 6, 1 },  /* DMAR: DMA enable receiver */
   { "\x10\xd0\x54", 7, 1 },  /* DMAT: DMA enable transmitter */
   { "\x49\x44\xc5", 8, 1 },  /* RTSE: RTS enable */
   { "\x0d\x44\xc5", 9, 1 },  /* CTSE: CTS enable */
   { "\x0d\x44\xc9\x14", 10, 1 },  /* CTSIE: CTS interrupt enable */
   { "\x3c\xe1\x42\x25\x40", 11, 1 },  /* ONEBIT: One sample bit method               enable */
   { "\x3d\x64\x84\x25\x30", 12, 1 },  /* OVRDIS: Overrun Disable */
   { "\x10\x44\x85", 13, 1 },  /* DDRE: DMA Disable on Reception               Error */
   { "\x10\x53\x40", 14, 1 },  /* DEM: Driver enable mode */
   { "\x10\x54\x00", 15, 1 },  /* DEP: Driver enable polarity               selection */
   { "\x4c\x30\x52\x0c\xe5\x00", 17, 3 },  /* SCARCNT: Smartcard auto-retry count */
   { "\x5d\x54\xc0", 20, 2 },  /* WUS: Wakeup from Stop mode interrupt flag               selection */
   { "\x5d\x51\x89\x14", 22, 1 },  /* WUFIE: Wakeup from Stop mode interrupt               enable */
};

const Field_t USART1_BRR_fields[] = {
   { "\x10\x95\xa5\x19\x20\x43\x50\x93\xce", 0, 4 },  /* DIV_Fraction: fraction of USARTDIV */
   { "\x10\x95\xa5\x34\x13\x94\x25\x34\xc1", 4, 12 },  /* DIV_Mantissa: mantissa of USARTDIV */
};

const Field_t USART1_GTPR_fields[] = {
   { "\x41\x30\xc0", 0, 8 },  /* PSC: Prescaler value */
   { "\x1d\x40", 8, 8 },  /* GT: Guard time value */
};

const Field_t USART1_RTOR_fields[] = {
   { "\x49\x43\xc0", 0, 24 },  /* RTO: Receiver timeout value */
   { "\x08\xc1\x4e", 24, 8 },  /* BLEN: Block Length */
};

const Field_t USART1_RQR_fields[] = {
   { "\x04\x24\x92\x44", 0, 1 },  /* ABRRQ: Auto baud rate request */
   { "\x4c\x22\xd2\x44", 1, 1 },  /* SBKRQ: Send break request */
   { "\x34\xd4\x91", 2, 1 },  /* MMRQ: Mute mode request */
   { "\x49\x81\x92\x44", 3, 1 },  /* RXFRQ: Receive data flush request */
   { "\x51\x81\x92\x44", 4, 1 },  /* TXFRQ: Transmit data flush               request */
};

const Field_t USART1_ISR_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: Parity error */
   { "\x18\x50", 1, 1 },  /* FE: Framing error */
   { "\x38\x60", 2, 1 },  /* NF: Noise detected flag */
   { "\x3d\x21\x40", 3, 1 },  /* ORE: Overrun error */
   { "\x24\x43\x05", 4, 1 },  /* IDLE: Idle line detected */
   { "\x49\x83\x85", 5, 1 },  /* RXNE: Read data register not               empty */
   { "\x50\x30", 6, 1 },  /* TC: Transmission complete */
   { "\x51\x81\x40", 7, 1 },  /* TXE: Transmit data register               empty */
   { "\x30\x21\x06", 8, 1 },  /* LBDF: LIN break detection flag */
   { "\x0d\x44\xc9\x18", 9, 1 },  /* CTSIF: CTS interrupt flag */
   { "\x0d\x44\xc0", 10, 1 },  /* CTS: CTS flag */
   { "\x49\x43\xc6", 11, 1 },  /* RTOF: Receiver timeout */
   { "\x14\xf0\x86", 12, 1 },  /* EOBF: End of block flag */
   { "\x04\x24\x85", 14, 1 },  /* ABRE: Auto baud rate error */
   { "\x04\x24\x86", 15, 1 },  /* ABRF: Auto baud rate flag */
   { "\x09\x54\xd9", 16, 1 },  /* BUSY: Busy flag */
   { "\x0c\xd1\x80", 17, 1 },  /* CMF: character match flag */
   { "\x4c\x22\xc6", 18, 1 },  /* SBKF: Send break flag */
   { "\x49\x75\x40", 19, 1 },  /* RWU: Receiver wakeup from Mute               mode */
   { "\x5d\x51\x80", 20, 1 },  /* WUF: Wakeup from Stop mode flag */
   { "\x50\x50\x43\x2c", 21, 1 },  /* TEACK: Transmit enable acknowledge               flag */
   { "\x48\x50\x43\x2c", 22, 1 },  /* REACK: Receive enable acknowledge               flag */
};

const Field_t USART1_ICR_fields[] = {
   { "\x40\x50\xc6", 0, 1 },  /* PECF: Parity error clear flag */
   { "\x18\x50\xc6", 1, 1 },  /* FECF: Framing error clear flag */
   { "\x38\x31\x80", 2, 1 },  /* NCF: Noise detected clear flag */
   { "\x3d\x21\x43\x18", 3, 1 },  /* ORECF: Overrun error clear flag */
   { "\x24\x43\x05\x0c\x60", 4, 1 },  /* IDLECF: Idle line detected clear               flag */
   { "\x50\x30\xc6", 6, 1 },  /* TCCF: Transmission complete clear               flag */
   { "\x30\x21\x03\x18", 8, 1 },  /* LBDCF: LIN break detection clear               flag */
   { "\x0d\x44\xc3\x18", 9, 1 },  /* CTSCF: CTS clear flag */
   { "\x49\x43\xc3\x18", 11, 1 },  /* RTOCF: Receiver timeout clear               flag */
   { "\x14\xf0\x83\x18", 12, 1 },  /* EOBCF: End of timeout clear flag */
   { "\x0c\xd0\xc6", 17, 1 },  /* CMCF: Character match clear flag */
   { "\x5d\x50\xc6", 20, 1 },  /* WUCF: Wakeup from Stop mode clear               flag */
};

const Field_t USART1_RDR_fields[] = {
   { "\x48\x44\x80", 0, 9 },  /* RDR: Receive data value */
};

const Field_t USART1_TDR_fields[] = {
   { "\x50\x44\x80", 0, 9 },  /* TDR: Transmit data value */
};

const Register_t USART1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, USART1_CR1_fields, 20}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, USART1_CR2_fields, 19}, /* CR2: Control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, USART1_CR3_fields, 19}, /* CR3: Control register 3 */
   {"\x09\x24\x80", 12, 32, 0, USART1_BRR_fields, 2}, /* BRR: Baud rate register */
   {"\x1d\x44\x12", 16, 32, 0, USART1_GTPR_fields, 2}, /* GTPR: Guard time and prescaler           register */
   {"\x49\x43\xd2", 20, 32, 0, USART1_RTOR_fields, 2}, /* RTOR: Receiver timeout register */
   {"\x49\x14\x80", 24, 32, 0, USART1_RQR_fields, 5}, /* RQR: Request register */
   {"\x25\x34\x80", 28, 32, 0, USART1_ISR_fields, 22}, /* ISR: Interrupt & status           register */
   {"\x24\x34\x80", 32, 32, 0, USART1_ICR_fields, 12}, /* ICR: Interrupt flag clear register */
   {"\x48\x44\x80", 36, 32, 0, USART1_RDR_fields, 1}, /* RDR: Receive data register */
   {"\x50\x44\x80", 40, 32, 0, USART1_TDR_fields, 1}, /* TDR: Transmit data register */
};

const Field_t TIM15_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM15_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
   { "\x3c\x94\xdd", 10, 1 },  /* OIS2: Output Idle state 2 */
};

const Field_t TIM15_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x4c\xd4\xe5\x78", 16, 1 },  /* SMS_3: Slave mode selection bit 3 */
};

const Field_t TIM15_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM15_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture               flag */
};

const Field_t TIM15_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM15_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output Compare 2 fast               enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output Compare 2 preload               enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output Compare 2 mode */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode bit               3 */
   { "\x3c\x37\x4d\x95\xe0", 24, 1 },  /* OC2M_3: Output Compare 2 mode bit               3 */
};

const Field_t TIM15_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x24\x37\x50\x4c\x30", 10, 2 },  /* IC2PSC: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM15_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output               enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output               Polarity */
};

const Field_t TIM15_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF copy */
};

const Field_t TIM15_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM15_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM15_RCR_fields[] = {
   { "\x48\x54\x00", 0, 8 },  /* REP: Repetition counter value */
};

const Field_t TIM15_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM15_CCR2_fields[] = {
   { "\x0c\x34\x9d", 0, 16 },  /* CCR2: Capture/Compare 2 value */
};

const Field_t TIM15_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
};

const Field_t TIM15_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM15_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM15_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM15_CR1_fields, 7}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM15_CR2_fields, 8}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM15_SMCR_fields, 4}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM15_DIER_fields, 11}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM15_SR_fields, 8}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM15_EGR_fields, 6}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM15_CCMR1_Output_fields, 10}, /* CCMR1_Output: capture/compare mode register (output           mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM15_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM15_CCER_fields, 7}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM15_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM15_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM15_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM15_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM15_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM15_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
   {"\x08\x45\x12", 68, 32, 0, TIM15_BDTR_fields, 9}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM15_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM15_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t TIM16_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM16_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
};

const Field_t TIM16_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM16_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
};

const Field_t TIM16_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM16_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode */
};

const Field_t TIM16_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
};

const Field_t TIM16_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
};

const Field_t TIM16_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF Copy */
};

const Field_t TIM16_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM16_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM16_RCR_fields[] = {
   { "\x48\x54\x00", 0, 8 },  /* REP: Repetition counter value */
};

const Field_t TIM16_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM16_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
};

const Field_t TIM16_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM16_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM16_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM16_CR1_fields, 7}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM16_CR2_fields, 5}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM16_DIER_fields, 9}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM16_SR_fields, 6}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM16_EGR_fields, 5}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM16_CCMR1_Output_fields, 5}, /* CCMR1_Output: capture/compare mode register (output           mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM16_CCMR1_Input_fields, 3}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM16_CCER_fields, 4}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM16_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM16_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM16_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM16_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM16_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x08\x45\x12", 68, 32, 0, TIM16_BDTR_fields, 9}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM16_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM16_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
   {"\x3d\x20", 80, 32, 0, NULL, 0}, /* OR: option register */
};

const Field_t TIM17_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM17_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
};

const Field_t TIM17_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM17_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
};

const Field_t TIM17_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM17_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
};

const Field_t TIM17_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode */
};

const Field_t TIM17_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
};

const Field_t TIM17_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF Copy */
};

const Field_t TIM17_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM17_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM17_RCR_fields[] = {
   { "\x48\x54\x00", 0, 8 },  /* REP: Repetition counter value */
};

const Field_t TIM17_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM17_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
};

const Field_t TIM17_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM17_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM17_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM17_CR1_fields, 7}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM17_CR2_fields, 5}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM17_DIER_fields, 9}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM17_SR_fields, 6}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM17_EGR_fields, 5}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM17_CCMR1_Input_fields, 3}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM17_CCMR1_Output_fields, 5}, /* CCMR1_Output: capture/compare mode register (output           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM17_CCER_fields, 4}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM17_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM17_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM17_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM17_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM17_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x08\x45\x12", 68, 32, 0, TIM17_BDTR_fields, 9}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM17_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM17_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t DMA1_ISR_fields[] = {
   { "\x1c\x91\x9c", 0, 1 },  /* GIF1: Channel 1 Global interrupt               flag */
   { "\x50\x32\x46\x70", 1, 1 },  /* TCIF1: Channel 1 Transfer Complete               flag */
   { "\x21\x42\x46\x70", 2, 1 },  /* HTIF1: Channel 1 Half Transfer Complete               flag */
   { "\x50\x52\x46\x70", 3, 1 },  /* TEIF1: Channel 1 Transfer Error               flag */
   { "\x1c\x91\x9d", 4, 1 },  /* GIF2: Channel 2 Global interrupt               flag */
   { "\x50\x32\x46\x74", 5, 1 },  /* TCIF2: Channel 2 Transfer Complete               flag */
   { "\x21\x42\x46\x74", 6, 1 },  /* HTIF2: Channel 2 Half Transfer Complete               flag */
   { "\x50\x52\x46\x74", 7, 1 },  /* TEIF2: Channel 2 Transfer Error               flag */
   { "\x1c\x91\x9e", 8, 1 },  /* GIF3: Channel 3 Global interrupt               flag */
   { "\x50\x32\x46\x78", 9, 1 },  /* TCIF3: Channel 3 Transfer Complete               flag */
   { "\x21\x42\x46\x78", 10, 1 },  /* HTIF3: Channel 3 Half Transfer Complete               flag */
   { "\x50\x52\x46\x78", 11, 1 },  /* TEIF3: Channel 3 Transfer Error               flag */
   { "\x1c\x91\x9f", 12, 1 },  /* GIF4: Channel 4 Global interrupt               flag */
   { "\x50\x32\x46\x7c", 13, 1 },  /* TCIF4: Channel 4 Transfer Complete               flag */
   { "\x21\x42\x46\x7c", 14, 1 },  /* HTIF4: Channel 4 Half Transfer Complete               flag */
   { "\x50\x52\x46\x7c", 15, 1 },  /* TEIF4: Channel 4 Transfer Error               flag */
   { "\x1c\x91\xa0", 16, 1 },  /* GIF5: Channel 5 Global interrupt               flag */
   { "\x50\x32\x46\x80", 17, 1 },  /* TCIF5: Channel 5 Transfer Complete               flag */
   { "\x21\x42\x46\x80", 18, 1 },  /* HTIF5: Channel 5 Half Transfer Complete               flag */
   { "\x50\x52\x46\x80", 19, 1 },  /* TEIF5: Channel 5 Transfer Error               flag */
   { "\x1c\x91\xa1", 20, 1 },  /* GIF6: Channel 6 Global interrupt               flag */
   { "\x50\x32\x46\x84", 21, 1 },  /* TCIF6: Channel 6 Transfer Complete               flag */
   { "\x21\x42\x46\x84", 22, 1 },  /* HTIF6: Channel 6 Half Transfer Complete               flag */
   { "\x50\x52\x46\x84", 23, 1 },  /* TEIF6: Channel 6 Transfer Error               flag */
   { "\x1c\x91\xa2", 24, 1 },  /* GIF7: Channel 7 Global interrupt               flag */
   { "\x50\x32\x46\x88", 25, 1 },  /* TCIF7: Channel 7 Transfer Complete               flag */
   { "\x21\x42\x46\x88", 26, 1 },  /* HTIF7: Channel 7 Half Transfer Complete               flag */
   { "\x50\x52\x46\x88", 27, 1 },  /* TEIF7: Channel 7 Transfer Error               flag */
};

const Field_t DMA1_IFCR_fields[] = {
   { "\x0c\x72\x46\x70", 0, 1 },  /* CGIF1: Channel 1 Global interrupt               clear */
   { "\x0d\x40\xc9\x19\xc0", 1, 1 },  /* CTCIF1: Channel 1 Transfer Complete               clear */
   { "\x0c\x85\x09\x19\xc0", 2, 1 },  /* CHTIF1: Channel 1 Half Transfer               clear */
   { "\x0d\x41\x49\x19\xc0", 3, 1 },  /* CTEIF1: Channel 1 Transfer Error               clear */
   { "\x0c\x72\x46\x74", 4, 1 },  /* CGIF2: Channel 2 Global interrupt               clear */
   { "\x0d\x40\xc9\x19\xd0", 5, 1 },  /* CTCIF2: Channel 2 Transfer Complete               clear */
   { "\x0c\x85\x09\x19\xd0", 6, 1 },  /* CHTIF2: Channel 2 Half Transfer               clear */
   { "\x0d\x41\x49\x19\xd0", 7, 1 },  /* CTEIF2: Channel 2 Transfer Error               clear */
   { "\x0c\x72\x46\x78", 8, 1 },  /* CGIF3: Channel 3 Global interrupt               clear */
   { "\x0d\x40\xc9\x19\xe0", 9, 1 },  /* CTCIF3: Channel 3 Transfer Complete               clear */
   { "\x0c\x85\x09\x19\xe0", 10, 1 },  /* CHTIF3: Channel 3 Half Transfer               clear */
   { "\x0d\x41\x49\x19\xe0", 11, 1 },  /* CTEIF3: Channel 3 Transfer Error               clear */
   { "\x0c\x72\x46\x7c", 12, 1 },  /* CGIF4: Channel 4 Global interrupt               clear */
   { "\x0d\x40\xc9\x19\xf0", 13, 1 },  /* CTCIF4: Channel 4 Transfer Complete               clear */
   { "\x0c\x85\x09\x19\xf0", 14, 1 },  /* CHTIF4: Channel 4 Half Transfer               clear */
   { "\x0d\x41\x49\x19\xf0", 15, 1 },  /* CTEIF4: Channel 4 Transfer Error               clear */
   { "\x0c\x72\x46\x80", 16, 1 },  /* CGIF5: Channel 5 Global interrupt               clear */
   { "\x0d\x40\xc9\x1a\x00", 17, 1 },  /* CTCIF5: Channel 5 Transfer Complete               clear */
   { "\x0c\x85\x09\x1a\x00", 18, 1 },  /* CHTIF5: Channel 5 Half Transfer               clear */
   { "\x0d\x41\x49\x1a\x00", 19, 1 },  /* CTEIF5: Channel 5 Transfer Error               clear */
   { "\x0c\x72\x46\x84", 20, 1 },  /* CGIF6: Channel 6 Global interrupt               clear */
   { "\x0d\x40\xc9\x1a\x10", 21, 1 },  /* CTCIF6: Channel 6 Transfer Complete               clear */
   { "\x0c\x85\x09\x1a\x10", 22, 1 },  /* CHTIF6: Channel 6 Half Transfer               clear */
   { "\x0d\x41\x49\x1a\x10", 23, 1 },  /* CTEIF6: Channel 6 Transfer Error               clear */
   { "\x0c\x72\x46\x88", 24, 1 },  /* CGIF7: Channel 7 Global interrupt               clear */
   { "\x0d\x40\xc9\x1a\x20", 25, 1 },  /* CTCIF7: Channel 7 Transfer Complete               clear */
   { "\x0c\x85\x09\x1a\x20", 26, 1 },  /* CHTIF7: Channel 7 Half Transfer               clear */
   { "\x0d\x41\x49\x1a\x20", 27, 1 },  /* CTEIF7: Channel 7 Transfer Error               clear */
};

const Field_t DMA1_CCR1_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half Transfer interrupt               enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel Priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR1_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR1_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR1_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR2_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half Transfer interrupt               enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel Priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR2_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR2_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR2_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR3_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half Transfer interrupt               enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel Priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR3_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR3_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR3_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR4_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half Transfer interrupt               enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel Priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR4_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR4_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR4_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR5_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half Transfer interrupt               enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel Priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR5_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR5_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR5_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR6_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half Transfer interrupt               enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel Priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR6_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR6_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR6_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR7_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half Transfer interrupt               enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel Priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR7_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR7_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR7_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Register_t DMA1_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, DMA1_ISR_fields, 28}, /* ISR: DMA interrupt status register           (DMA_ISR) */
   {"\x24\x60\xd2", 4, 32, 0, DMA1_IFCR_fields, 28}, /* IFCR: DMA interrupt flag clear register           (DMA_IFCR) */
   {"\x0c\x34\x9c", 8, 32, 0, DMA1_CCR1_fields, 12}, /* CCR1: DMA channel configuration register           (DMA_CCR) */
   {"\x0c\xe1\x14\x49\xc0", 12, 32, 0, DMA1_CNDTR1_fields, 1}, /* CNDTR1: DMA channel 1 number of data           register */
   {"\x0d\x00\x52\x70", 16, 32, 0, DMA1_CPAR1_fields, 1}, /* CPAR1: DMA channel 1 peripheral address           register */
   {"\x0c\xd0\x52\x70", 20, 32, 0, DMA1_CMAR1_fields, 1}, /* CMAR1: DMA channel 1 memory address           register */
   {"\x0c\x34\x9d", 28, 32, 0, DMA1_CCR2_fields, 12}, /* CCR2: DMA channel configuration register           (DMA_CCR) */
   {"\x0c\xe1\x14\x49\xd0", 32, 32, 0, DMA1_CNDTR2_fields, 1}, /* CNDTR2: DMA channel 2 number of data           register */
   {"\x0d\x00\x52\x74", 36, 32, 0, DMA1_CPAR2_fields, 1}, /* CPAR2: DMA channel 2 peripheral address           register */
   {"\x0c\xd0\x52\x74", 40, 32, 0, DMA1_CMAR2_fields, 1}, /* CMAR2: DMA channel 2 memory address           register */
   {"\x0c\x34\x9e", 48, 32, 0, DMA1_CCR3_fields, 12}, /* CCR3: DMA channel configuration register           (DMA_CCR) */
   {"\x0c\xe1\x14\x49\xe0", 52, 32, 0, DMA1_CNDTR3_fields, 1}, /* CNDTR3: DMA channel 3 number of data           register */
   {"\x0d\x00\x52\x78", 56, 32, 0, DMA1_CPAR3_fields, 1}, /* CPAR3: DMA channel 3 peripheral address           register */
   {"\x0c\xd0\x52\x78", 60, 32, 0, DMA1_CMAR3_fields, 1}, /* CMAR3: DMA channel 3 memory address           register */
   {"\x0c\x34\x9f", 68, 32, 0, DMA1_CCR4_fields, 12}, /* CCR4: DMA channel configuration register           (DMA_CCR) */
   {"\x0c\xe1\x14\x49\xf0", 72, 32, 0, DMA1_CNDTR4_fields, 1}, /* CNDTR4: DMA channel 4 number of data           register */
   {"\x0d\x00\x52\x7c", 76, 32, 0, DMA1_CPAR4_fields, 1}, /* CPAR4: DMA channel 4 peripheral address           register */
   {"\x0c\xd0\x52\x7c", 80, 32, 0, DMA1_CMAR4_fields, 1}, /* CMAR4: DMA channel 4 memory address           register */
   {"\x0c\x34\xa0", 88, 32, 0, DMA1_CCR5_fields, 12}, /* CCR5: DMA channel configuration register           (DMA_CCR) */
   {"\x0c\xe1\x14\x4a\x00", 92, 32, 0, DMA1_CNDTR5_fields, 1}, /* CNDTR5: DMA channel 5 number of data           register */
   {"\x0d\x00\x52\x80", 96, 32, 0, DMA1_CPAR5_fields, 1}, /* CPAR5: DMA channel 5 peripheral address           register */
   {"\x0c\xd0\x52\x80", 100, 32, 0, DMA1_CMAR5_fields, 1}, /* CMAR5: DMA channel 5 memory address           register */
   {"\x0c\x34\xa1", 108, 32, 0, DMA1_CCR6_fields, 12}, /* CCR6: DMA channel configuration register           (DMA_CCR) */
   {"\x0c\xe1\x14\x4a\x10", 112, 32, 0, DMA1_CNDTR6_fields, 1}, /* CNDTR6: DMA channel 6 number of data           register */
   {"\x0d\x00\x52\x84", 116, 32, 0, DMA1_CPAR6_fields, 1}, /* CPAR6: DMA channel 6 peripheral address           register */
   {"\x0c\xd0\x52\x84", 120, 32, 0, DMA1_CMAR6_fields, 1}, /* CMAR6: DMA channel 6 memory address           register */
   {"\x0c\x34\xa2", 128, 32, 0, DMA1_CCR7_fields, 12}, /* CCR7: DMA channel configuration register           (DMA_CCR) */
   {"\x0c\xe1\x14\x4a\x20", 132, 32, 0, DMA1_CNDTR7_fields, 1}, /* CNDTR7: DMA channel 7 number of data           register */
   {"\x0d\x00\x52\x88", 136, 32, 0, DMA1_CPAR7_fields, 1}, /* CPAR7: DMA channel 7 peripheral address           register */
   {"\x0c\xd0\x52\x88", 140, 32, 0, DMA1_CMAR7_fields, 1}, /* CMAR7: DMA channel 7 memory address           register */
};

const Field_t RCC_CR_fields[] = {
   { "\x21\x32\x4f\x38", 0, 1 },  /* HSION: Internal High Speed clock               enable */
   { "\x21\x32\x52\x11\x90", 1, 1 },  /* HSIRDY: Internal High Speed clock ready               flag */
   { "\x21\x32\x54\x48\x93\x40", 3, 5 },  /* HSITRIM: Internal High Speed clock               trimming */
   { "\x21\x32\x43\x04\xc0", 8, 8 },  /* HSICAL: Internal High Speed clock               Calibration */
   { "\x21\x31\x4f\x38", 16, 1 },  /* HSEON: External High Speed clock               enable */
   { "\x21\x31\x52\x11\x90", 17, 1 },  /* HSERDY: External High Speed clock ready               flag */
   { "\x21\x31\x42\x65\x00", 18, 1 },  /* HSEBYP: External High Speed clock               Bypass */
   { "\x0d\x34\xcf\x38", 19, 1 },  /* CSSON: Clock Security System               enable */
   { "\x40\xc3\x0f\x38", 24, 1 },  /* PLLON: PLL enable */
   { "\x40\xc3\x12\x11\x90", 25, 1 },  /* PLLRDY: PLL clock ready flag */
};

const Field_t RCC_CFGR_fields[] = {
   { "\x4d\x70", 0, 2 },  /* SW: System clock Switch */
   { "\x4d\x74\xc0", 2, 2 },  /* SWS: System Clock Switch Status */
   { "\x21\x04\x85", 4, 4 },  /* HPRE: AHB prescaler */
   { "\x41\x04\x85\x70", 8, 3 },  /* PPRE1: APB Low speed prescaler               (APB1) */
   { "\x41\x04\x85\x74", 11, 3 },  /* PPRE2: APB high speed prescaler               (APB2) */
   { "\x40\xc3\x13\x48\x30", 15, 2 },  /* PLLSRC: PLL entry clock source */
   { "\x40\xc3\x18\x51\x04\x85", 17, 1 },  /* PLLXTPRE: HSE divider for PLL entry */
   { "\x40\xc3\x0d\x54\xc0", 18, 4 },  /* PLLMUL: PLL Multiplication Factor */
   { "\x55\x30\x90\x48\x54\xc0", 22, 1 },  /* USBPRES: USB prescaler */
   { "\x25\xd4\xd3\x48\x30", 23, 1 },  /* I2SSRC: I2S external clock source               selection */
   { "\x34\x33\xc0", 24, 3 },  /* MCO: Microcontroller clock               output */
   { "\x34\x33\xc6", 28, 1 },  /* MCOF: Microcontroller Clock Output               Flag */
};

const Field_t RCC_CIR_fields[] = {
   { "\x31\x32\x52\x11\x91\x80", 0, 1 },  /* LSIRDYF: LSI Ready Interrupt flag */
   { "\x31\x31\x52\x11\x91\x80", 1, 1 },  /* LSERDYF: LSE Ready Interrupt flag */
   { "\x21\x32\x52\x11\x91\x80", 2, 1 },  /* HSIRDYF: HSI Ready Interrupt flag */
   { "\x21\x31\x52\x11\x91\x80", 3, 1 },  /* HSERDYF: HSE Ready Interrupt flag */
   { "\x40\xc3\x12\x11\x91\x80", 4, 1 },  /* PLLRDYF: PLL Ready Interrupt flag */
   { "\x0d\x34\xc6", 7, 1 },  /* CSSF: Clock Security System Interrupt               flag */
   { "\x31\x32\x52\x11\x92\x45", 8, 1 },  /* LSIRDYIE: LSI Ready Interrupt Enable */
   { "\x31\x31\x52\x11\x92\x45", 9, 1 },  /* LSERDYIE: LSE Ready Interrupt Enable */
   { "\x21\x32\x52\x11\x92\x45", 10, 1 },  /* HSIRDYIE: HSI Ready Interrupt Enable */
   { "\x21\x31\x52\x11\x92\x45", 11, 1 },  /* HSERDYIE: HSE Ready Interrupt Enable */
   { "\x40\xc3\x12\x11\x92\x45", 12, 1 },  /* PLLRDYIE: PLL Ready Interrupt Enable */
   { "\x31\x32\x52\x11\x90\xc0", 16, 1 },  /* LSIRDYC: LSI Ready Interrupt Clear */
   { "\x31\x31\x52\x11\x90\xc0", 17, 1 },  /* LSERDYC: LSE Ready Interrupt Clear */
   { "\x21\x32\x52\x11\x90\xc0", 18, 1 },  /* HSIRDYC: HSI Ready Interrupt Clear */
   { "\x21\x31\x52\x11\x90\xc0", 19, 1 },  /* HSERDYC: HSE Ready Interrupt Clear */
   { "\x40\xc3\x12\x11\x90\xc0", 20, 1 },  /* PLLRDYC: PLL Ready Interrupt Clear */
   { "\x0d\x34\xc3", 23, 1 },  /* CSSC: Clock security system interrupt               clear */
};

const Field_t RCC_APB2RSTR_fields[] = {
   { "\x4d\x94\xc3\x18\x74\x93\x50", 0, 1 },  /* SYSCFGRST: SYSCFG and COMP reset */
   { "\x50\x93\x5c\x49\x35\x00", 11, 1 },  /* TIM1RST: TIM1 timer reset */
   { "\x4d\x02\x5c\x49\x35\x00", 12, 1 },  /* SPI1RST: SPI 1 reset */
   { "\x50\x93\x63\x49\x35\x00", 13, 1 },  /* TIM8RST: TIM8 timer reset */
   { "\x55\x30\x52\x51\xc4\x93\x50", 14, 1 },  /* USART1RST: USART1 reset */
   { "\x50\x93\x5c\x81\x24\xd4", 16, 1 },  /* TIM15RST: TIM15 timer reset */
   { "\x50\x93\x5c\x85\x24\xd4", 17, 1 },  /* TIM16RST: TIM16 timer reset */
   { "\x50\x93\x5c\x89\x24\xd4", 18, 1 },  /* TIM17RST: TIM17 timer reset */
};

const Field_t RCC_APB1RSTR_fields[] = {
   { "\x50\x93\x5d\x49\x35\x00", 0, 1 },  /* TIM2RST: Timer 2 reset */
   { "\x50\x93\x5e\x49\x35\x00", 1, 1 },  /* TIM3RST: Timer 3 reset */
   { "\x50\x93\x5f\x49\x35\x00", 2, 1 },  /* TIM4RST: Timer 14 reset */
   { "\x50\x93\x61\x49\x35\x00", 4, 1 },  /* TIM6RST: Timer 6 reset */
   { "\x50\x93\x62\x49\x35\x00", 5, 1 },  /* TIM7RST: Timer 7 reset */
   { "\x5d\x71\x07\x49\x35\x00", 11, 1 },  /* WWDGRST: Window watchdog reset */
   { "\x4d\x02\x5d\x49\x35\x00", 14, 1 },  /* SPI2RST: SPI2 reset */
   { "\x4d\x02\x5e\x49\x35\x00", 15, 1 },  /* SPI3RST: SPI3 reset */
   { "\x55\x30\x52\x51\xd4\x93\x50", 17, 1 },  /* USART2RST: USART 2 reset */
   { "\x55\x30\x52\x51\xe4\x93\x50", 18, 1 },  /* USART3RST: USART3 reset */
   { "\x54\x14\x94\x7d\x24\xd4", 19, 1 },  /* UART4RST: UART 4 reset */
   { "\x54\x14\x94\x81\x24\xd4", 20, 1 },  /* UART5RST: UART 5 reset */
   { "\x25\xd0\xdc\x49\x35\x00", 21, 1 },  /* I2C1RST: I2C1 reset */
   { "\x25\xd0\xdd\x49\x35\x00", 22, 1 },  /* I2C2RST: I2C2 reset */
   { "\x55\x30\x92\x4d\x40", 23, 1 },  /* USBRST: USB reset */
   { "\x0c\x13\x92\x4d\x40", 25, 1 },  /* CANRST: CAN reset */
   { "\x41\x74\x92\x4d\x40", 28, 1 },  /* PWRRST: Power interface reset */
   { "\x10\x10\xd2\x4d\x40", 29, 1 },  /* DACRST: DAC interface reset */
};

const Field_t RCC_AHBENR_fields[] = {
   { "\x10\xd0\x45\x38", 0, 1 },  /* DMAEN: DMA1 clock enable */
   { "\x10\xd0\x5d\x14\xe0", 1, 1 },  /* DMA2EN: DMA2 clock enable */
   { "\x4d\x20\x4d\x14\xe0", 2, 1 },  /* SRAMEN: SRAM interface clock               enable */
   { "\x18\xc2\x54\x18\x53\x80", 4, 1 },  /* FLITFEN: FLITF clock enable */
   { "\x0d\x20\xc5\x38", 6, 1 },  /* CRCEN: CRC clock enable */
   { "\x24\xf4\x01\x14\xe0", 17, 1 },  /* IOPAEN: I/O port A clock enable */
   { "\x24\xf4\x02\x14\xe0", 18, 1 },  /* IOPBEN: I/O port B clock enable */
   { "\x24\xf4\x03\x14\xe0", 19, 1 },  /* IOPCEN: I/O port C clock enable */
   { "\x24\xf4\x04\x14\xe0", 20, 1 },  /* IOPDEN: I/O port D clock enable */
   { "\x24\xf4\x05\x14\xe0", 21, 1 },  /* IOPEEN: I/O port E clock enable */
   { "\x24\xf4\x06\x14\xe0", 22, 1 },  /* IOPFEN: I/O port F clock enable */
   { "\x51\x30\xc5\x38", 24, 1 },  /* TSCEN: Touch sensing controller clock               enable */
   { "\x04\x40\xdc\x74\x53\x80", 28, 1 },  /* ADC12EN: ADC1 and ADC2 clock enable */
   { "\x04\x40\xde\x7c\x53\x80", 29, 1 },  /* ADC34EN: ADC3 and ADC4 clock enable */
};

const Field_t RCC_APB2ENR_fields[] = {
   { "\x4d\x94\xc3\x18\x71\x4e", 0, 1 },  /* SYSCFGEN: SYSCFG clock enable */
   { "\x50\x93\x5c\x14\xe0", 11, 1 },  /* TIM1EN: TIM1 Timer clock enable */
   { "\x4d\x02\x5c\x14\xe0", 12, 1 },  /* SPI1EN: SPI 1 clock enable */
   { "\x50\x93\x63\x14\xe0", 13, 1 },  /* TIM8EN: TIM8 Timer clock enable */
   { "\x55\x30\x52\x51\xc1\x4e", 14, 1 },  /* USART1EN: USART1 clock enable */
   { "\x50\x93\x5c\x80\x53\x80", 16, 1 },  /* TIM15EN: TIM15 timer clock enable */
   { "\x50\x93\x5c\x84\x53\x80", 17, 1 },  /* TIM16EN: TIM16 timer clock enable */
   { "\x50\x93\x5c\x88\x53\x80", 18, 1 },  /* TIM17EN: TIM17 timer clock enable */
};

const Field_t RCC_APB1ENR_fields[] = {
   { "\x50\x93\x5d\x14\xe0", 0, 1 },  /* TIM2EN: Timer 2 clock enable */
   { "\x50\x93\x5e\x14\xe0", 1, 1 },  /* TIM3EN: Timer 3 clock enable */
   { "\x50\x93\x5f\x14\xe0", 2, 1 },  /* TIM4EN: Timer 4 clock enable */
   { "\x50\x93\x61\x14\xe0", 4, 1 },  /* TIM6EN: Timer 6 clock enable */
   { "\x50\x93\x62\x14\xe0", 5, 1 },  /* TIM7EN: Timer 7 clock enable */
   { "\x5d\x71\x07\x14\xe0", 11, 1 },  /* WWDGEN: Window watchdog clock               enable */
   { "\x4d\x02\x5d\x14\xe0", 14, 1 },  /* SPI2EN: SPI 2 clock enable */
   { "\x4d\x02\x5e\x14\xe0", 15, 1 },  /* SPI3EN: SPI 3 clock enable */
   { "\x55\x30\x52\x51\xd1\x4e", 17, 1 },  /* USART2EN: USART 2 clock enable */
   { "\x25\xd0\xdc\x14\xe0", 21, 1 },  /* I2C1EN: I2C 1 clock enable */
   { "\x25\xd0\xdd\x14\xe0", 22, 1 },  /* I2C2EN: I2C 2 clock enable */
   { "\x55\x30\x85\x38", 23, 1 },  /* USBEN: USB clock enable */
   { "\x0c\x13\x85\x38", 25, 1 },  /* CANEN: CAN clock enable */
   { "\x41\x74\x85\x38", 28, 1 },  /* PWREN: Power interface clock               enable */
   { "\x10\x10\xc5\x38", 29, 1 },  /* DACEN: DAC interface clock enable */
};

const Field_t RCC_BDCR_fields[] = {
   { "\x31\x31\x4f\x38", 0, 1 },  /* LSEON: External Low Speed oscillator               enable */
   { "\x31\x31\x52\x11\x90", 1, 1 },  /* LSERDY: External Low Speed oscillator               ready */
   { "\x31\x31\x42\x65\x00", 2, 1 },  /* LSEBYP: External Low Speed oscillator               bypass */
   { "\x31\x31\x44\x49\x60", 3, 2 },  /* LSEDRV: LSE oscillator drive               capability */
   { "\x49\x40\xd3\x14\xc0", 8, 2 },  /* RTCSEL: RTC clock source selection */
   { "\x49\x40\xc5\x38", 15, 1 },  /* RTCEN: RTC clock enable */
   { "\x08\x44\x93\x50", 16, 1 },  /* BDRST: Backup domain software               reset */
};

const Field_t RCC_CSR_fields[] = {
   { "\x31\x32\x4f\x38", 0, 1 },  /* LSION: Internal low speed oscillator               enable */
   { "\x31\x32\x52\x11\x90", 1, 1 },  /* LSIRDY: Internal low speed oscillator               ready */
   { "\x48\xd5\x86", 24, 1 },  /* RMVF: Remove reset flag */
   { "\x3c\x23\x12\x4d\x41\x80", 25, 1 },  /* OBLRSTF: Option byte loader reset               flag */
   { "\x40\x93\x92\x4d\x41\x80", 26, 1 },  /* PINRSTF: PIN reset flag */
   { "\x40\xf4\x92\x4d\x41\x80", 27, 1 },  /* PORRSTF: POR/PDR reset flag */
   { "\x4c\x65\x12\x4d\x41\x80", 28, 1 },  /* SFTRSTF: Software reset flag */
   { "\x25\x71\x07\x49\x35\x06", 29, 1 },  /* IWDGRSTF: Independent watchdog reset               flag */
   { "\x5d\x71\x07\x49\x35\x06", 30, 1 },  /* WWDGRSTF: Window watchdog reset flag */
   { "\x31\x05\xd2\x49\x35\x06", 31, 1 },  /* LPWRRSTF: Low-power reset flag */
};

const Field_t RCC_AHBRSTR_fields[] = {
   { "\x24\xf4\x01\x49\x35\x00", 17, 1 },  /* IOPARST: I/O port A reset */
   { "\x24\xf4\x02\x49\x35\x00", 18, 1 },  /* IOPBRST: I/O port B reset */
   { "\x24\xf4\x03\x49\x35\x00", 19, 1 },  /* IOPCRST: I/O port C reset */
   { "\x24\xf4\x04\x49\x35\x00", 20, 1 },  /* IOPDRST: I/O port D reset */
   { "\x24\xf4\x05\x49\x35\x00", 21, 1 },  /* IOPERST: I/O port E reset */
   { "\x24\xf4\x06\x49\x35\x00", 22, 1 },  /* IOPFRST: I/O port F reset */
   { "\x51\x30\xd2\x4d\x40", 24, 1 },  /* TSCRST: Touch sensing controller               reset */
   { "\x04\x40\xdc\x75\x24\xd4", 28, 1 },  /* ADC12RST: ADC1 and ADC2 reset */
   { "\x04\x40\xde\x7d\x24\xd4", 29, 1 },  /* ADC34RST: ADC3 and ADC4 reset */
};

const Field_t RCC_CFGR2_fields[] = {
   { "\x41\x21\x44\x25\x60", 0, 4 },  /* PREDIV: PREDIV division factor */
   { "\x04\x40\xdc\x75\x04\x85\x4c", 4, 5 },  /* ADC12PRES: ADC1 and ADC2 prescaler */
   { "\x04\x40\xde\x7d\x04\x85\x4c", 9, 5 },  /* ADC34PRES: ADC3 and ADC4 prescaler */
};

const Field_t RCC_CFGR3_fields[] = {
   { "\x55\x30\x52\x51\xc4\xd7", 0, 2 },  /* USART1SW: USART1 clock source               selection */
   { "\x25\xd0\xdc\x4d\x70", 4, 1 },  /* I2C1SW: I2C1 clock source               selection */
   { "\x25\xd0\xdd\x4d\x70", 5, 1 },  /* I2C2SW: I2C2 clock source               selection */
   { "\x50\x93\x5c\x4d\x70", 8, 1 },  /* TIM1SW: Timer1 clock source               selection */
   { "\x50\x93\x63\x4d\x70", 9, 1 },  /* TIM8SW: Timer8 clock source               selection */
   { "\x55\x30\x52\x51\xd4\xd7", 16, 2 },  /* USART2SW: USART2 clock source               selection */
   { "\x55\x30\x52\x51\xe4\xd7", 18, 2 },  /* USART3SW: USART3 clock source               selection */
   { "\x54\x14\x94\x7d\x35\xc0", 20, 2 },  /* UART4SW: UART4 clock source               selection */
   { "\x54\x14\x94\x81\x35\xc0", 22, 2 },  /* UART5SW: UART5 clock source               selection */
};

const Register_t RCC_registers[] = {
   {"\x0d\x20", 0, 32, 0, RCC_CR_fields, 10}, /* CR: Clock control register */
   {"\x0c\x61\xd2", 4, 32, 0, RCC_CFGR_fields, 12}, /* CFGR: Clock configuration register           (RCC_CFGR) */
   {"\x0c\x94\x80", 8, 32, 0, RCC_CIR_fields, 17}, /* CIR: Clock interrupt register           (RCC_CIR) */
   {"\x05\x00\x9d\x49\x35\x12", 12, 32, 0, RCC_APB2RSTR_fields, 8}, /* APB2RSTR: APB2 peripheral reset register           (RCC_APB2RSTR) */
   {"\x05\x00\x9c\x49\x35\x12", 16, 32, 0, RCC_APB1RSTR_fields, 18}, /* APB1RSTR: APB1 peripheral reset register           (RCC_APB1RSTR) */
   {"\x04\x80\x85\x39\x20", 20, 32, 0, RCC_AHBENR_fields, 14}, /* AHBENR: AHB Peripheral Clock enable register           (RCC_AHBENR) */
   {"\x05\x00\x9d\x14\xe4\x80", 24, 32, 0, RCC_APB2ENR_fields, 8}, /* APB2ENR: APB2 peripheral clock enable register           (RCC_APB2ENR) */
   {"\x05\x00\x9c\x14\xe4\x80", 28, 32, 0, RCC_APB1ENR_fields, 15}, /* APB1ENR: APB1 peripheral clock enable register           (RCC_APB1ENR) */
   {"\x08\x40\xd2", 32, 32, 0, RCC_BDCR_fields, 7}, /* BDCR: Backup domain control register           (RCC_BDCR) */
   {"\x0d\x34\x80", 36, 32, 0, RCC_CSR_fields, 10}, /* CSR: Control/status register           (RCC_CSR) */
   {"\x04\x80\x92\x4d\x44\x80", 40, 32, 0, RCC_AHBRSTR_fields, 9}, /* AHBRSTR: AHB peripheral reset register */
   {"\x0c\x61\xd2\x74", 44, 32, 0, RCC_CFGR2_fields, 3}, /* CFGR2: Clock configuration register 2 */
   {"\x0c\x61\xd2\x78", 48, 32, 0, RCC_CFGR3_fields, 9}, /* CFGR3: Clock configuration register 3 */
};

const Field_t Flash_ACR_fields[] = {
   { "\x30\x15\x05\x38\x36\x40", 0, 3 },  /* LATENCY: LATENCY */
   { "\x41\x21\x94\x08\x50", 4, 1 },  /* PRFTBE: PRFTBE */
   { "\x41\x21\x94\x09\x30", 5, 1 },  /* PRFTBS: PRFTBS */
};

const Field_t Flash_KEYR_fields[] = {
   { "\x18\xb1\x59\x48", 0, 32 },  /* FKEYR: Flash Key */
};

const Field_t Flash_OPTKEYR_fields[] = {
   { "\x3d\x05\x0b\x15\x94\x80", 0, 32 },  /* OPTKEYR: Option byte key */
};

const Field_t Flash_SR_fields[] = {
   { "\x09\x36\x40", 0, 1 },  /* BSY: Busy */
   { "\x40\x71\x52\x48", 2, 1 },  /* PGERR: Programming error */
   { "\x5d\x24\x12\x50", 4, 1 },  /* WRPRT: Write protection error */
   { "\x14\xf4\x00", 5, 1 },  /* EOP: End of operation */
};

const Field_t Flash_CR_fields[] = {
   { "\x40\x70", 0, 1 },  /* PG: Programming */
   { "\x40\x54\x80", 1, 1 },  /* PER: Page erase */
   { "\x34\x54\x80", 2, 1 },  /* MER: Mass erase */
   { "\x3d\x05\x10\x1c", 4, 1 },  /* OPTPG: Option byte programming */
   { "\x3d\x05\x05\x48", 5, 1 },  /* OPTER: Option byte erase */
   { "\x4d\x44\x94", 6, 1 },  /* STRT: Start */
   { "\x30\xf0\xcb", 7, 1 },  /* LOCK: Lock */
   { "\x3d\x05\x17\x48\x50", 9, 1 },  /* OPTWRE: Option bytes write enable */
   { "\x15\x24\x89\x14", 10, 1 },  /* ERRIE: Error interrupt enable */
   { "\x14\xf4\x09\x14", 12, 1 },  /* EOPIE: End of operation interrupt               enable */
   { "\x18\xf4\x83\x16\x53\xd0\x50\xc3\xc1\x10", 13, 1 },  /* FORCE_OPTLOAD: Force option byte loading */
};

const Field_t Flash_AR_fields[] = {
   { "\x18\x14\x80", 0, 32 },  /* FAR: Flash address */
};

const Field_t Flash_OBR_fields[] = {
   { "\x3d\x05\x05\x49\x20", 0, 1 },  /* OPTERR: Option byte error */
   { "\x30\x55\x85\x31\xc9\x50\x48\xf5\x00", 1, 1 },  /* LEVEL1_PROT: Level 1 protection status */
   { "\x30\x55\x85\x31\xd9\x50\x48\xf5\x00", 2, 1 },  /* LEVEL2_PROT: Level 2 protection status */
   { "\x5c\x41\xe5\x4d\x70", 8, 1 },  /* WDG_SW: WDG_SW */
   { "\x39\x24\xd4\x95\x35\x0f\x40", 9, 1 },  /* nRST_STOP: nRST_STOP */
   { "\x39\x24\xd4\x95\x35\x04\x09\x90", 10, 1 },  /* nRST_STDBY: nRST_STDBY */
   { "\x08\xf3\xd4\x70", 12, 1 },  /* BOOT1: BOOT1 */
   { "\x58\x41\x01\x94\xd3\xce\x25\x43\xd2", 13, 1 },  /* VDDA_MONITOR: VDDA_MONITOR */
   { "\x4d\x20\x4d\x95\x00\x52\x25\x46\x65\x0c\x81\x43\x2c", 14, 1 },  /* SRAM_PARITY_CHECK: SRAM_PARITY_CHECK */
   { "\x10\x15\x01\x6c", 16, 8 },  /* Data0: Data0 */
   { "\x10\x15\x01\x70", 24, 8 },  /* Data1: Data1 */
};

const Field_t Flash_WRPR_fields[] = {
   { "\x5d\x24\x00", 0, 32 },  /* WRP: Write protect */
};

const Register_t Flash_registers[] = {
   {"\x04\x34\x80", 0, 32, 0, Flash_ACR_fields, 3}, /* ACR: Flash access control register */
   {"\x2c\x56\x52", 4, 32, 0, Flash_KEYR_fields, 1}, /* KEYR: Flash key register */
   {"\x3d\x05\x0b\x15\x94\x80", 8, 32, 0, Flash_OPTKEYR_fields, 1}, /* OPTKEYR: Flash option key register */
   {"\x4d\x20", 12, 32, 0, Flash_SR_fields, 4}, /* SR: Flash status register */
   {"\x0d\x20", 16, 32, 0, Flash_CR_fields, 11}, /* CR: Flash control register */
   {"\x05\x20", 20, 32, 0, Flash_AR_fields, 1}, /* AR: Flash address register */
   {"\x3c\x24\x80", 28, 32, 0, Flash_OBR_fields, 11}, /* OBR: Option byte register */
   {"\x5d\x24\x12", 32, 32, 0, Flash_WRPR_fields, 1}, /* WRPR: Write protection register */
};

const Field_t CRC_DR_fields[] = {
   { "\x11\x20", 0, 32 },  /* DR: Data register bits */
};

const Field_t CRC_IDR_fields[] = {
   { "\x24\x44\x80", 0, 8 },  /* IDR: General-purpose 8-bit data register               bits */
};

const Field_t CRC_CR_fields[] = {
   { "\x48\x54\xc5\x50", 0, 1 },  /* RESET: reset bit */
   { "\x40\xf3\x19\x4c\x96\x85", 3, 2 },  /* POLYSIZE: Polynomial size */
   { "\x48\x55\xa5\x24\xe0", 5, 2 },  /* REV_IN: Reverse input data */
   { "\x48\x55\xa5\x3d\x55\x00", 7, 1 },  /* REV_OUT: Reverse output data */
};

const Field_t CRC_INIT_fields[] = {
   { "\x24\xe2\x54", 0, 32 },  /* INIT: Programmable initial CRC               value */
};

const Field_t CRC_POL_fields[] = {
   { "\x40\xf3\x00", 0, 32 },  /* POL: Programmable polynomial */
};

const Register_t CRC_registers[] = {
   {"\x11\x20", 0, 32, 0, CRC_DR_fields, 1}, /* DR: Data register */
   {"\x24\x44\x80", 4, 32, 0, CRC_IDR_fields, 1}, /* IDR: Independent data register */
   {"\x0d\x20", 8, 32, 0, CRC_CR_fields, 4}, /* CR: Control register */
   {"\x24\xe2\x54", 16, 32, 0, CRC_INIT_fields, 1}, /* INIT: Initial CRC value */
   {"\x40\xf3\x00", 20, 32, 0, CRC_POL_fields, 1}, /* POL: CRC polynomial */
};

const Field_t TSC_CR_fields[] = {
   { "\x51\x30\xc5", 0, 1 },  /* TSCE: Touch sensing controller               enable */
   { "\x4d\x40\x52\x50", 1, 1 },  /* START: Start a new acquisition */
   { "\x04\xd0", 2, 1 },  /* AM: Acquisition mode */
   { "\x4d\x93\x83\x40\xf3\x00", 3, 1 },  /* SYNCPOL: Synchronization pin               polarity */
   { "\x24\xf1\x05\x18", 4, 1 },  /* IODEF: I/O Default mode */
   { "\x34\x35\x80", 5, 3 },  /* MCV: Max count value */
   { "\x40\x74\x13\x0c", 12, 3 },  /* PGPSC: pulse generator prescaler */
   { "\x4d\x34\x13\x0c", 15, 1 },  /* SSPSC: Spread spectrum prescaler */
   { "\x4d\x31\x40", 16, 1 },  /* SSE: Spread spectrum enable */
   { "\x4d\x31\x00", 17, 7 },  /* SSD: Spread spectrum deviation */
   { "\x0d\x44\x0c", 24, 4 },  /* CTPL: Charge transfer pulse low */
   { "\x0d\x44\x08", 28, 4 },  /* CTPH: Charge transfer pulse high */
};

const Field_t TSC_IER_fields[] = {
   { "\x14\xf0\x49\x14", 0, 1 },  /* EOAIE: End of acquisition interrupt               enable */
   { "\x34\x31\x49\x14", 1, 1 },  /* MCEIE: Max count error interrupt               enable */
};

const Field_t TSC_ICR_fields[] = {
   { "\x14\xf0\x49\x0c", 0, 1 },  /* EOAIC: End of acquisition interrupt               clear */
   { "\x34\x31\x49\x0c", 1, 1 },  /* MCEIC: Max count error interrupt               clear */
};

const Field_t TSC_ISR_fields[] = {
   { "\x14\xf0\x46", 0, 1 },  /* EOAF: End of acquisition flag */
   { "\x34\x31\x46", 1, 1 },  /* MCEF: Max count error flag */
};

const Field_t TSC_IOHCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 Schmitt trigger hysteresis               mode */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 Schmitt trigger hysteresis               mode */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 Schmitt trigger hysteresis               mode */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 Schmitt trigger hysteresis               mode */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 Schmitt trigger hysteresis               mode */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 Schmitt trigger hysteresis               mode */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 Schmitt trigger hysteresis               mode */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 Schmitt trigger hysteresis               mode */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 Schmitt trigger hysteresis               mode */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 Schmitt trigger hysteresis               mode */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 Schmitt trigger hysteresis               mode */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 Schmitt trigger hysteresis               mode */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 Schmitt trigger hysteresis               mode */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 Schmitt trigger hysteresis               mode */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 Schmitt trigger hysteresis               mode */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 Schmitt trigger hysteresis               mode */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 Schmitt trigger hysteresis               mode */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 Schmitt trigger hysteresis               mode */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 Schmitt trigger hysteresis               mode */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 Schmitt trigger hysteresis               mode */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 Schmitt trigger hysteresis               mode */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 Schmitt trigger hysteresis               mode */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 Schmitt trigger hysteresis               mode */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 Schmitt trigger hysteresis               mode */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 Schmitt trigger hysteresis               mode */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 Schmitt trigger hysteresis               mode */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 Schmitt trigger hysteresis               mode */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 Schmitt trigger hysteresis               mode */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 Schmitt trigger hysteresis               mode */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 Schmitt trigger hysteresis               mode */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 Schmitt trigger hysteresis               mode */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 Schmitt trigger hysteresis               mode */
};

const Field_t TSC_IOASCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 analog switch               enable */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 analog switch               enable */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 analog switch               enable */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 analog switch               enable */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 analog switch               enable */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 analog switch               enable */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 analog switch               enable */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 analog switch               enable */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 analog switch               enable */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 analog switch               enable */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 analog switch               enable */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 analog switch               enable */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 analog switch               enable */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 analog switch               enable */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 analog switch               enable */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 analog switch               enable */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 analog switch               enable */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 analog switch               enable */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 analog switch               enable */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 analog switch               enable */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 analog switch               enable */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 analog switch               enable */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 analog switch               enable */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 analog switch               enable */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 analog switch               enable */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 analog switch               enable */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 analog switch               enable */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 analog switch               enable */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 analog switch               enable */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 analog switch               enable */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 analog switch               enable */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 analog switch               enable */
};

const Field_t TSC_IOSCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 sampling mode */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 sampling mode */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 sampling mode */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 sampling mode */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 sampling mode */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 sampling mode */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 sampling mode */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 sampling mode */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 sampling mode */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 sampling mode */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 sampling mode */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 sampling mode */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 sampling mode */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 sampling mode */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 sampling mode */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 sampling mode */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 sampling mode */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 sampling mode */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 sampling mode */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 sampling mode */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 sampling mode */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 sampling mode */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 sampling mode */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 sampling mode */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 sampling mode */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 sampling mode */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 sampling mode */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 sampling mode */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 sampling mode */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 sampling mode */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 sampling mode */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 sampling mode */
};

const Field_t TSC_IOCCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 channel mode */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 channel mode */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 channel mode */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 channel mode */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 channel mode */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 channel mode */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 channel mode */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 channel mode */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 channel mode */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 channel mode */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 channel mode */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 channel mode */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 channel mode */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 channel mode */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 channel mode */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 channel mode */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 channel mode */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 channel mode */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 channel mode */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 channel mode */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 channel mode */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 channel mode */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 channel mode */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 channel mode */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 channel mode */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 channel mode */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 channel mode */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 channel mode */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 channel mode */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 channel mode */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 channel mode */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 channel mode */
};

const Field_t TSC_IOGCSR_fields[] = {
   { "\x1d\xc1\x40", 0, 1 },  /* G1E: Analog I/O group x enable */
   { "\x1d\xd1\x40", 1, 1 },  /* G2E: Analog I/O group x enable */
   { "\x1d\xe1\x40", 2, 1 },  /* G3E: Analog I/O group x enable */
   { "\x1d\xf1\x40", 3, 1 },  /* G4E: Analog I/O group x enable */
   { "\x1e\x01\x40", 4, 1 },  /* G5E: Analog I/O group x enable */
   { "\x1e\x11\x40", 5, 1 },  /* G6E: Analog I/O group x enable */
   { "\x1e\x21\x40", 6, 1 },  /* G7E: Analog I/O group x enable */
   { "\x1e\x31\x40", 7, 1 },  /* G8E: Analog I/O group x enable */
   { "\x1d\xc4\xc0", 16, 1 },  /* G1S: Analog I/O group x status */
   { "\x1d\xd4\xc0", 17, 1 },  /* G2S: Analog I/O group x status */
   { "\x1d\xe4\xc0", 18, 1 },  /* G3S: Analog I/O group x status */
   { "\x1d\xf4\xc0", 19, 1 },  /* G4S: Analog I/O group x status */
   { "\x1e\x04\xc0", 20, 1 },  /* G5S: Analog I/O group x status */
   { "\x1e\x14\xc0", 21, 1 },  /* G6S: Analog I/O group x status */
   { "\x1e\x24\xc0", 22, 1 },  /* G7S: Analog I/O group x status */
   { "\x1e\x34\xc0", 23, 1 },  /* G8S: Analog I/O group x status */
};

const Field_t TSC_IOG1CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG2CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG3CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG4CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG5CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG6CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG7CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG8CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Register_t TSC_registers[] = {
   {"\x0d\x20", 0, 32, 0, TSC_CR_fields, 12}, /* CR: control register */
   {"\x24\x54\x80", 4, 32, 0, TSC_IER_fields, 2}, /* IER: interrupt enable register */
   {"\x24\x34\x80", 8, 32, 0, TSC_ICR_fields, 2}, /* ICR: interrupt clear register */
   {"\x25\x34\x80", 12, 32, 0, TSC_ISR_fields, 2}, /* ISR: interrupt status register */
   {"\x24\xf2\x03\x48", 16, 32, 0, TSC_IOHCR_fields, 32}, /* IOHCR: I/O hysteresis control           register */
   {"\x24\xf0\x53\x0d\x20", 24, 32, 0, TSC_IOASCR_fields, 32}, /* IOASCR: I/O analog switch control           register */
   {"\x24\xf4\xc3\x48", 32, 32, 0, TSC_IOSCR_fields, 32}, /* IOSCR: I/O sampling control register */
   {"\x24\xf0\xc3\x48", 40, 32, 0, TSC_IOCCR_fields, 32}, /* IOCCR: I/O channel control register */
   {"\x24\xf1\xc3\x4d\x20", 48, 32, 0, TSC_IOGCSR_fields, 16}, /* IOGCSR: I/O group control status           register */
   {"\x24\xf1\xdc\x0d\x20", 52, 32, 0, TSC_IOG1CR_fields, 1}, /* IOG1CR: I/O group x counter register */
   {"\x24\xf1\xdd\x0d\x20", 56, 32, 0, TSC_IOG2CR_fields, 1}, /* IOG2CR: I/O group x counter register */
   {"\x24\xf1\xde\x0d\x20", 60, 32, 0, TSC_IOG3CR_fields, 1}, /* IOG3CR: I/O group x counter register */
   {"\x24\xf1\xdf\x0d\x20", 64, 32, 0, TSC_IOG4CR_fields, 1}, /* IOG4CR: I/O group x counter register */
   {"\x24\xf1\xe0\x0d\x20", 68, 32, 0, TSC_IOG5CR_fields, 1}, /* IOG5CR: I/O group x counter register */
   {"\x24\xf1\xe1\x0d\x20", 72, 32, 0, TSC_IOG6CR_fields, 1}, /* IOG6CR: I/O group x counter register */
   {"\x24\xf1\xe2\x0d\x20", 76, 32, 0, TSC_IOG7CR_fields, 1}, /* IOG7CR: I/O group x counter register */
   {"\x24\xf1\xe3\x0d\x20", 80, 32, 0, TSC_IOG8CR_fields, 1}, /* IOG8CR: I/O group x counter register */
};

const Field_t GPIOA_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bits (y =               0..15) */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =               0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =               0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =               0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =               0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =               0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =               0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =               0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =               0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =               0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =               0..15) */
};

const Field_t GPIOA_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =               0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =               0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =               0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =               0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =               0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =               0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =               0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =               0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =               0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =               0..15) */
};

const Field_t GPIOA_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=               0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=               0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=               0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=               0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=               0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=               0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=               0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=               0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=               0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=               0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=               0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=               0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =               0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =               0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =               0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =               0..15) */
};

const Field_t GPIOA_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Lok Key */
};

const Field_t GPIOA_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x               bit y (y = 0..7) */
};

const Field_t GPIOA_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x               bit y (y = 8..15) */
};

const Field_t GPIOA_BRR_fields[] = {
   { "\x09\x26\xc0", 0, 1 },  /* BR0: Port x Reset bit y */
   { "\x09\x27\x00", 1, 1 },  /* BR1: Port x Reset bit y */
   { "\x09\x27\x40", 2, 1 },  /* BR2: Port x Reset bit y */
   { "\x09\x27\x80", 3, 1 },  /* BR3: Port x Reset bit y */
   { "\x09\x27\xc0", 4, 1 },  /* BR4: Port x Reset bit y */
   { "\x09\x28\x00", 5, 1 },  /* BR5: Port x Reset bit y */
   { "\x09\x28\x40", 6, 1 },  /* BR6: Port x Reset bit y */
   { "\x09\x28\x80", 7, 1 },  /* BR7: Port x Reset bit y */
   { "\x09\x28\xc0", 8, 1 },  /* BR8: Port x Reset bit y */
   { "\x09\x29\x00", 9, 1 },  /* BR9: Port x Reset bit y */
   { "\x09\x27\x1b", 10, 1 },  /* BR10: Port x Reset bit y */
   { "\x09\x27\x1c", 11, 1 },  /* BR11: Port x Reset bit y */
   { "\x09\x27\x1d", 12, 1 },  /* BR12: Port x Reset bit y */
   { "\x09\x27\x1e", 13, 1 },  /* BR13: Port x Reset bit y */
   { "\x09\x27\x1f", 14, 1 },  /* BR14: Port x Reset bit y */
   { "\x09\x27\x20", 15, 1 },  /* BR15: Port x Reset bit y */
};

const Register_t GPIOA_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOA_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOA_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOA_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed           register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOA_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down           register */
   {"\x24\x44\x80", 16, 32, 0, GPIOA_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOA_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOA_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset           register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOA_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock           register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOA_AFRL_fields, 8}, /* AFRL: GPIO alternate function low           register */
   {"\x04\x64\x88", 36, 32, 0, GPIOA_AFRH_fields, 8}, /* AFRH: GPIO alternate function high           register */
   {"\x09\x24\x80", 40, 32, 0, GPIOA_BRR_fields, 16}, /* BRR: Port bit reset register */
};

const Field_t GPIOB_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOB_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bit 0 */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bit 1 */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bit 2 */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bit 3 */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bit 4 */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bit 5 */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bit 6 */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bit 7 */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bit 8 */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bit 9 */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bit               10 */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bit               11 */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bit               12 */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bit               13 */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bit               14 */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bit               15 */
};

const Field_t GPIOB_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOB_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOB_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =               0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =               0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =               0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =               0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =               0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =               0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =               0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =               0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =               0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =               0..15) */
};

const Field_t GPIOB_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =               0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =               0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =               0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =               0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =               0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =               0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =               0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =               0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =               0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =               0..15) */
};

const Field_t GPIOB_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=               0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=               0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=               0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=               0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=               0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=               0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=               0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=               0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=               0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=               0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=               0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=               0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =               0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =               0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =               0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =               0..15) */
};

const Field_t GPIOB_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Lok Key */
};

const Field_t GPIOB_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x               bit y (y = 0..7) */
};

const Field_t GPIOB_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x               bit y (y = 8..15) */
};

const Field_t GPIOB_BRR_fields[] = {
   { "\x09\x26\xc0", 0, 1 },  /* BR0: Port x Reset bit y */
   { "\x09\x27\x00", 1, 1 },  /* BR1: Port x Reset bit y */
   { "\x09\x27\x40", 2, 1 },  /* BR2: Port x Reset bit y */
   { "\x09\x27\x80", 3, 1 },  /* BR3: Port x Reset bit y */
   { "\x09\x27\xc0", 4, 1 },  /* BR4: Port x Reset bit y */
   { "\x09\x28\x00", 5, 1 },  /* BR5: Port x Reset bit y */
   { "\x09\x28\x40", 6, 1 },  /* BR6: Port x Reset bit y */
   { "\x09\x28\x80", 7, 1 },  /* BR7: Port x Reset bit y */
   { "\x09\x28\xc0", 8, 1 },  /* BR8: Port x Reset bit y */
   { "\x09\x29\x00", 9, 1 },  /* BR9: Port x Reset bit y */
   { "\x09\x27\x1b", 10, 1 },  /* BR10: Port x Reset bit y */
   { "\x09\x27\x1c", 11, 1 },  /* BR11: Port x Reset bit y */
   { "\x09\x27\x1d", 12, 1 },  /* BR12: Port x Reset bit y */
   { "\x09\x27\x1e", 13, 1 },  /* BR13: Port x Reset bit y */
   { "\x09\x27\x1f", 14, 1 },  /* BR14: Port x Reset bit y */
   { "\x09\x27\x20", 15, 1 },  /* BR15: Port x Reset bit y */
};

const Register_t GPIOB_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOB_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOB_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOB_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed           register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOB_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down           register */
   {"\x24\x44\x80", 16, 32, 0, GPIOB_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOB_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOB_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset           register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOB_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock           register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOB_AFRL_fields, 8}, /* AFRL: GPIO alternate function low           register */
   {"\x04\x64\x88", 36, 32, 0, GPIOB_AFRH_fields, 8}, /* AFRH: GPIO alternate function high           register */
   {"\x09\x24\x80", 40, 32, 0, GPIOB_BRR_fields, 16}, /* BRR: Port bit reset register */
};

const Field_t ADC1_ISR_fields[] = {
   { "\x04\x44\x84\x64", 0, 1 },  /* ADRDY: ADRDY */
   { "\x14\xf4\xcd\x40", 1, 1 },  /* EOSMP: EOSMP */
   { "\x14\xf0\xc0", 2, 1 },  /* EOC: EOC */
   { "\x14\xf4\xc0", 3, 1 },  /* EOS: EOS */
   { "\x3d\x64\x80", 4, 1 },  /* OVR: OVR */
   { "\x28\x53\xc3", 5, 1 },  /* JEOC: JEOC */
   { "\x28\x53\xd3", 6, 1 },  /* JEOS: JEOS */
   { "\x05\x71\x1c", 7, 1 },  /* AWD1: AWD1 */
   { "\x05\x71\x1d", 8, 1 },  /* AWD2: AWD2 */
   { "\x05\x71\x1e", 9, 1 },  /* AWD3: AWD3 */
   { "\x29\x13\xd6\x18", 10, 1 },  /* JQOVF: JQOVF */
};

const Field_t ADC1_IER_fields[] = {
   { "\x04\x44\x84\x64\x91\x40", 0, 1 },  /* ADRDYIE: ADRDYIE */
   { "\x14\xf4\xcd\x40\x91\x40", 1, 1 },  /* EOSMPIE: EOSMPIE */
   { "\x14\xf0\xc9\x14", 2, 1 },  /* EOCIE: EOCIE */
   { "\x14\xf4\xc9\x14", 3, 1 },  /* EOSIE: EOSIE */
   { "\x3d\x64\x89\x14", 4, 1 },  /* OVRIE: OVRIE */
   { "\x28\x53\xc3\x24\x50", 5, 1 },  /* JEOCIE: JEOCIE */
   { "\x28\x53\xd3\x24\x50", 6, 1 },  /* JEOSIE: JEOSIE */
   { "\x05\x71\x1c\x24\x50", 7, 1 },  /* AWD1IE: AWD1IE */
   { "\x05\x71\x1d\x24\x50", 8, 1 },  /* AWD2IE: AWD2IE */
   { "\x05\x71\x1e\x24\x50", 9, 1 },  /* AWD3IE: AWD3IE */
   { "\x29\x13\xd6\x18\x91\x40", 10, 1 },  /* JQOVFIE: JQOVFIE */
};

const Field_t ADC1_CR_fields[] = {
   { "\x04\x41\x4e", 0, 1 },  /* ADEN: ADEN */
   { "\x04\x41\x09\x4c", 1, 1 },  /* ADDIS: ADDIS */
   { "\x04\x44\xd4\x05\x25\x00", 2, 1 },  /* ADSTART: ADSTART */
   { "\x28\x11\x13\x50\x14\x94", 3, 1 },  /* JADSTART: JADSTART */
   { "\x04\x44\xd4\x40", 4, 1 },  /* ADSTP: ADSTP */
   { "\x28\x11\x13\x51\x00", 5, 1 },  /* JADSTP: JADSTP */
   { "\x04\x45\x92\x14\x71\x4e", 28, 1 },  /* ADVREGEN: ADVREGEN */
   { "\x10\x51\x50\x41\x71\x00", 29, 1 },  /* DEEPPWD: DEEPPWD */
   { "\x04\x40\xc1\x30\x42\x46", 30, 1 },  /* ADCALDIF: ADCALDIF */
   { "\x04\x40\xc1\x30", 31, 1 },  /* ADCAL: ADCAL */
};

const Field_t ADC1_CFGR_fields[] = {
   { "\x10\xd0\x45\x38", 0, 1 },  /* DMAEN: DMAEN */
   { "\x10\xd0\x43\x18\x70", 1, 1 },  /* DMACFG: DMACFG */
   { "\x48\x54\xc0", 3, 2 },  /* RES: RES */
   { "\x04\xc2\x47\x38", 5, 1 },  /* ALIGN: ALIGN */
   { "\x15\x85\x13\x14\xc0", 6, 4 },  /* EXTSEL: EXTSEL */
   { "\x15\x85\x05\x38", 10, 2 },  /* EXTEN: EXTEN */
   { "\x3d\x64\x8d\x3c\x40", 12, 1 },  /* OVRMOD: OVRMOD */
   { "\x0c\xf3\x94", 13, 1 },  /* CONT: CONT */
   { "\x05\x55\x04\x31\x90", 14, 1 },  /* AUTDLY: AUTDLY */
   { "\x05\x55\x0f\x18\x60", 15, 1 },  /* AUTOFF: AUTOFF */
   { "\x10\x94\xc3\x14\xe0", 16, 1 },  /* DISCEN: DISCEN */
   { "\x10\x94\xc3\x39\x53\x40", 17, 3 },  /* DISCNUM: DISCNUM */
   { "\x28\x42\x53\x0c\x53\x80", 20, 1 },  /* JDISCEN: JDISCEN */
   { "\x29\x13\x40", 21, 1 },  /* JQM: JQM */
   { "\x05\x71\x1c\x4c\x73\x00", 22, 1 },  /* AWD1SGL: AWD1SGL */
   { "\x05\x71\x1c\x14\xe0", 23, 1 },  /* AWD1EN: AWD1EN */
   { "\x28\x15\xc4\x70\x53\x80", 24, 1 },  /* JAWD1EN: JAWD1EN */
   { "\x28\x15\x54\x3c", 25, 1 },  /* JAUTO: JAUTO */
   { "\x05\x71\x03\x21\xc0\xc8", 26, 5 },  /* AWDCH1CH: AWDCH1CH */
};

const Field_t ADC1_SMPR1_fields[] = {
   { "\x4c\xd4\x1c", 3, 3 },  /* SMP1: SMP1 */
   { "\x4c\xd4\x1d", 6, 3 },  /* SMP2: SMP2 */
   { "\x4c\xd4\x1e", 9, 3 },  /* SMP3: SMP3 */
   { "\x4c\xd4\x1f", 12, 3 },  /* SMP4: SMP4 */
   { "\x4c\xd4\x20", 15, 3 },  /* SMP5: SMP5 */
   { "\x4c\xd4\x21", 18, 3 },  /* SMP6: SMP6 */
   { "\x4c\xd4\x22", 21, 3 },  /* SMP7: SMP7 */
   { "\x4c\xd4\x23", 24, 3 },  /* SMP8: SMP8 */
   { "\x4c\xd4\x24", 27, 3 },  /* SMP9: SMP9 */
};

const Field_t ADC1_SMPR2_fields[] = {
   { "\x4c\xd4\x1c\x6c", 0, 3 },  /* SMP10: SMP10 */
   { "\x4c\xd4\x1c\x70", 3, 3 },  /* SMP11: SMP11 */
   { "\x4c\xd4\x1c\x74", 6, 3 },  /* SMP12: SMP12 */
   { "\x4c\xd4\x1c\x78", 9, 3 },  /* SMP13: SMP13 */
   { "\x4c\xd4\x1c\x7c", 12, 3 },  /* SMP14: SMP14 */
   { "\x4c\xd4\x1c\x80", 15, 3 },  /* SMP15: SMP15 */
   { "\x4c\xd4\x1c\x84", 18, 3 },  /* SMP16: SMP16 */
   { "\x4c\xd4\x1c\x88", 21, 3 },  /* SMP17: SMP17 */
   { "\x4c\xd4\x1c\x8c", 24, 3 },  /* SMP18: SMP18 */
};

const Field_t ADC1_TR1_fields[] = {
   { "\x31\x47\x00", 0, 12 },  /* LT1: LT1 */
   { "\x21\x47\x00", 16, 12 },  /* HT1: HT1 */
};

const Field_t ADC1_TR2_fields[] = {
   { "\x31\x47\x40", 0, 8 },  /* LT2: LT2 */
   { "\x21\x47\x40", 16, 8 },  /* HT2: HT2 */
};

const Field_t ADC1_TR3_fields[] = {
   { "\x31\x47\x80", 0, 8 },  /* LT3: LT3 */
   { "\x21\x47\x80", 16, 8 },  /* HT3: HT3 */
};

const Field_t ADC1_SQR1_fields[] = {
   { "\x31\xe0", 0, 4 },  /* L3: L3 */
   { "\x4d\x17\x00", 6, 5 },  /* SQ1: SQ1 */
   { "\x4d\x17\x40", 12, 5 },  /* SQ2: SQ2 */
   { "\x4d\x17\x80", 18, 5 },  /* SQ3: SQ3 */
   { "\x4d\x17\xc0", 24, 5 },  /* SQ4: SQ4 */
};

const Field_t ADC1_SQR2_fields[] = {
   { "\x4d\x18\x00", 0, 5 },  /* SQ5: SQ5 */
   { "\x4d\x18\x40", 6, 5 },  /* SQ6: SQ6 */
   { "\x4d\x18\x80", 12, 5 },  /* SQ7: SQ7 */
   { "\x4d\x18\xc0", 18, 5 },  /* SQ8: SQ8 */
   { "\x4d\x19\x00", 24, 5 },  /* SQ9: SQ9 */
};

const Field_t ADC1_SQR3_fields[] = {
   { "\x4d\x17\x1b", 0, 5 },  /* SQ10: SQ10 */
   { "\x4d\x17\x1c", 6, 5 },  /* SQ11: SQ11 */
   { "\x4d\x17\x1d", 12, 5 },  /* SQ12: SQ12 */
   { "\x4d\x17\x1e", 18, 5 },  /* SQ13: SQ13 */
   { "\x4d\x17\x1f", 24, 5 },  /* SQ14: SQ14 */
};

const Field_t ADC1_SQR4_fields[] = {
   { "\x4d\x17\x20", 0, 5 },  /* SQ15: SQ15 */
   { "\x4d\x17\x21", 6, 5 },  /* SQ16: SQ16 */
};

const Field_t ADC1_DR_fields[] = {
   { "\x48\x51\xd5\x30\x14\x84\x05\x40\x40", 0, 16 },  /* regularDATA: regularDATA */
};

const Field_t ADC1_JSQR_fields[] = {
   { "\x28\xc0", 0, 2 },  /* JL: JL */
   { "\x28\x56\x14\x4c\x53\x00", 2, 4 },  /* JEXTSEL: JEXTSEL */
   { "\x28\x56\x14\x14\xe0", 6, 2 },  /* JEXTEN: JEXTEN */
   { "\x29\x34\x5c", 8, 5 },  /* JSQ1: JSQ1 */
   { "\x29\x34\x5d", 14, 5 },  /* JSQ2: JSQ2 */
   { "\x29\x34\x5e", 20, 5 },  /* JSQ3: JSQ3 */
   { "\x29\x34\x5f", 26, 5 },  /* JSQ4: JSQ4 */
};

const Field_t ADC1_OFR1_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC1_OFR2_fields[] = {
   { "\x3c\x61\x93\x15\x47\x40", 0, 12 },  /* OFFSET2: OFFSET2 */
   { "\x3c\x61\x93\x15\x47\x65\x0c\x80", 26, 5 },  /* OFFSET2_CH: OFFSET2_CH */
   { "\x3c\x61\x93\x15\x47\x65\x14\xe0", 31, 1 },  /* OFFSET2_EN: OFFSET2_EN */
};

const Field_t ADC1_OFR3_fields[] = {
   { "\x3c\x61\x93\x15\x47\x80", 0, 12 },  /* OFFSET3: OFFSET3 */
   { "\x3c\x61\x93\x15\x47\xa5\x0c\x80", 26, 5 },  /* OFFSET3_CH: OFFSET3_CH */
   { "\x3c\x61\x93\x15\x47\xa5\x14\xe0", 31, 1 },  /* OFFSET3_EN: OFFSET3_EN */
};

const Field_t ADC1_OFR4_fields[] = {
   { "\x3c\x61\x93\x15\x47\xc0", 0, 12 },  /* OFFSET4: OFFSET4 */
   { "\x3c\x61\x93\x15\x47\xe5\x0c\x80", 26, 5 },  /* OFFSET4_CH: OFFSET4_CH */
   { "\x3c\x61\x93\x15\x47\xe5\x14\xe0", 31, 1 },  /* OFFSET4_EN: OFFSET4_EN */
};

const Field_t ADC1_JDR1_fields[] = {
   { "\x28\x40\x54\x05\xc0", 0, 16 },  /* JDATA1: JDATA1 */
};

const Field_t ADC1_JDR2_fields[] = {
   { "\x28\x40\x54\x05\xd0", 0, 16 },  /* JDATA2: JDATA2 */
};

const Field_t ADC1_JDR3_fields[] = {
   { "\x28\x40\x54\x05\xe0", 0, 16 },  /* JDATA3: JDATA3 */
};

const Field_t ADC1_JDR4_fields[] = {
   { "\x28\x40\x54\x05\xf0", 0, 16 },  /* JDATA4: JDATA4 */
};

const Field_t ADC1_AWD2CR_fields[] = {
   { "\x05\x71\x1d\x0c\x80", 1, 18 },  /* AWD2CH: AWD2CH */
};

const Field_t ADC1_AWD3CR_fields[] = {
   { "\x05\x71\x1e\x0c\x80", 1, 18 },  /* AWD3CH: AWD3CH */
};

const Field_t ADC1_DIFSEL_fields[] = {
   { "\x10\x91\x93\x14\xc9\x5c\x95\xc8\x00", 1, 15 },  /* DIFSEL_1_15: Differential mode for channels 15 to               1 */
   { "\x10\x91\x93\x14\xc9\x5c\x86\x57\x23", 16, 3 },  /* DIFSEL_16_18: Differential mode for channels 18 to               16 */
};

const Field_t ADC1_CALFACT_fields[] = {
   { "\x0c\x13\x06\x04\x35\x25\x4c", 0, 7 },  /* CALFACT_S: CALFACT_S */
   { "\x0c\x13\x06\x04\x35\x25\x10", 16, 7 },  /* CALFACT_D: CALFACT_D */
};

const Register_t ADC1_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, ADC1_ISR_fields, 11}, /* ISR: interrupt and status register */
   {"\x24\x54\x80", 4, 32, 0, ADC1_IER_fields, 11}, /* IER: interrupt enable register */
   {"\x0d\x20", 8, 32, 0, ADC1_CR_fields, 10}, /* CR: control register */
   {"\x0c\x61\xd2", 12, 32, 0, ADC1_CFGR_fields, 19}, /* CFGR: configuration register */
   {"\x4c\xd4\x12\x70", 20, 32, 0, ADC1_SMPR1_fields, 9}, /* SMPR1: sample time register 1 */
   {"\x4c\xd4\x12\x74", 24, 32, 0, ADC1_SMPR2_fields, 9}, /* SMPR2: sample time register 2 */
   {"\x51\x27\x00", 32, 32, 0, ADC1_TR1_fields, 2}, /* TR1: watchdog threshold register 1 */
   {"\x51\x27\x40", 36, 32, 0, ADC1_TR2_fields, 2}, /* TR2: watchdog threshold register */
   {"\x51\x27\x80", 40, 32, 0, ADC1_TR3_fields, 2}, /* TR3: watchdog threshold register 3 */
   {"\x4d\x14\x9c", 48, 32, 0, ADC1_SQR1_fields, 5}, /* SQR1: regular sequence register 1 */
   {"\x4d\x14\x9d", 52, 32, 0, ADC1_SQR2_fields, 5}, /* SQR2: regular sequence register 2 */
   {"\x4d\x14\x9e", 56, 32, 0, ADC1_SQR3_fields, 5}, /* SQR3: regular sequence register 3 */
   {"\x4d\x14\x9f", 60, 32, 0, ADC1_SQR4_fields, 2}, /* SQR4: regular sequence register 4 */
   {"\x11\x20", 64, 32, 0, ADC1_DR_fields, 1}, /* DR: regular Data Register */
   {"\x29\x34\x52", 76, 32, 0, ADC1_JSQR_fields, 7}, /* JSQR: injected sequence register */
   {"\x3c\x64\x9c", 96, 32, 0, ADC1_OFR1_fields, 3}, /* OFR1: offset register 1 */
   {"\x3c\x64\x9d", 100, 32, 0, ADC1_OFR2_fields, 3}, /* OFR2: offset register 2 */
   {"\x3c\x64\x9e", 104, 32, 0, ADC1_OFR3_fields, 3}, /* OFR3: offset register 3 */
   {"\x3c\x64\x9f", 108, 32, 0, ADC1_OFR4_fields, 3}, /* OFR4: offset register 4 */
   {"\x28\x44\x9c", 128, 32, 0, ADC1_JDR1_fields, 1}, /* JDR1: injected data register 1 */
   {"\x28\x44\x9d", 132, 32, 0, ADC1_JDR2_fields, 1}, /* JDR2: injected data register 2 */
   {"\x28\x44\x9e", 136, 32, 0, ADC1_JDR3_fields, 1}, /* JDR3: injected data register 3 */
   {"\x28\x44\x9f", 140, 32, 0, ADC1_JDR4_fields, 1}, /* JDR4: injected data register 4 */
   {"\x05\x71\x1d\x0d\x20", 160, 32, 0, ADC1_AWD2CR_fields, 1}, /* AWD2CR: Analog Watchdog 2 Configuration           Register */
   {"\x05\x71\x1e\x0d\x20", 164, 32, 0, ADC1_AWD3CR_fields, 1}, /* AWD3CR: Analog Watchdog 3 Configuration           Register */
   {"\x10\x91\x93\x14\xc0", 176, 32, 0, ADC1_DIFSEL_fields, 2}, /* DIFSEL: Differential Mode Selection Register           2 */
   {"\x0c\x13\x06\x04\x35\x00", 180, 32, 0, ADC1_CALFACT_fields, 2}, /* CALFACT: Calibration Factors */
};

const Field_t ADC1_2_CSR_fields[] = {
   { "\x04\x41\x12\x11\x99\x4d\x4d\x40", 0, 1 },  /* ADDRDY_MST: ADDRDY_MST */
   { "\x14\xf4\xcd\x42\x53\x53\x50", 1, 1 },  /* EOSMP_MST: EOSMP_MST */
   { "\x14\xf0\xe5\x35\x35\x00", 2, 1 },  /* EOC_MST: EOC_MST */
   { "\x14\xf4\xe5\x35\x35\x00", 3, 1 },  /* EOS_MST: EOS_MST */
   { "\x3d\x64\xa5\x35\x35\x00", 4, 1 },  /* OVR_MST: OVR_MST */
   { "\x28\x53\xc3\x94\xd4\xd4", 5, 1 },  /* JEOC_MST: JEOC_MST */
   { "\x28\x53\xd3\x94\xd4\xd4", 6, 1 },  /* JEOS_MST: JEOS_MST */
   { "\x05\x71\x1c\x94\xd4\xd4", 7, 1 },  /* AWD1_MST: AWD1_MST */
   { "\x05\x71\x1d\x94\xd4\xd4", 8, 1 },  /* AWD2_MST: AWD2_MST */
   { "\x05\x71\x1e\x94\xd4\xd4", 9, 1 },  /* AWD3_MST: AWD3_MST */
   { "\x29\x13\xd6\x1a\x53\x53\x50", 10, 1 },  /* JQOVF_MST: JQOVF_MST */
   { "\x04\x44\x84\x66\x54\xcc\x58", 16, 1 },  /* ADRDY_SLV: ADRDY_SLV */
   { "\x14\xf4\xcd\x42\x54\xcc\x58", 17, 1 },  /* EOSMP_SLV: EOSMP_SLV */
   { "\x14\xf0\xe5\x4c\xc5\x80", 18, 1 },  /* EOC_SLV: End of regular conversion of the slave               ADC */
   { "\x14\xf4\xe5\x4c\xc5\x80", 19, 1 },  /* EOS_SLV: End of regular sequence flag of the               slave ADC */
   { "\x3d\x64\xa5\x4c\xc5\x80", 20, 1 },  /* OVR_SLV: Overrun flag of the slave               ADC */
   { "\x28\x53\xc3\x95\x33\x16", 21, 1 },  /* JEOC_SLV: End of injected conversion flag of the               slave ADC */
   { "\x28\x53\xd3\x95\x33\x16", 22, 1 },  /* JEOS_SLV: End of injected sequence flag of the               slave ADC */
   { "\x05\x71\x1c\x95\x33\x16", 23, 1 },  /* AWD1_SLV: Analog watchdog 1 flag of the slave               ADC */
   { "\x05\x71\x1d\x95\x33\x16", 24, 1 },  /* AWD2_SLV: Analog watchdog 2 flag of the slave               ADC */
   { "\x05\x71\x1e\x95\x33\x16", 25, 1 },  /* AWD3_SLV: Analog watchdog 3 flag of the slave               ADC */
   { "\x29\x13\xd6\x1a\x54\xcc\x58", 26, 1 },  /* JQOVF_SLV: Injected Context Queue Overflow flag of               the slave ADC */
};

const Field_t ADC1_2_CCR_fields[] = {
   { "\x35\x53\x14", 0, 5 },  /* MULT: Multi ADC mode selection */
   { "\x10\x53\x01\x64", 8, 4 },  /* DELAY: Delay between 2 sampling               phases */
   { "\x10\xd0\x43\x18\x70", 13, 1 },  /* DMACFG: DMA configuration (for multi-ADC               mode) */
   { "\x34\x43\x41", 14, 2 },  /* MDMA: Direct memory access mode for multi ADC               mode */
   { "\x0c\xb3\x4f\x10\x50", 16, 2 },  /* CKMODE: ADC clock mode */
   { "\x59\x21\x46\x14\xe0", 22, 1 },  /* VREFEN: VREFINT enable */
   { "\x51\x31\x4e", 23, 1 },  /* TSEN: Temperature sensor enable */
   { "\x58\x20\x54\x14\xe0", 24, 1 },  /* VBATEN: VBAT enable */
};

const Field_t ADC1_2_CDR_fields[] = {
   { "\x48\x40\x54\x06\x53\x53\x50", 0, 16 },  /* RDATA_MST: Regular data of the master               ADC */
   { "\x48\x40\x54\x06\x54\xcc\x58", 16, 16 },  /* RDATA_SLV: Regular data of the slave               ADC */
};

const Register_t ADC1_2_registers[] = {
   {"\x0d\x34\x80", 0, 32, 0, ADC1_2_CSR_fields, 22}, /* CSR: ADC Common status register */
   {"\x0c\x34\x80", 8, 32, 0, ADC1_2_CCR_fields, 8}, /* CCR: ADC common control register */
   {"\x0c\x44\x80", 12, 32, 0, ADC1_2_CDR_fields, 2}, /* CDR: ADC common regular data register for dual           and triple modes */
};

const Field_t NVIC_ICTR_fields[] = {
   { "\x24\xe5\x0c\x24\xe1\x53\x39\x53\x40", 0, 4 },  /* INTLINESNUM: Total number of interrupt lines in               groups */
};

const Field_t NVIC_ISER0_fields[] = {
   { "\x4c\x55\x05\x38\x10", 0, 32 },  /* SETENA: SETENA */
};

const Field_t NVIC_ISER1_fields[] = {
   { "\x4c\x55\x05\x38\x10", 0, 32 },  /* SETENA: SETENA */
};

const Field_t NVIC_ISER2_fields[] = {
   { "\x4c\x55\x05\x38\x10", 0, 32 },  /* SETENA: SETENA */
};

const Field_t NVIC_ICER0_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ICER1_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ICER2_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ISPR0_fields[] = {
   { "\x4c\x55\x10\x14\xe1\x00", 0, 32 },  /* SETPEND: SETPEND */
};

const Field_t NVIC_ISPR1_fields[] = {
   { "\x4c\x55\x10\x14\xe1\x00", 0, 32 },  /* SETPEND: SETPEND */
};

const Field_t NVIC_ISPR2_fields[] = {
   { "\x4c\x55\x10\x14\xe1\x00", 0, 32 },  /* SETPEND: SETPEND */
};

const Field_t NVIC_ICPR0_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_ICPR1_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_ICPR2_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_IABR0_fields[] = {
   { "\x04\x35\x09\x58\x50", 0, 32 },  /* ACTIVE: ACTIVE */
};

const Field_t NVIC_IABR1_fields[] = {
   { "\x04\x35\x09\x58\x50", 0, 32 },  /* ACTIVE: ACTIVE */
};

const Field_t NVIC_IABR2_fields[] = {
   { "\x04\x35\x09\x58\x50", 0, 32 },  /* ACTIVE: ACTIVE */
};

const Field_t NVIC_IPR0_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR1_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR2_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR3_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR4_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR5_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR6_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR7_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR8_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR9_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR10_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR11_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR12_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR13_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR14_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR15_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR16_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR17_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR18_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR19_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR20_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_STIR_fields[] = {
   { "\x24\xe5\x09\x10", 0, 9 },  /* INTID: interrupt to be triggered */
};

const Register_t NVIC_registers[] = {
   {"\x24\x35\x12", 4, 32, 0, NVIC_ICTR_fields, 1}, /* ICTR: Interrupt Controller Type           Register */
   {"\x25\x31\x52\x6c", 256, 32, 0, NVIC_ISER0_fields, 1}, /* ISER0: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x70", 260, 32, 0, NVIC_ISER1_fields, 1}, /* ISER1: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x74", 264, 32, 0, NVIC_ISER2_fields, 1}, /* ISER2: Interrupt Set-Enable Register */
   {"\x24\x31\x52\x6c", 384, 32, 0, NVIC_ICER0_fields, 1}, /* ICER0: Interrupt Clear-Enable           Register */
   {"\x24\x31\x52\x70", 388, 32, 0, NVIC_ICER1_fields, 1}, /* ICER1: Interrupt Clear-Enable           Register */
   {"\x24\x31\x52\x74", 392, 32, 0, NVIC_ICER2_fields, 1}, /* ICER2: Interrupt Clear-Enable           Register */
   {"\x25\x34\x12\x6c", 512, 32, 0, NVIC_ISPR0_fields, 1}, /* ISPR0: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x70", 516, 32, 0, NVIC_ISPR1_fields, 1}, /* ISPR1: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x74", 520, 32, 0, NVIC_ISPR2_fields, 1}, /* ISPR2: Interrupt Set-Pending Register */
   {"\x24\x34\x12\x6c", 640, 32, 0, NVIC_ICPR0_fields, 1}, /* ICPR0: Interrupt Clear-Pending           Register */
   {"\x24\x34\x12\x70", 644, 32, 0, NVIC_ICPR1_fields, 1}, /* ICPR1: Interrupt Clear-Pending           Register */
   {"\x24\x34\x12\x74", 648, 32, 0, NVIC_ICPR2_fields, 1}, /* ICPR2: Interrupt Clear-Pending           Register */
   {"\x24\x10\x92\x6c", 768, 32, 0, NVIC_IABR0_fields, 1}, /* IABR0: Interrupt Active Bit Register */
   {"\x24\x10\x92\x70", 772, 32, 0, NVIC_IABR1_fields, 1}, /* IABR1: Interrupt Active Bit Register */
   {"\x24\x10\x92\x74", 776, 32, 0, NVIC_IABR2_fields, 1}, /* IABR2: Interrupt Active Bit Register */
   {"\x25\x04\x9b", 1024, 32, 0, NVIC_IPR0_fields, 4}, /* IPR0: Interrupt Priority Register */
   {"\x25\x04\x9c", 1028, 32, 0, NVIC_IPR1_fields, 4}, /* IPR1: Interrupt Priority Register */
   {"\x25\x04\x9d", 1032, 32, 0, NVIC_IPR2_fields, 4}, /* IPR2: Interrupt Priority Register */
   {"\x25\x04\x9e", 1036, 32, 0, NVIC_IPR3_fields, 4}, /* IPR3: Interrupt Priority Register */
   {"\x25\x04\x9f", 1040, 32, 0, NVIC_IPR4_fields, 4}, /* IPR4: Interrupt Priority Register */
   {"\x25\x04\xa0", 1044, 32, 0, NVIC_IPR5_fields, 4}, /* IPR5: Interrupt Priority Register */
   {"\x25\x04\xa1", 1048, 32, 0, NVIC_IPR6_fields, 4}, /* IPR6: Interrupt Priority Register */
   {"\x25\x04\xa2", 1052, 32, 0, NVIC_IPR7_fields, 4}, /* IPR7: Interrupt Priority Register */
   {"\x25\x04\xa3", 1056, 32, 0, NVIC_IPR8_fields, 4}, /* IPR8: Interrupt Priority Register */
   {"\x25\x04\xa4", 1060, 32, 0, NVIC_IPR9_fields, 4}, /* IPR9: Interrupt Priority Register */
   {"\x25\x04\x9c\x6c", 1064, 32, 0, NVIC_IPR10_fields, 4}, /* IPR10: Interrupt Priority Register */
   {"\x25\x04\x9c\x70", 1068, 32, 0, NVIC_IPR11_fields, 4}, /* IPR11: Interrupt Priority Register */
   {"\x25\x04\x9c\x74", 1072, 32, 0, NVIC_IPR12_fields, 4}, /* IPR12: Interrupt Priority Register */
   {"\x25\x04\x9c\x78", 1076, 32, 0, NVIC_IPR13_fields, 4}, /* IPR13: Interrupt Priority Register */
   {"\x25\x04\x9c\x7c", 1080, 32, 0, NVIC_IPR14_fields, 4}, /* IPR14: Interrupt Priority Register */
   {"\x25\x04\x9c\x80", 1084, 32, 0, NVIC_IPR15_fields, 4}, /* IPR15: Interrupt Priority Register */
   {"\x25\x04\x9c\x84", 1088, 32, 0, NVIC_IPR16_fields, 4}, /* IPR16: Interrupt Priority Register */
   {"\x25\x04\x9c\x88", 1092, 32, 0, NVIC_IPR17_fields, 4}, /* IPR17: Interrupt Priority Register */
   {"\x25\x04\x9c\x8c", 1096, 32, 0, NVIC_IPR18_fields, 4}, /* IPR18: Interrupt Priority Register */
   {"\x25\x04\x9c\x90", 1100, 32, 0, NVIC_IPR19_fields, 4}, /* IPR19: Interrupt Priority Register */
   {"\x25\x04\x9d\x6c", 1104, 32, 0, NVIC_IPR20_fields, 4}, /* IPR20: Interrupt Priority Register */
   {"\x4d\x42\x52", 3840, 32, 0, NVIC_STIR_fields, 1}, /* STIR: Software Triggered Interrupt           Register */
};

const Field_t FPU_CPACR_fields[] = {
   { "\x0d\x06\xc0", 0, 1 },  /* CP0: Access privileges for coprocessor               0 */
   { "\x0d\x07\x00", 2, 1 },  /* CP1: Access privileges for coprocessor               1 */
   { "\x0d\x07\x40", 4, 1 },  /* CP2: Access privileges for coprocessor               2 */
   { "\x0d\x07\x80", 6, 1 },  /* CP3: Access privileges for coprocessor               3 */
   { "\x0d\x07\xc0", 8, 1 },  /* CP4: Access privileges for coprocessor               4 */
   { "\x0d\x08\x00", 10, 1 },  /* CP5: Access privileges for coprocessor               5 */
   { "\x0d\x08\x40", 12, 2 },  /* CP6: Access privileges for coprocessor               6 */
   { "\x0d\x08\x80", 14, 1 },  /* CP7: Access privileges for coprocessor               7 */
   { "\x0d\x07\x1b", 20, 1 },  /* CP10: Access privileges for coprocessor               10 */
   { "\x0d\x07\x1c", 22, 1 },  /* CP11: Access privileges for coprocessor               11 */
};

const Field_t FPU_FPCCR_fields[] = {
   { "\x31\x34\x01\x0d\x40", 0, 1 },  /* LSPACT: LSPACT */
   { "\x55\x31\x52", 1, 1 },  /* USER: USER */
   { "\x50\x84\x85\x04\x40", 3, 1 },  /* THREAD: THREAD */
   { "\x20\x64\x84\x64", 4, 1 },  /* HFRDY: HFRDY */
   { "\x34\xd4\x84\x64", 5, 1 },  /* MMRDY: MMRDY */
   { "\x08\x64\x84\x64", 6, 1 },  /* BFRDY: BFRDY */
   { "\x34\xf3\x92\x11\x90", 8, 1 },  /* MONRDY: MONRDY */
   { "\x31\x34\x05\x38", 30, 1 },  /* LSPEN: LSPEN */
   { "\x05\x34\x05\x38", 31, 1 },  /* ASPEN: ASPEN */
};

const Field_t FPU_FPCAR_fields[] = {
   { "\x04\x41\x12\x15\x34\xc0", 3, 29 },  /* ADDRESS: ADDRESS */
};

const Field_t FPU_FPDSCR_fields[] = {
   { "\x48\xd3\xc4\x14", 22, 2 },  /* RMode: RMode */
   { "\x19\xa0", 24, 1 },  /* FZ: FZ */
   { "\x10\xe0", 25, 1 },  /* DN: DN */
   { "\x04\x84\x00", 26, 1 },  /* AHP: AHP */
};

const Field_t FPU_MVFR0_fields[] = {
   { "\x06\x54\xc9\x34\x40", 0, 4 },  /* A_SIMD: A_SIMD registers */
   { "\x4c\x93\x87\x30\x59\x50\x48\x50\xc9\x4c\x93\xce", 4, 4 },  /* Single_precision: Single_precision */
   { "\x10\xf5\x42\x30\x59\x50\x48\x50\xc9\x4c\x93\xce", 8, 4 },  /* Double_precision: Double_precision */
   { "\x19\x09\x45\x60\x31\x50\x50\x93\xce\x95\x44\x81\x41\x02\x4e\x1c", 12, 4 },  /* FP_exception_trapping: FP exception trapping */
   { "\x10\x95\x89\x10\x50", 16, 4 },  /* Divide: Divide */
   { "\x4d\x15\x41\x48\x59\x52\x3c\xf5\x00", 20, 4 },  /* Square_root: Square root */
   { "\x4c\x83\xd2\x52\x55\x85\x0d\x43\xd2\x4c", 24, 4 },  /* Short_vectors: Short vectors */
   { "\x19\x09\x52\x3d\x53\x84\x24\xe1\xe5\x34\xf1\x05\x4c", 28, 4 },  /* FP_rounding_modes: FP rounding modes */
};

const Field_t FPU_MVFR1_fields[] = {
   { "\x19\x46\xa5\x34\xf1\x05", 0, 4 },  /* FtZ_mode: FtZ mode */
   { "\x12\x53\x81\x3a\x53\x4f\x10\x50", 4, 4 },  /* D_NaN_mode: D_NaN mode */
   { "\x19\x09\x48\x40\x64\x00", 24, 4 },  /* FP_HPFP: FP HPFP */
   { "\x19\x09\x46\x55\x31\x44\x94\xd0\x43", 28, 4 },  /* FP_fused_MAC: FP fused MAC */
};

const Register_t FPU_registers[] = {
   {"\x0d\x00\x43\x48", 0, 32, 0, FPU_CPACR_fields, 10}, /* CPACR: Coprocessor Access Control           Register */
   {"\x19\x00\xc3\x48", 428, 32, 0, FPU_FPCCR_fields, 9}, /* FPCCR: FP Context Control Register */
   {"\x19\x00\xc1\x48", 432, 32, 0, FPU_FPCAR_fields, 1}, /* FPCAR: FP Context Address Register */
   {"\x19\x01\x13\x0d\x20", 436, 32, 0, FPU_FPDSCR_fields, 4}, /* FPDSCR: FP Default Status Control           Register */
   {"\x35\x61\x92\x6c", 440, 32, 0, FPU_MVFR0_fields, 8}, /* MVFR0: Media and VFP Feature Register           0 */
   {"\x35\x61\x92\x70", 444, 32, 0, FPU_MVFR1_fields, 4}, /* MVFR1: Media and VFP Feature Register           1 */
};

const Field_t DBGMCU_IDCODE_fields[] = {
   { "\x10\x55\xa5\x24\x40", 0, 12 },  /* DEV_ID: Device Identifier */
   { "\x48\x55\xa5\x24\x40", 16, 16 },  /* REV_ID: Revision Identifier */
};

const Field_t DBGMCU_CR_fields[] = {
   { "\x10\x21\xe5\x4c\xc1\x45\x40", 0, 1 },  /* DBG_SLEEP: Debug Sleep mode */
   { "\x10\x21\xe5\x4d\x43\xd0", 1, 1 },  /* DBG_STOP: Debug Stop Mode */
   { "\x10\x21\xe5\x4d\x40\x4e\x10\x26\x40", 2, 1 },  /* DBG_STANDBY: Debug Standby Mode */
   { "\x51\x20\x43\x16\x52\x4f\x14\xe0", 5, 1 },  /* TRACE_IOEN: Trace pin assignment               control */
   { "\x51\x20\x43\x16\x53\x4f\x10\x50", 6, 2 },  /* TRACE_MODE: Trace pin assignment               control */
};

const Field_t DBGMCU_APB1FZ_fields[] = {
   { "\x10\x21\xe5\x50\x93\x5d\x95\x35\x0f\x40", 0, 1 },  /* DBG_TIM2_STOP: Debug Timer 2 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5e\x95\x35\x0f\x40", 1, 1 },  /* DBG_TIM3_STOP: Debug Timer 3 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5f\x95\x35\x0f\x40", 2, 1 },  /* DBG_TIM4_STOP: Debug Timer 4 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x60\x95\x35\x0f\x40", 3, 1 },  /* DBG_TIM5_STOP: Debug Timer 5 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x61\x95\x35\x0f\x40", 4, 1 },  /* DBG_TIM6_STOP: Debug Timer 6 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x62\x95\x35\x0f\x40", 5, 1 },  /* DBG_TIM7_STOP: Debug Timer 7 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x76\x54\xd4\x3d\x00", 6, 1 },  /* DBG_TIM12_STOP: Debug Timer 12 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x7a\x54\xd4\x3d\x00", 7, 1 },  /* DBG_TIM13_STOP: Debug Timer 13 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x45\x49\xc7\xe5\x4d\x43\xd0", 8, 1 },  /* DBG_TIMER14_STOP: Debug Timer 14 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x8e\x54\xd4\x3d\x00", 9, 1 },  /* DBG_TIM18_STOP: Debug Timer 18 stopped when Core is               halted */
   { "\x10\x21\xe5\x49\x40\xe5\x4d\x43\xd0", 10, 1 },  /* DBG_RTC_STOP: Debug RTC stopped when Core is               halted */
   { "\x10\x21\xe5\x5d\x71\x07\x95\x35\x0f\x40", 11, 1 },  /* DBG_WWDG_STOP: Debug Window Wachdog stopped when Core               is halted */
   { "\x10\x21\xe5\x25\x71\x07\x95\x35\x0f\x40", 12, 1 },  /* DBG_IWDG_STOP: Debug Independent Wachdog stopped when               Core is halted */
   { "\x25\xd0\xdc\x95\x33\x42\x55\x39\x54\x24\xd1\x4f\x55\x40", 21, 1 },  /* I2C1_SMBUS_TIMEOUT: SMBUS timeout mode stopped when Core is               halted */
   { "\x25\xd0\xdd\x95\x33\x42\x55\x39\x54\x24\xd1\x4f\x55\x40", 22, 1 },  /* I2C2_SMBUS_TIMEOUT: SMBUS timeout mode stopped when Core is               halted */
   { "\x10\x21\xe5\x0c\x13\xa5\x4d\x43\xd0", 25, 1 },  /* DBG_CAN_STOP: Debug CAN stopped when core is               halted */
};

const Field_t DBGMCU_APB2FZ_fields[] = {
   { "\x10\x21\xe5\x50\x93\x5c\x82\x54\xd4\x3d\x00", 2, 1 },  /* DBG_TIM15_STOP: Debug Timer 15 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x86\x54\xd4\x3d\x00", 3, 1 },  /* DBG_TIM16_STOP: Debug Timer 16 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x8a\x54\xd4\x3c", 4, 1 },  /* DBG_TIM17_STO: Debug Timer 17 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x92\x54\xd4\x3d\x00", 5, 1 },  /* DBG_TIM19_STOP: Debug Timer 19 stopped when Core is               halted */
};

const Register_t DBGMCU_registers[] = {
   {"\x24\x40\xcf\x10\x50", 0, 32, 0, DBGMCU_IDCODE_fields, 2}, /* IDCODE: MCU Device ID Code Register */
   {"\x0d\x20", 4, 32, 0, DBGMCU_CR_fields, 5}, /* CR: Debug MCU Configuration           Register */
   {"\x05\x00\x9c\x19\xa0", 8, 32, 0, DBGMCU_APB1FZ_fields, 16}, /* APB1FZ: APB Low Freeze Register */
   {"\x05\x00\x9d\x19\xa0", 12, 32, 0, DBGMCU_APB2FZ_fields, 4}, /* APB2FZ: APB High Freeze Register */
};

const Peripheral_t Peripherals[] = {
   {"\x50\x93\x5d", 0x40000000, TIM2_registers, 20 }, /* TIM2: General purpose timer */
   {"\x50\x93\x5e", 0x40000400, TIM2_registers, 20 }, /* TIM3:  */
   {"\x50\x93\x5f", 0x40000800, TIM2_registers, 20 }, /* TIM4:  */
   {"\x50\x93\x61", 0x40001000, TIM6_registers, 8 }, /* TIM6: Basic timers */
   {"\x50\x93\x62", 0x40001400, TIM6_registers, 8 }, /* TIM7:  */
   {"\x49\x40\xc0", 0x40002800, RTC_registers, 50 }, /* RTC: Real-time clock */
   {"\x5d\x71\x07", 0x40002c00, WWDG_registers, 3 }, /* WWDG: Window watchdog */
   {"\x25\x71\x07", 0x40003000, IWDG_registers, 5 }, /* IWDG: Independent watchdog */
   {"\x25\xd4\xdd\x15\x85\x00", 0x40003400, SPI1_registers, 9 }, /* I2S2ext:  */
   {"\x4d\x02\x5d", 0x40003800, SPI1_registers, 9 }, /* SPI2:  */
   {"\x4d\x02\x5e", 0x40003c00, SPI1_registers, 9 }, /* SPI3:  */
   {"\x25\xd4\xde\x15\x85\x00", 0x40004000, SPI1_registers, 9 }, /* I2S3ext:  */
   {"\x55\x30\x52\x51\xd0", 0x40004400, USART1_registers, 11 }, /* USART2:  */
   {"\x55\x30\x52\x51\xe0", 0x40004800, USART1_registers, 11 }, /* USART3:  */
   {"\x54\x14\x94\x7c", 0x40004c00, USART1_registers, 11 }, /* UART4:  */
   {"\x54\x14\x94\x80", 0x40005000, USART1_registers, 11 }, /* UART5:  */
   {"\x25\xd0\xdc", 0x40005400, I2C1_registers, 11 }, /* I2C1: Inter-integrated circuit */
   {"\x25\xd0\xdd", 0x40005800, I2C1_registers, 11 }, /* I2C2:  */
   {"\x55\x30\xa5\x19\x30", 0x40005c00, USB_FS_registers, 13 }, /* USB_FS: Universal serial bus full-speed device       interface */
   {"\x0c\x13\x80", 0x40006400, CAN_registers, 89 }, /* CAN: Controller area network */
   {"\x41\x74\x80", 0x40007000, PWR_registers, 2 }, /* PWR: Power control */
   {"\x10\x10\xc0", 0x40007400, DAC_registers, 14 }, /* DAC: Digital-to-analog converter */
   {"\x25\xd0\xde", 0x40007800, I2C1_registers, 11 }, /* I2C3:  */
   {"\x4d\x94\xc3\x18\x70", 0x40010000, SYSCFG_registers, 7 }, /* SYSCFG: System configuration controller */
   {"\x0c\xf3\x50", 0x4001001c, COMP_registers, 7 }, /* COMP: Comparator */
   {"\x3d\x00\x4d\x40", 0x40010038, OPAMP_registers, 4 }, /* OPAMP: Operational amplifier */
   {"\x15\x85\x09", 0x40010400, EXTI_registers, 12 }, /* EXTI: External interrupt/event       controller */
   {"\x50\x93\x5c", 0x40012c00, TIM1_registers, 26 }, /* TIM1: Advanced timer */
   {"\x4d\x02\x5c", 0x40013000, SPI1_registers, 9 }, /* SPI1: Serial peripheral interface/Inter-IC       sound */
   {"\x50\x93\x63", 0x40013400, TIM8_registers, 26 }, /* TIM8: Advanced-timers */
   {"\x55\x30\x52\x51\xc0", 0x40013800, USART1_registers, 11 }, /* USART1: Universal synchronous asynchronous receiver       transmitter */
   {"\x4d\x02\x5f", 0x40013c00, SPI1_registers, 9 }, /* SPI4:  */
   {"\x50\x93\x5c\x80", 0x40014000, TIM15_registers, 18 }, /* TIM15: General purpose timers */
   {"\x50\x93\x5c\x84", 0x40014400, TIM16_registers, 17 }, /* TIM16: General-purpose-timers */
   {"\x50\x93\x5c\x88", 0x40014800, TIM17_registers, 16 }, /* TIM17: General purpose timer */
   {"\x50\x93\x5d\x6c", 0x40015000, TIM1_registers, 26 }, /* TIM20:  */
   {"\x10\xd0\x5c", 0x40020000, DMA1_registers, 30 }, /* DMA1: DMA controller 1 */
   {"\x10\xd0\x5d", 0x40020400, DMA1_registers, 30 }, /* DMA2:  */
   {"\x48\x30\xc0", 0x40021000, RCC_registers, 13 }, /* RCC: Reset and clock control */
   {"\x18\xc0\x53\x20", 0x40022000, Flash_registers, 8 }, /* Flash: Flash */
   {"\x0d\x20\xc0", 0x40023000, CRC_registers, 5 }, /* CRC: cyclic redundancy check calculation       unit */
   {"\x51\x30\xc0", 0x40024000, TSC_registers, 17 }, /* TSC: Touch sensing controller */
   {"\x1d\x02\x4f\x04", 0x48000000, GPIOA_registers, 11 }, /* GPIOA: General-purpose I/Os */
   {"\x1d\x02\x4f\x08", 0x48000400, GPIOB_registers, 11 }, /* GPIOB: General-purpose I/Os */
   {"\x1d\x02\x4f\x0c", 0x48000800, GPIOB_registers, 11 }, /* GPIOC:  */
   {"\x1d\x02\x4f\x10", 0x48000c00, GPIOB_registers, 11 }, /* GPIOD:  */
   {"\x1d\x02\x4f\x14", 0x48001000, GPIOB_registers, 11 }, /* GPIOE:  */
   {"\x1d\x02\x4f\x18", 0x48001400, GPIOB_registers, 11 }, /* GPIOF:  */
   {"\x1d\x02\x4f\x1c", 0x48001800, GPIOB_registers, 11 }, /* GPIOG:  */
   {"\x1d\x02\x4f\x20", 0x48001c00, GPIOB_registers, 11 }, /* GPIOH:  */
   {"\x04\x40\xdc", 0x50000000, ADC1_registers, 27 }, /* ADC1: Analog-to-Digital Converter */
   {"\x04\x40\xdd", 0x50000100, ADC1_registers, 27 }, /* ADC2:  */
   {"\x04\x40\xdc\x95\xd0", 0x50000300, ADC1_2_registers, 3 }, /* ADC1_2: Analog-to-Digital Converter */
   {"\x04\x40\xde", 0x50000400, ADC1_registers, 27 }, /* ADC3:  */
   {"\x04\x40\xdf", 0x50000500, ADC1_registers, 27 }, /* ADC4:  */
   {"\x04\x40\xde\x95\xf0", 0x50000700, ADC1_2_registers, 3 }, /* ADC3_4:  */
   {"\x39\x62\x43", 0xe000e000, NVIC_registers, 38 }, /* NVIC: Nested Vectored Interrupt       Controller */
   {"\x19\x05\x40", 0xe000ed88, FPU_registers, 6 }, /* FPU: Floting point unit */
   {"\x10\x21\xcd\x0d\x50", 0xe0042000, DBGMCU_registers, 4 }, /* DBGMCU: Debug support */
   {NULL, 0, NULL }
};


const char *InterruptNames[] = {
	NULL,
	NULL,
	"NonMaskableInt",
	"HardFault",
	"MemoryManagement",
	"BusFault",
	"UsageFault",
	NULL,
	NULL,
	NULL,
	NULL,
	"SVCall",
	"DebugMonitor",
	NULL,
	"PendSV",
	"SysTick",
	"WWDG",
	"PVD",
	"TAMP_STAMP",
	"RTC_WKUP",
	"FLASH",
	"RCC",
	"EXTI0",
	"EXTI1",
	"EXTI2_TSC",
	"EXTI3",
	"EXTI4",
	"DMA1_CH1",
	"DMA1_CH2",
	"DMA1_CH3",
	"DMA1_CH4",
	"DMA1_CH5",
	"DMA1_CH6",
	"DMA1_CH7",
	"ADC1_2",
	"USB_HP_CAN_TX",
	"USB_LP_CAN_RX0",
	"CAN_RX1",
	"CAN_SCE",
	"EXTI9_5",
	"TIM1_BRK_TIM15",
	"TIM1_UP_TIM16",
	"TIM1_TRG_COM_TIM17",
	"TIM1_CC",
	"TIM2",
	"TIM3",
	"TIM4",
	"I2C1_EV_EXTI23",
	"I2C1_ER",
	"I2C2_EV_EXTI24",
	"I2C2_ER",
	"SPI1",
	"SPI2",
	"USART1_EXTI25",
	"USART2_EXTI26",
	"USART3_EXTI28",
	"EXTI15_10",
	"RTCAlarm",
	"USB_WKUP",
	"TIM8_BRK",
	"TIM8_UP",
	"TIM8_TRG_COM",
	"TIM8_CC",
	"ADC3",
	NULL,
	NULL,
	NULL,
	"SPI3",
	"UART4_EXTI34",
	"UART5_EXTI35",
	"TIM6_DACUNDER",
	"TIM7",
	"DMA2_CH1",
	"DMA2_CH2",
	"DMA2_CH3",
	"DMA2_CH4",
	"DMA2_CH5",
	"ADC4",
	NULL,
	NULL,
	"COMP123",
	"COMP456",
	"COMP7",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"USB_HP",
	"USB_LP",
	"USB_WKUP_EXTI",
	NULL,
	NULL,
	NULL,
	NULL,
};
