#ifndef RESEST_CLOCK_CTRL_H
#define RESEST_CLOCK_CTRL_H

#include <stdint.h>

typedef struct 
{
    volatile uint32_t CR;
    volatile uint32_t CFGR;
    volatile uint32_t CIR;
    volatile uint32_t APB2RSTR;
    volatile uint32_t APB1RSTR;
    volatile uint32_t AHBENR;
    volatile uint32_t APB2ENR;
    volatile uint32_t APB1ENR;
} RCC;

#define RCC_BASE ((RCC*)(0x40021000))

#endif RESEST_CLOCK_CTRL_H