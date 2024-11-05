# Renesas Renesas RISC-V MCU port

This is a port of FreeRTOS on the Renesas RISC-V MCU. In particular I have access to R9A02G021.

# How to replicate

- Exclude from the build:
	- `src/smc_gen/general/r_cg_vect_table.c`
	- all except one of the files in `src/Source/Portable/MemMang` 
- Add as includes to the compiler (add to the default ones):
	- `src/Demo/Common`
	- `src/Demo`
	- `src/Source/Portable/LLVM` 
	- `src/Source/include` 
- Add as includes to the assembler (add to the default ones):
	- `src/Source/Portable/LLVM` 

## I want to add an interrupt handler for the button/pin/adc/...

Add the name of the handler in `src/Demo/Common/vector_table.c` in the right position. The handler have names like `r_Config_ICU_irq4_interrupt`. If you don't have the exact name and offset, then use the Smart Configurator.

## Note on machine timer

- Fact 1: changing the configuration defines in the headers does not affect the speed at which interrupts are fired.
- Fact 2 (?!): since when the machine timer fires an interrupt it will call the function to increment the tick that should assume that the scheduler started, so to be sure you need to call the `machine_timer_start()` function inside the first task that gets called
 
# FreeRTOS License

This repo contains FreeRTOS code. Here is their license:

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.