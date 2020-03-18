################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../include/imp_flot.cpp \
../include/signal_constant.cpp 

OBJS += \
./include/imp_flot.o \
./include/signal_constant.o 

CPP_DEPS += \
./include/imp_flot.d \
./include/signal_constant.d 


# Each subdirectory must supply rules for building sources it contributes
include/%.o: ../include/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/inc/prog/tp13/share/include -I/home/inc/prog/tp13/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


