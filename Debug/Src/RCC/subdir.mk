################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/RCC/RCC_prog.c 

OBJS += \
./Src/RCC/RCC_prog.o 

C_DEPS += \
./Src/RCC/RCC_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Src/RCC/%.o Src/RCC/%.su Src/RCC/%.cyclo: ../Src/RCC/%.c Src/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-RCC

clean-Src-2f-RCC:
	-$(RM) ./Src/RCC/RCC_prog.cyclo ./Src/RCC/RCC_prog.d ./Src/RCC/RCC_prog.o ./Src/RCC/RCC_prog.su

.PHONY: clean-Src-2f-RCC

