/*

   |                 |
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [Y]         [ ] |---
---| [B]         [ ] |---
---| [G]         [ ] |---
   |                 |
   |                 |
   |                 |
---| [R]         [ ] |---
---| [ ]         [X] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
---| [ ]         [ ] |---
   |                 |

Y = yellow led
B = blue led
G = green led
R = red led
X = GND

*/

#include "r_smc_entry.h"
#include "FreeRTOS.h"
#include "task.h"
#include "common.h"

#define KTH_BIT(num, k) ((num >> k) & 1)

volatile uint32_t blinkDelay = 1000;
int counter = 0;

int main(void);

void vTaskFunctionCounter(void *pvParameters) {
	while(1) {
		counter++;
	    vTaskDelay(blinkDelay);
	}
}

void vTaskFunction1(void *pvParameters) {
	while(1)
	{
		/* Toggle LED status */
	    PIN_WRITE(LED1) = KTH_BIT(counter, 0);

	    /* Delay blinkDelay milliseconds before returning */
	    vTaskDelay(blinkDelay);
	}
}


void vTaskFunction2(void *pvParameters) {
	while(1)
	{
	    PIN_WRITE(LED2) = KTH_BIT(counter, 1);
	    vTaskDelay(blinkDelay);
	}
}

void vTaskFunctionRed(void *pvParameters) {
	while(1) {
		R_Config_PORT_Set_Output_Level("P305", KTH_BIT(counter, 2) ? HIGH : LOW); // red
	    vTaskDelay(blinkDelay);
	}
}

void vTaskFunctionGreen(void *pvParameters) {
	while(1) {
		R_Config_PORT_Set_Output_Level("P304", KTH_BIT(counter, 3) ? HIGH : LOW); // green
	    vTaskDelay(blinkDelay);
	}
}

void vTaskFunctionBlue(void *pvParameters) {
	while(1) {
		R_Config_PORT_Set_Output_Level("P104", KTH_BIT(counter, 4) ? HIGH : LOW); // blue
	    vTaskDelay(blinkDelay);
	}
}

void vTaskFunctionYellow(void *pvParameters) {
	while(1) {
		R_Config_PORT_Set_Output_Level("P402", KTH_BIT(counter, 5) ? HIGH : LOW); // yellow
	    vTaskDelay(blinkDelay);
	}
}

int main(void)
{
    R_Config_ICU_IRQ4_Start();
    machine_timer_enable();

    int taskReturnValueCounter = xTaskCreate(
		vTaskFunctionCounter,
        "Task Counter",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 0,
		NULL
    );

	/* Create the task(s) */
    int taskReturnValue1 = xTaskCreate(
        vTaskFunction1,       		/* Pointer to the function that implements the task. */
        "Task 1",       		/* Text name for the task (useful for debugging). */
        configMINIMAL_STACK_SIZE, 	/* Stack depth in words. */
        NULL,                 		/* Task input parameter (if any). */
        tskIDLE_PRIORITY + 1,     	/* Priority at which the task will run. */
        NULL                  		/* Task handle (not used in this case). */
    );
    int taskReturnValue2 = xTaskCreate(
        vTaskFunction2,
        "Task 2",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 2,
		NULL
    );

    int taskReturnValueRed = xTaskCreate(
        vTaskFunctionRed,
        "Task red",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 3,
		NULL
    );
    int taskReturnValueGreen = xTaskCreate(
        vTaskFunctionGreen,
        "Task green",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 4,
		NULL
    );
    int taskReturnValueBlue = xTaskCreate(
        vTaskFunctionBlue,
        "Task blue",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 5,
		NULL
    );
    int taskReturnValueYellow = xTaskCreate(
        vTaskFunctionYellow,
        "Task yellow",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 6,
		NULL
    );

    if (taskReturnValueCounter == pdTRUE
    		&& taskReturnValue1 == pdTRUE
    		&& taskReturnValue2 == pdTRUE
    		&& taskReturnValueRed == pdTRUE
    		&& taskReturnValueGreen == pdTRUE
    		&& taskReturnValueBlue == pdTRUE
    		&& taskReturnValueYellow == pdTRUE
		)
    	vTaskStartScheduler();

    for (;;);

    return 0;
}
