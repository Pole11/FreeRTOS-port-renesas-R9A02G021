################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

-include makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/smc_gen/r_pincfg/subdir.mk
-include src/smc_gen/r_bsp/mcu/r9a02g021/subdir.mk
-include src/smc_gen/r_bsp/mcu/all/subdir.mk
-include src/smc_gen/r_bsp/board/generic_r9a02g021/subdir.mk
-include src/smc_gen/general/subdir.mk
-include src/smc_gen/Config_PORT/subdir.mk
-include src/smc_gen/Config_ICU/subdir.mk
-include src/smc_gen/Config_ADC/subdir.mk
-include src/Source/Portable/MemMang/subdir.mk
-include src/Source/Portable/LLVM/subdir.mk
-include src/Source/subdir.mk
-include src/Demo/queue_test/subdir.mk
-include src/Demo/Common/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(SRC_UPPER_DEPS)),)
-include $(SRC_UPPER_DEPS)
endif
ifneq ($(strip $(P_UPPER_DEPS)),)
-include $(P_UPPER_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(PP_UPPER_DEPS)),)
-include $(PP_UPPER_DEPS)
endif
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif
ifneq ($(strip $(FSY_UPPER_DEPS)),)
-include $(FSY_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
$(C_DEPS):$(SMS_ASM)
endif
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif
ifneq ($(strip $(JMP_UPPER_DEPS)),)
-include $(JMP_UPPER_DEPS)
endif
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(SX_UPPER_DEPS)),)
-include $(SX_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \

OBJCOPY += \
FreeRTOS_port_prod2.srec \

SECONDARY_SIZE += \
FreeRTOS_port_prod2.siz \


# All Target
all: FreeRTOS_port_prod2.elf secondary-outputs

# Tool invocations
FreeRTOS_port_prod2.elf: $(OBJS) $(USER_OBJS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(LINKER_SCRIPT)
	$(file > FreeRTOS_port_prod2.elf.in,--target=riscv32 -mabi=ilp32 -march=rv32imaczba_zbb_zbs -Og -ffunction-sections -fdata-sections -fdiagnostics-parseable-fixits -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -g -o "FreeRTOS_port_prod2.elf" $(OBJS) $(USER_OBJS) -T "C:/Users/Pole/e2_studio/workspace/FreeRTOS_port_prod2/src/linker_script.ld" -Wl,-Map=FreeRTOS_port_prod2.map -Wl,--start-group -lnosys  -Wl,--end-group -Wl,-e_PowerON_Reset -Wl,--cref -Wl,--icf=none)
	@echo Building target: $@ && clang @"FreeRTOS_port_prod2.elf.in"> FreeRTOS_port_prod2.cref
: 
	riscv-elf-libgen  --select-lib=newlib --compiler-options=--target=riscv32,-mabi=ilp32,-march=rv32imaczba_zbb_zbs,-Og,-ffunction-sections,-fdata-sections,-fdiagnostics-parseable-fixits,-fno-strict-aliasing --assembler-options=--target=riscv32,-mabi=ilp32,-march=rv32imaczba_zbb_zbs -o
FreeRTOS_port_prod2.srec: FreeRTOS_port_prod2.elf
	llvm-objcopy "FreeRTOS_port_prod2.elf" -O srec  "FreeRTOS_port_prod2.srec"
FreeRTOS_port_prod2.siz: FreeRTOS_port_prod2.elf
	llvm-size --format=berkeley "FreeRTOS_port_prod2.elf"
# Other Targets
clean:
	-$(file > clean_file.tmp,  $(JMP_DEPS)  $(FSY_DEPS)  $(C_UPPER_DEPS)  $(SECONDARY_SIZE)  $(SRC_UPPER_DEPS)  $(P_UPPER_DEPS)  $(S_DEPS)  $(PP_UPPER_DEPS)  $(P_DEPS)  $(FSY_UPPER_DEPS)  $(CREF)  $(C_DEPS)  $(SRC_DEPS)  $(OBJCOPY)  $(JMP_UPPER_DEPS)  $(PP_DEPS)  $(SX_DEPS)  $(ASM_UPPER_DEPS)  $(OBJS)  $(SX_UPPER_DEPS)  $(ASM_DEPS)  $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)  $(MAP)  $(S_UPPER_DEPS) )
	-@ xargs -P 2 -s 32000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	-$(RM)  FreeRTOS_port_prod2.elf
	-@echo ' '

secondary-outputs: $(OBJCOPY) $(SECONDARY_SIZE)

.PHONY: all clean dependents 

-include ../makefile.targets
