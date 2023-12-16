################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCAL/RCC/RCC_prog.c 

OBJS += \
./Src/MCAL/RCC/RCC_prog.o 

C_DEPS += \
./Src/MCAL/RCC/RCC_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCAL/RCC/%.o Src/MCAL/RCC/%.su Src/MCAL/RCC/%.cyclo: ../Src/MCAL/RCC/%.c Src/MCAL/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc/RCC -I../Lib -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-MCAL-2f-RCC

clean-Src-2f-MCAL-2f-RCC:
	-$(RM) ./Src/MCAL/RCC/RCC_prog.cyclo ./Src/MCAL/RCC/RCC_prog.d ./Src/MCAL/RCC/RCC_prog.o ./Src/MCAL/RCC/RCC_prog.su

.PHONY: clean-Src-2f-MCAL-2f-RCC

