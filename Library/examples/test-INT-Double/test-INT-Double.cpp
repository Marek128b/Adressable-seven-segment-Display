#include <Arduino.h>
#include <addressable7segment.h>

addressableSegment oneWireDisplay(14, 5); // on pin 14, 5 Segments

void setup()
{
    oneWireDisplay.begin();               // sets all pins and initializes the Display
    oneWireDisplay.printInt(123, 0, 150); // Int, starting pos, brightness
    delay(2000);                          // wait 2s
}

void loop()
{
    static double d;
    d += 0.1;                                 // adds 0.1 to data
    oneWireDisplay.printDouble(d, 2, 0, 255); // Double, amount of digits after comma, starting pos, brightness
    delay(100);                               // wait 100ms
}