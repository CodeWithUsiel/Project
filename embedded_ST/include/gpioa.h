#ifndef GPIOA_H
#define GPIOA_H
// stm32f030f4p6

#include "types.h"
#define GPIOA_HEX 0x48000000U
typedef struct 
{
    vint32_t MODER;
    vint32_t OTYPER;
    vint32_t OSPEEDR;
    vint32_t PUPDR;
    vint32_t IDR;
    vint32_t ODR;
    volatile uint32_t BSRR;
} GPIO;

#define GPIOA_BASE ((GPIO*)(GPIOA_HEX))

#endif GPIOA_H