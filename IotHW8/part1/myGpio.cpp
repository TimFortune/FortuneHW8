// myGpio.cpp
#include "myGpio.h"

MYGPIO::MYGPIO(int number) {
	  // Implementation of constructor
 }

int MYGPIO::getNumber(){
	//Implementation of constructor
}

void MYGPIO::setDirection(GPIO_DIRECTION dir) {
	// Implementation of setDirection()
 }

 GPIO_DIRECTION MYGPIO::getDirection() {
     	 // Implementation of getDire
 }

int MYGPIO::setValue(GPIO_VALUE val) {
	    // Implementation of setValue()
 }
	  
GPIO_VALUE MYGPIO::getValue() {
     // Implementation of getValue()
 }
	  
void MYGPIO::toggleOutput() {
     	// Implementation of toggleOutput()
 }
	    
int MYGPIO::write(string path, string filename, string value) {
	    // Implementation of write() for stri
 }
	  
int MYGPIO::write(string path, string filename, int value) {
	// Implementation of write() for integers
 }

string MYGPIO::read(string path, string filename) {
	 // Implementation of read()
 }
	
MYGPIO::~MYGPIO(){
	// Implementation of destruc
 }
