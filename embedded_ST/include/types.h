#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

/* volatile unsigned int 32 bit, used for memory-mapped
registers. It is not necessary to import the library, it already comes in the I/O */
typedef volatile uint32_t vint32_t;
typedef volatile uint16_t vint16_t;

#endif TYPES_H