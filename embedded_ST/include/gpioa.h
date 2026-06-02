#ifndef GPIOA_H
#define GPIOA_H
// stm32f030f4p6

#include <stdint.h>
    
typedef struct 
{
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
} GPIO;

#define GPIOA_BASE ((GPIO*)(0x48000000))

#endif GPIOA_H