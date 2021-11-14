################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
multiple_int.lss \

FLASH_IMAGE += \
multiple_int.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: multiple_int.elf secondary-outputs

# Tool invocations
multiple_int.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,multiple_int.map -mmcu=atmega32 -o "multiple_int.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

multiple_int.lss: multiple_int.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S multiple_int.elf  >"multiple_int.lss"
	@echo 'Finished building: $@'
	@echo ' '

multiple_int.hex: multiple_int.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex multiple_int.elf  "multiple_int.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: multiple_int.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 multiple_int.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) multiple_int.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
