
#!/bin/bash

# Compile AnalogIn.cpp and test_analog.cpp
g++ -c AnalogIn.cpp -o AnalogIn.o
g++ -c test_analog.cpp -o test_analog.o

# Link the object files to create the executable
g++ AnalogIn.o test_analog.o -o test_analog

echo "Complete"
