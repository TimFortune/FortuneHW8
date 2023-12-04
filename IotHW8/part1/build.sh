#!/bin/bash

# Compile myGpioApp.cpp with myGpio.cpp
g++ -o myGpioApp myGpioApp.cpp myGpio.cpp -std=c++11

# Run the compiled application
./myGpioApp

echo "Complete"
