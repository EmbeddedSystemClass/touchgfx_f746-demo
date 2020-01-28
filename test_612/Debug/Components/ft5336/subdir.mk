################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Components/ft5336/ft5336.c 

OBJS += \
./Components/ft5336/ft5336.o 

C_DEPS += \
./Components/ft5336/ft5336.d 


# Each subdirectory must supply rules for building sources it contributes
Components/ft5336/ft5336.o: ../Components/ft5336/ft5336.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../USB_HOST/App -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/texts/include -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../TouchGFX/generated/images/include -I"C:/Users/STM32/STM32CubeIDE/workspace_1.2.0/test_612/Components/ft5336" -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Middlewares/ST/touchgfx/framework/include -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../FATFS/Target -I../USB_HOST/Target -I../TouchGFX/App -I../Middlewares/Third_Party/FatFs/src -I../TouchGFX/target -I"C:/Users/STM32/STM32CubeIDE/workspace_1.2.0/test_612/Components/Common" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Components/ft5336/ft5336.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

