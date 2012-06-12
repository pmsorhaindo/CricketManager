################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ball.cpp \
../src/Constants.cpp \
../src/CricketManager.cpp \
../src/Field.cpp \
../src/Player.cpp \
../src/TeamFactory.cpp 

OBJS += \
./src/Ball.o \
./src/Constants.o \
./src/CricketManager.o \
./src/Field.o \
./src/Player.o \
./src/TeamFactory.o 

CPP_DEPS += \
./src/Ball.d \
./src/Constants.d \
./src/CricketManager.d \
./src/Field.d \
./src/Player.d \
./src/TeamFactory.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


