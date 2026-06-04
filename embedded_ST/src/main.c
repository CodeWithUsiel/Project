#include "resest_clock_ctrl.h"
#include "gpioa.h"

void delay(vint32_t count) 
{
    while(count--);
    __asm("nop");
}

// compile cmake --build .
int main(void)
{
    RCC_BASE->AHBENR |= (1 << 17);
    GPIOA_BASE->MODER &= ~(ANALOG_MODE << (2 * 5));
    GPIOA_BASE->MODER |= (OUTPUT_MODE << (2 * 5));
    
    while (1);
}