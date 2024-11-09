#include "r_smc_entry.h"
#include "FreeRTOS.h"
#include "task.h"
#include "common.h"

volatile uint32_t blinkDelay = 1000;

int main(void);

void vTaskFunction(void *pvParameters) {
	while(1)
	{
		/* Toggle LED status */
	    PIN_WRITE(LED2) = ~PIN_WRITE(LED2);

	    /* Delay blinkDelay milliseconds before returning */
	    vTaskDelay(blinkDelay);
	}
}

int main(void)
{
    R_Config_ICU_IRQ4_Start();
    machine_timer_enable();

	/* Create the task(s) */
    int taskReturnValue = xTaskCreate(
        vTaskFunction,       		/* Pointer to the function that implements the task. */
        "Task Blink",       		/* Text name for the task (useful for debugging). */
        configMINIMAL_STACK_SIZE, 	/* Stack depth in words. */
        NULL,                 		/* Task input parameter (if any). */
        tskIDLE_PRIORITY + 1,     	/* Priority at which the task will run. */
        NULL                  		/* Task handle (not used in this case). */
    );

    if (taskReturnValue)
    	vTaskStartScheduler();

    for (;;);

    return 0;
}
