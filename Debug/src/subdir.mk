################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/consommateur_base.cpp \
../src/filtre_base.cpp \
../src/harmonique.cpp \
../src/imp_flot.cpp \
../src/main.cpp \
../src/multiplicateur.cpp \
../src/producteur_base.cpp \
../src/signal_constant.cpp 

OBJS += \
./src/consommateur_base.o \
./src/filtre_base.o \
./src/harmonique.o \
./src/imp_flot.o \
./src/main.o \
./src/multiplicateur.o \
./src/producteur_base.o \
./src/signal_constant.o 

CPP_DEPS += \
./src/consommateur_base.d \
./src/filtre_base.d \
./src/harmonique.d \
./src/imp_flot.d \
./src/main.d \
./src/multiplicateur.d \
./src/producteur_base.d \
./src/signal_constant.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/inc/prog/tp13/share/include -I/home/inc/prog/tp13/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


