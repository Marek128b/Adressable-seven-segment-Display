#include <Arduino.h>
#include <addressable7segment.h>

addressableSegment oneWireDisplay(14, 5);

void setup()
{
    oneWireDisplay.begin();
    oneWireDisplay.printInt(123, 0, 150);
    delay(2000);
}

void loop()
{
    static double d;
    d += 0.1;
    oneWireDisplay.printDouble(d, 2, 0, 255);
    delay(100);
}