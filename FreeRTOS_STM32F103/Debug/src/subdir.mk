################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/_write.c \
../src/main.c 

CPP_SRCS += \
../src/BlinkLed.cpp \
../src/Timer.cpp 

OBJS += \
./src/BlinkLed.o \
./src/Timer.o \
./src/_write.o \
./src/main.o 

C_DEPS += \
./src/_write.d \
./src/main.d 

CPP_DEPS += \
./src/BlinkLed.d \
./src/Timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C++ Compiler'
	arm-none-eabi-g++ -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f1-stdperiph" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg\Source\include" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg\Source\portable\GCC\ARM_CM3" -std=gnu++11 -fabi-version=0 -fno-exceptions -fno-rtti -fno-use-cxa-atexit -fno-threadsafe-statics -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f1-stdperiph" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg\Source\include" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg\Source\portable\GCC\ARM_CM3" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


