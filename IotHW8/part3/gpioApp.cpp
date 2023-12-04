// gpioApp.cpp
// CPE 422 problem 3
// To run this code:
// ./build_gpio
// ./gpioApp

#include <iostream>
#include <unistd.h>
#include "AnalogIn.h"
#include "GPIO.h"
#include "myLED.h"

using namespace exploringBB;
using namespace std;

void turnOnUserLEDs(LED leds[]) {
    cout << "Turning on user LEDs number 1 and 3" << endl;
    leds[0].turnOn();
    leds[2].turnOn();
    cout << endl;
}

void flashUserLED(LED &led) {
    cout << "Flashing user LED" << endl;
    led.flash("100");
    cout << endl;
    sleep(0.5); // Hold for 500 ms
}

void readAndDisplayTemperature(AnalogIn &temperatureSensor) {
    cout << "Reading temperature sensor and displaying value" << endl;
    float temp = temperatureSensor.readAdcSample();
    float fahr = 32 + ((temp * 9) / 5); // Convert deg. C to deg. F
    cout << "Temperature is " << temp << "°C (" << fahr << "°F)" << endl;
    cout << endl;
    sleep(0.5); // Hold for 500 ms
}

void readPushButton(GPIO &pushButton) {
    cout << "Reading push button on p8.16" << endl;
    pushButton.setDirection(INPUT);
    cout << "The value of the input is: " << pushButton.getValue() << endl;
    cout << endl;
}

void controlExternalLED(GPIO &externalLED, GPIO &pushButton) {
    cout << "If push button is pressed, turning on external LED on p9.12" << endl;
    externalLED.setDirection(OUTPUT);

    if (pushButton.getValue() == 0) {
        cout << "Push button is pressed, turning on LED" << endl;
        externalLED.setValue(HIGH);
    } else {
        cout << "Push button is NOT pressed, LED stays off" << endl;
        externalLED.setValue(LOW);
    }
    cout << endl;
}

int main() {
    LED leds[] = {LED(0), LED(1), LED(2), LED(3)};
    AnalogIn temperatureSensor(0);
    GPIO pushButton(46), externalLED(60);

    turnOnUserLEDs(leds);
    flashUserLED(leds[1]);
    readAndDisplayTemperature(temperatureSensor);
    readPushButton(pushButton);
    controlExternalLED(externalLED, pushButton);

    return 0;
}
