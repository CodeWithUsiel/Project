.thumb
.syntax unified
.cpu cortex-m0

.section .vectors
    .word _estack
    .word Reset_Handler
    .word NMI_Handler
    .word HardFault_Handler

.section .text
.global Reset_Handler

_Reset_Handler:
    LDR R0, =main
    BLX R0

_loop:
    B _loop

