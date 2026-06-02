#include "resest_clock_ctrl.h"
#include "gpioa.h"
// compile cmake --build .
int main(void)
{
    RCC_BASE->AHBENR |= (1 << 17);
    GPIOA_BASE->MODER &= ~(3 << (5 * 2));
    GPIOA_BASE->MODER |= (1 << (5 * 2));

    while (1);
}