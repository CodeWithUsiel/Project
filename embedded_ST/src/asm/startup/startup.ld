MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 16K
    RAM (xrw) : ORIGIN = 0x20000000, LENGTH = 4K
}

_estack = ORIGIN(RAM) + LENGTH(RAM)

SECTIONS
{
    .vectors :
    {
        . = ALIGN(4);
        KEEP(*(.vectors))
        . = ALIGN(4);
    } > FLASH

    .text :
    {
        . = ALIGN(4);
        *(.text*)
        . = ALIGN(4);
    } > FLASH
}