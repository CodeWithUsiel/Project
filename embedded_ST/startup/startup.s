.thumb
.syntax unified
.cpu cortex-m0

.section .vectors
    .word _estack
    .word Reset_Handler
    .word NMI_Handler
    .word HardFault

.section .text
.global Reset_Handler
.global main

Reset_Handler:
    BL main

_loop:
    B _loop

main:

