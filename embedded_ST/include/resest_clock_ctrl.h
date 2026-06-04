#ifndef RESEST_CLOCK_CTRL_H
#define RESEST_CLOCK_CTRL_H

#include "types.h"
#define RCC_HEX 0x40021000U

typedef struct 
{
    vint32_t CR;
    vint32_t CFGR;
    vint32_t CIR;
    vint32_t APB2RSTR;
    vint32_t APB1RSTR;
    vint32_t AHBENR; // AHB peripheral clock enable register
    vint32_t APB2ENR;
    vint32_t APB1ENR;
} RCC;

#define RCC_BASE ((RCC*)(RCC_HEX))

#endif RESEST_CLOCK_CTRL_H