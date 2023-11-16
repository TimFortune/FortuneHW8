#!/bin/bash

config-pin p9.12 gpio
config-pin p8.16 gpio_pu

echo "done configuring"
echo "building gpioApp application"

g++ -Wall AnalogIn.cpp myLED.cpp GPIO.cpp gpioApp.cpp -o gpioApp -pthread

# Configurations for BeagleBone Black GPIO pins
echo "Configuring GPIO pins..."
# Replace the following placeholders with actual commands from Derek Molloy's examples
# Example:
# echo "Configuring p8.16 and p9.12..."
# config_command_for_p8_16
# config_command_for_p9_12

echo "Build complete."
