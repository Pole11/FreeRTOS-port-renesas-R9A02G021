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

Add the name of the handler in `src/Demo/Common/vector_table.c` in the right position. The handlers have names like `r_Config_ICU_irq4_interrupt`. If you don't have the exact name and offset, then dig into the Smart Configurator. You can also generate the code from the Smart Configurator and grab the name of the function and the offset from the file `src/smc_gen/general/r_cg_vect_table.c`.

Then you also need to initialize the hardware. Regarding this, look into the Smart Configurator and the official documentation (you can find it in `src/smc_gen/r_bsp/doc/en/*.pdf`.

NB: If you do not like this approach, you can use keep the vector table as is and (re)define `freertos_risc_v_application_exception_handler` (it is defined as weak in the `portASM.s` file).

## I don't like how you are managing the interrupt vector table

The way I manage the interrupt vector table is certainly far from what Renesas initially intended it to be. You can still add the jumps to FreeRTOS interrupt and machine timer interrupt handlers where Renesas intended it to be (`smc_gen/general/r_cg_inthandler.c`) but this way the handlers would not be naked. Remember to add `__attribute((naked))__` (probably also `used`) after the function signature (like `void INT_IELSR0(void) __attribute((naked))__ __attribute((used))__ { asm("j freertos_risc_v_interrupt_handler") }`).

Sorry, but I preferred to keep it simple.

## Facts that might interest you

- Fact 1: Changing the configuration defined in the headers does not affect the speed at which interrupts are fired. This is handled by the FreeRTOS port. 
- Fact 2: Call the `machine_timer_enable()` in the hardware initialisation phase.
- Fact 3: This board supports different clock speeds. Currently, the value 48000000 is hard-coded inside the FreeRTOS configuration file (you can find it in the Demo folder). If you change the clock value of the board, remember to also change the value there. As far as I know FreeRTOS does not support changing clock frequency at runtime, but this can be easily implemented at will. If so, you will need to look at the Renesas documentation to get the function name to gather the running clock frequency.
 
# FreeRTOS License

This repo contains FreeRTOS code. Here is their license:

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
