// test_analog.cpp
// Short description: This application tests the AnalogIn class by reading an ADC sample from a temperature sensor.
// Command line arguments: None
// Example invocation: ./test_analog

#include "AnalogIn.h"
#include <iostream>

int main() {
    // Instantiate AnalogIn object with number zero
    AnalogIn analogSensor(0);


         unsigned int num = analogInput.getNumber();
	 std::cout << "Analog Input Number: " << num << std::endl;
	    
	 // Call readAdcSample() and print the result
	 int adcValue = analogInput.readAdcSample();
	 std::cout << "ADC Sample Value: " << adcValue << std::endl;
	    

    return 0;
}
