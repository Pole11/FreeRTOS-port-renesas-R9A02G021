# Renesas Renesas RISC-V MCU port

This is a port of FreeRTOS on the Renesas RISC-V MCU. In particular I have access to R9A02G021.

# How to replicate

- Exclude from the build:
	- `src/smc_gen/general/r_cg_vect_table.c`
	- all except one of the files in `src/Source/Portable/MemMang` 
	- all except one of the `src/Demo/*/main.c`
		- demos need the pins to be configured, the best way is to use the Smart Configurator: click on the **Pin** tab and retrieve the pin number from the flyer given (you can also find it on the official website of Renesas) and set the correct pin to output
- Add as includes to the compiler (add to the default ones):
	- `src/Demo/Common`
	- `src/Demo`
	- `src/Source/Portable/LLVM` 
	- `src/Source/include` 
- Add as includes to the assembler (add to the default ones):
	- `src/Source/Portable/LLVM`
 - Enable the machine timer from the Smart Configurator

## I want to add an interrupt handler for a button/pin/adc/...

Add the name of the handler in `src/Demo/Common/vector_table.c` in the right position. The handler have names like `r_Config_ICU_irq4_interrupt`. If you don't have the exact name and offset, then dig into the Smart Configurator. You can also generate the code from the Smart Configurator and grab the name of the function and the offset from the file `src/smc_gen/general/r_cg_vect_table.c`.

Then you also need to initialise the hardware. Regarding this, look into the Smart Configurator and the official documentation (you can find it in `src/smc_gen/r_bsp/doc/en/*.pdf`.

## Facts that might interest you

- Fact 1: changing the configuration defined in the headers does not affect the speed at which interrupts are fired. This is handled by the FreeRTOS port. 
- Fact 2: call the `machine_timer_enable()` in the hardware initialisation phase.
- Fact 3: this board supports different clock speeds. Now the 48000000 value is hard coded inside the FreeRTOS configuration file (you can find it in the Demo folder). If you change the clock value of the board, remember to also change the value there. As far as I know FreeRTOS does not support changing clock frequency at runtime, but this can be easily implemented at will. If so, you will need to look at the Renesas documentation to get the function name to gather the running clock frequency.
 
# FreeRTOS License

This repo contains FreeRTOS code. Here is their license:

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
