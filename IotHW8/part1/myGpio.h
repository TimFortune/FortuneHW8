// myGpio.h
#ifndef MYGPIO_H
#define MYGPIO_H

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

// Enumeration for GPIO direction
  enum GPIO_DIRECTION {    
         INPUT,
         OUTPUT  
 };

// Enumeration for GPIO value
 enum GPIO_VALUE {
     LOW = 0,
     HIGH = 1
 };

  class MYGPIO {
     private:
    	 int number;
         string name, path;
         int write(string path, string filename, string value);
         int write(string path, string filename, int value);
         string read(string path, string filename);
         ofstream stream;

     public:
         MYGPIO(int number); // constructor
         int getNumber();
         void setDirection(GPIO_DIRECTION dir);
         GPIO_DIRECTION getDirection();
         int setValue(GPIO_VALUE val);
         GPIO_VALUE getValue();
         void toggleOutput();
         ~MYGPIO(); // destructor
  };

  #endif  // MYGPIO_H
         
