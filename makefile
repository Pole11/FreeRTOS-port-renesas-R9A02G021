# Compiler, assembler, and linker
CC = ~/toolchains/llvm_17.0.2.202407_riscv-elf/bin/clang
AS = ~/toolchains/llvm_17.0.2.202407_riscv-elf/bin/clang  # clang is used as the assembler
LD = ~/toolchains/llvm_17.0.2.202407_riscv-elf/bin/clang  # clang also serves as the linker

# Flags for C compiler
CFLAGS = -std=gnu99 \
-I"src/Demo" \
-I"src/Demo/Common" \
-I"src/smc_gen/general" \
-I"src/smc_gen/Config_ICU" \
-I"src/smc_gen/r_pincfg" \
-I"src/smc_gen/r_config" \
-I"src/smc_gen/r_bsp" \
-I"src/smc_gen/Config_PORT" \
-I"src/smc_gen" \
-I"src/smc_gen/Config_ADC" \
-I"src/Source/Portable/LLVM" \
-I"src/Source/include"

# Flags for assembler
ASFLAGS = -x assembler-with-cpp \
-I"src/Source/Portable/LLVM" \
-I"src/smc_gen/general" \
-I"src/smc_gen/Config_ICU" \
-I"src/smc_gen/r_pincfg" \
-I"src/smc_gen/Config_PORT" \
-I"src/smc_gen" \
-I"src/smc_gen/Config_ADC"

# Flags for linker
LDFLAGS = -T "src/linker_script.ld" \
-Wl,-Map=out.map \
-Wl,--start-group \
-lnosys \
-Wl,--end-group \
-Wl,-e_PowerON_Reset \
-Wl,--cref \
-Wl,--icf=none \
-lnosys

# Source files
C_SRCS = $(wildcard *.c)
ASM_SRCS = $(wildcard *.s)

# Object files
OBJS = $(C_SRCS:.c=.o) $(ASM_SRCS:.s=.o)

# Output binary
TARGET = out

# Build rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(LD) $(CFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.s
	$(AS) $(ASFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) 
