// AnalogIn.cpp
#include "AnalogIn.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

AnalogIn::AnalogIn() : number(0) {
    // Constructor implementation
}

AnalogIn::AnalogIn(unsigned int n) : number(n) {
    // Constructor implementation
}

unsigned int AnalogIn::getNumber() {
    return number;
}

void AnalogIn::setNumber(unsigned int n) {
    number = n;
}

int AnalogIn::readAdcSample() {
	 std::string path = "/sys/bus/iio/devices/iio:device0/in_voltage" + std::to_string(number) + "_raw";
	 std::ifstream adcFile(path.c_str());
	 if (!adcFile.is_open()) {
		 std::cerr << "Error opening ADC file for reading." << std::endl;
		 return -1;
	 }

 int value;
 adcFile >> value;
 adcFile.close();

 return value;
}

AnalogIn::~AnalogIn() {}

