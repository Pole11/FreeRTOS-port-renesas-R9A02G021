#include "FreeRTOS.h"
#include "task.h"
#include "r_smc_entry.h"

//void vAssertCalled()
//{
//    /* Stop execution for debugging purposes or log the error */
//    for( ;; );
//}

void vAssertCalled(const char *pcFileName, unsigned long ulLine) {
    /* Stop execution for debugging purposes or log the error */
	for ( ;; );
}

void vApplicationStackOverflowHook( TaskHandle_t xTask, char *pcTaskName )
{
    /* Stop execution for debugging purposes or log the error */
    for( ;; );
}

void vApplicationMallocFailedHook() {
    /* Stop execution for debugging purposes or log the error */
    for( ;; );
}

void vApplicationTickHook() {
}

void vApplicationIdleHook() {
}

void freertos_risc_v_application_interrupt_handler(void) {

}

void freertos_risc_v_application_exception_handler(void) {

}

void machine_timer_enable(void) {
    R_CPU_AUX->MACTCR_b.ENABLE = 1U;
    R_CLIC->clicintie7_b.IE = 1U;    /* enable mtip interrupt */
}
