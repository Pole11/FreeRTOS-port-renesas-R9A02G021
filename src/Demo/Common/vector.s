.global freertos_vector_table

.extern freertos_risc_v_trap_handler
.extern freertos_risc_v_exception_handler
.extern freertos_risc_v_interrupt_handler
.extern freertos_risc_v_mtimer_interrupt_handler


.balign 128, 0
.option norvc

freertos_vector_table:
IRQ_0:
    j freertos_risc_v_exception_handler
IRQ_1:
    j freertos_risc_v_interrupt_handler
IRQ_2:
    j freertos_risc_v_interrupt_handler
IRQ_3:
    j freertos_risc_v_interrupt_handler
IRQ_4:
    j freertos_risc_v_interrupt_handler
IRQ_5:
    j freertos_risc_v_interrupt_handler
IRQ_6:
    j freertos_risc_v_interrupt_handler
IRQ_7:
    j freertos_risc_v_mtimer_interrupt_handler
IRQ_8:
    j freertos_risc_v_interrupt_handler
IRQ_9:
    j freertos_risc_v_interrupt_handler
IRQ_10:
    j freertos_risc_v_interrupt_handler
IRQ_11:
    j freertos_risc_v_interrupt_handler
IRQ_12:
    j freertos_risc_v_interrupt_handler
IRQ_13:
    j freertos_risc_v_interrupt_handler
IRQ_14:
    j freertos_risc_v_interrupt_handler
IRQ_15:
    j freertos_risc_v_interrupt_handler
IRQ_LC0:
    j freertos_risc_v_interrupt_handler
IRQ_LC1:
    j freertos_risc_v_interrupt_handler
IRQ_LC2:
    j freertos_risc_v_interrupt_handler
IRQ_LC3:
    j freertos_risc_v_interrupt_handler
IRQ_LC4:
    j freertos_risc_v_interrupt_handler
IRQ_LC5:
    j freertos_risc_v_interrupt_handler
IRQ_LC6:
    j freertos_risc_v_interrupt_handler
IRQ_LC7:
    j freertos_risc_v_interrupt_handler
IRQ_LC8:
    j freertos_risc_v_interrupt_handler
IRQ_LC9:
    j freertos_risc_v_interrupt_handler
IRQ_LC10:
    j freertos_risc_v_interrupt_handler
IRQ_LC11:
    j freertos_risc_v_interrupt_handler
IRQ_LC12:
    j freertos_risc_v_interrupt_handler
IRQ_LC13:
    j freertos_risc_v_interrupt_handler
IRQ_LC14:
    j freertos_risc_v_interrupt_handler
IRQ_LC15:
    j freertos_risc_v_interrupt_handler

