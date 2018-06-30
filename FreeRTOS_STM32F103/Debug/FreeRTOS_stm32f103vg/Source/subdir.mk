################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeRTOS_stm32f103vg/Source/croutine.c \
../FreeRTOS_stm32f103vg/Source/event_groups.c \
../FreeRTOS_stm32f103vg/Source/list.c \
../FreeRTOS_stm32f103vg/Source/queue.c \
../FreeRTOS_stm32f103vg/Source/tasks.c \
../FreeRTOS_stm32f103vg/Source/timers.c 

OBJS += \
./FreeRTOS_stm32f103vg/Source/croutine.o \
./FreeRTOS_stm32f103vg/Source/event_groups.o \
./FreeRTOS_stm32f103vg/Source/list.o \
./FreeRTOS_stm32f103vg/Source/queue.o \
./FreeRTOS_stm32f103vg/Source/tasks.o \
./FreeRTOS_stm32f103vg/Source/timers.o 

C_DEPS += \
./FreeRTOS_stm32f103vg/Source/croutine.d \
./FreeRTOS_stm32f103vg/Source/event_groups.d \
./FreeRTOS_stm32f103vg/Source/list.d \
./FreeRTOS_stm32f103vg/Source/queue.d \
./FreeRTOS_stm32f103vg/Source/tasks.d \
./FreeRTOS_stm32f103vg/Source/timers.d 


# Each subdirectory must supply rules for building sources it contributes
FreeRTOS_stm32f103vg/Source/%.o: ../FreeRTOS_stm32f103vg/Source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f1-stdperiph" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg\Source\include" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg" -I"C:\Users\V_PREETHAM_KASHYAP\workspace\FreeRTOS_STM32F103\FreeRTOS_stm32f103vg\Source\portable\GCC\ARM_CM3" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


