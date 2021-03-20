################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/BitmapDatabase.cpp 

OBJS += \
./TouchGFX/generated/images/src/BitmapDatabase.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/BitmapDatabase.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/BitmapDatabase.o: ../TouchGFX/generated/images/src/BitmapDatabase.cpp TouchGFX/generated/images/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Inc -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/Middlewares/ST/TouchGFX/touchgfx/framework/include" -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/Src" -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/TouchGFX/generated/gui_generated/include" -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/TouchGFX/gui/include" -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/TouchGFX/generated/fonts/include" -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/TouchGFX/generated/images/include" -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/TouchGFX/generated/texts/include" -I"D:/GitHubRepos/STM32/touchgfx_f746-demo/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/BitmapDatabase.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

