#include "types.h"

void delay(vint32_t count) 
{
    while(count--);
    __asm("nop");
}