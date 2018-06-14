#ifndef __DECODER_H__
#define __DECODER_H__
/* decoder.h:
 *
 *  Magic ring decoder for processor registers
 *
 */
 

typedef struct Field_s {
  char *name;             /* Field name */
  uint8_t offset;         /* Starting bit number */
  uint8_t width;          /* Size in bits */
} Field_t;

typedef struct Register_s {
  char *name;             /* Register name */
  uint16_t offset;        /* Offset from base */
  uint8_t  size;          /* Size of register, in bits */
  uint8_t  type;          /* Register type, RW/RO.. */
  const Field_t  *fields; /* Register fields */
  uint16_t  numFields;    /* Number of fields */
} Register_t;

typedef struct Peripheral_s {
  char *name;             /* Peripheral name */
  uint32_t base;          /* Base address */
  const Register_t *registers; /* Pointer to registers for this peripheral */
  uint16_t numRegisters;  /* Number of Registers */
} Peripheral_t;

typedef struct PeripheralGroup_s {
  char *name;             /* Peripheral Group Name */
  const Peripheral_t *peripherals; /* Pointer to array of peripherals in this group */
} PeripheralGroup_t;

extern const Peripheral_t Peripherals[];
#endif
