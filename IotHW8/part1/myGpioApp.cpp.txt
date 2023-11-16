// myGpioApp.cpp
// This app uses myGpio class to control Gpio pins on bbb

#include "myGpio.h"

int main() {

    // MYGPIO objects for BeagleBone Black pins
    MYGPIO outputPin(12); // Assuming BeagleBone Black pin p9.12
    MYGPIO inputPin(16);  // Assuming BeagleBone Black pin p8.16

    // Set outputPin as output and inputPin as input
    outputPin.setDirection(OUTPUT);
    inputPin.setDirection(INPUT);

    // Set p9.12 high for 3 seconds, and then set it low
    outputPin.setValue(HIGH);
    sleep(3);  // Sleep for 3 seconds
    outputPin.setValue(LOW);

    // Print out the value of p9.12 in both cases
    std::cout << "Value of p9.12 after setting high: " << outputPin.getValue() << std::endl;
    std::cout << "Value of p9.12 after setting low: " << outputPin.getValue() << std::endl;

    // Read and print out the value of p8.16
    std::cout << "Value of p8.16: " << inputPin.getValue() << std::endl;

    return 0;
}
