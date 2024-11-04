#include "r_smc_entry.h"
#include "FreeRTOS.h"
#include "task.h"

volatile uint32_t blinkDelay = 1000; // Initial blink delay of 1 second (1 Hz)
int iteration = 0;
extern volatile void freertos_vector_table(void);
extern volatile void freertos_risc_v_trap_handler(void);

int main(void);

void vTaskFunction1(void *pvParameters) {
	machine_timer_start();

	while(1)
	{
		/* Toggle LED status */
	    PIN_WRITE(LED2) = ~PIN_READ(LED2);

	    iteration++;
	    /* Delay blinkDelay milliseconds before returning */
	    vTaskDelay(blinkDelay);
	}
}

int main(void)
{
    /* Setup and start the machine timer */
    asm volatile ( "csrw mtvec, %0" : : "r" ( ( uintptr_t ) freertos_vector_table | 0x01 ));

    /* Start SW Interrupt */
    R_Config_ICU_IRQ4_Start();

	/* Create the task(s) */
    int taskReturnValue1 = xTaskCreate(
        vTaskFunction1,       		/* Pointer to the function that implements the task. */
        "Task 1 BLINK",       		/* Text name for the task (useful for debugging). */
        configMINIMAL_STACK_SIZE, 	/* Stack depth in words. */
        NULL,                 		/* Task input parameter (if any). */
        tskIDLE_PRIORITY + 1,     	/* Priority at which the task will run. */
        NULL                  		/* Task handle (not used in this case). */
    );

    if (taskReturnValue1 == pdTRUE)
    	vTaskStartScheduler();

    for (;;);

    return 0;
}
