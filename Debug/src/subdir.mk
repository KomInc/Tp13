################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/imp_flot.cpp \
../src/main.cpp \
../src/producteurbase.cpp \
../src/signal_constant.cpp 

OBJS += \
./src/imp_flot.o \
./src/main.o \
./src/producteurbase.o \
./src/signal_constant.o 

CPP_DEPS += \
./src/imp_flot.d \
./src/main.d \
./src/producteurbase.d \
./src/signal_constant.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/inc/prog/tp13/share/include -I/home/inc/prog/tp13/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


