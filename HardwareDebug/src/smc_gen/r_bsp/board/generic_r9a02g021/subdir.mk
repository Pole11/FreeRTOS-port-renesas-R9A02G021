################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/smc_gen/r_bsp/board/generic_r9a02g021/hdwinit.c \
../src/smc_gen/r_bsp/board/generic_r9a02g021/r_bsp_init.c 

CREF += \
FreeRTOS_port_prod2.cref 

C_DEPS += \
./src/smc_gen/r_bsp/board/generic_r9a02g021/hdwinit.d \
./src/smc_gen/r_bsp/board/generic_r9a02g021/r_bsp_init.d 

OBJS += \
./src/smc_gen/r_bsp/board/generic_r9a02g021/hdwinit.o \
./src/smc_gen/r_bsp/board/generic_r9a02g021/r_bsp_init.o 

MAP += \
FreeRTOS_port_prod2.map 


# Each subdirectory must supply rules for building sources it contributes
src/smc_gen/r_bsp/board/generic_r9a02g021/%.o: ../src/smc_gen/r_bsp/board/generic_r9a02g021/%.c
	@echo 'Building file: $<'
	$(file > $@.in,--target=riscv32 -mabi=ilp32 -march=rv32imaczba_zbb_zbs -Og -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -std=gnu99 -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\Demo" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\Demo\\Common" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen\\r_bsp" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen\\general" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen\\Config_ICU" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen\\r_pincfg" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen\\Config_PORT" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen\\r_config" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\smc_gen\\Config_ADC" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\Source\\Portable\\LLVM" -I"C:\\Users\\Pole\\e2_studio\\workspace\\FreeRTOS_port_prod2\\src\\Source\\include" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" "$<" -c -o "$@")
	@clang @"$@.in"

