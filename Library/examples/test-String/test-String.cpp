#include <Arduino.h>
#include <addressable7segment.h>

addressableSegment oneWireDisplay(14, 5); // on pin 14, 5 Segments

void setup()
{
    oneWireDisplay.begin();                     // sets all pins and initializes the Display
    oneWireDisplay.printString("TEST", 0, 150); // String, starting pos, brightness
    delay(2000);                                // wait 2s
}

void loop()
{
}