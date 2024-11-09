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
#include "queue.h"
#include "common.h"

#define KTH_BIT(num, k) ((num >> k) & 1)

volatile uint32_t blinkDelay = 1000;
QueueHandle_t xQueue;

int main(void);

void vTaskFunctionProducer(void *pvParameters) {
	int numberToSend = 0;

	while(1)
	{
		numberToSend = (numberToSend + 1) % 16; // %16 is useless overhead, but it makes clear that the demo has 4 leds to show the value

		if (xQueueSend(xQueue, &numberToSend, portMAX_DELAY) == pdPASS) {
		    PIN_WRITE(LED2) = 1; // sent
		} else {
		    PIN_WRITE(LED2) = 0; // error, not sent
		}

	    vTaskDelay(blinkDelay);
	}
}

void vTaskFunctionConsumer(void *pvParameters) {
	int numberReceived;

	while(1) {
		if (xQueueReceive(xQueue, &numberReceived, portMAX_DELAY) == pdTRUE) {
		    PIN_WRITE(LED1) = 1; // received

			R_Config_PORT_Set_Output_Level("P305", KTH_BIT(numberReceived, 0) ? HIGH : LOW); // red
			R_Config_PORT_Set_Output_Level("P304", KTH_BIT(numberReceived, 1) ? HIGH : LOW); // green
			R_Config_PORT_Set_Output_Level("P104", KTH_BIT(numberReceived, 2) ? HIGH : LOW); // blue
			R_Config_PORT_Set_Output_Level("P402", KTH_BIT(numberReceived, 3) ? HIGH : LOW); // yellow

		    vTaskDelay(blinkDelay);
		}
	    PIN_WRITE(LED1) = 0; // waiting
	}
}

int main(void)
{
    R_Config_ICU_IRQ4_Start();
    machine_timer_enable();

    xQueue = xQueueCreate(5, sizeof(int));

    if (xQueue != NULL) {
		/* Create the task(s) */
		int taskReturnValueProducer = xTaskCreate(
			vTaskFunctionProducer,      /* Pointer to the function that implements the task. */
			"Task Producer",       		/* Text name for the task (useful for debugging). */
			configMINIMAL_STACK_SIZE, 	/* Stack depth in words. */
			NULL,                 		/* Task input parameter (if any). */
			tskIDLE_PRIORITY + 1,     	/* Priority at which the task will run. */
			NULL                  		/* Task handle (not used in this case). */
		);

		int taskReturnValueConsumer = xTaskCreate(
			vTaskFunctionConsumer,
			"Task Consumer",
			configMINIMAL_STACK_SIZE,
			NULL,
			tskIDLE_PRIORITY + 1,
			NULL
		);

		if (taskReturnValueProducer
				&& taskReturnValueConsumer)
			vTaskStartScheduler();

    } else {
    	// error
    }

    for (;;);

    return 0;
}
