#include <Adafruit_CircuitPlayground.h>

const int DELAY = 10;
const int lowDel = 5;
const int highDel = 250;

const int RANDLOW = 30;
const int RANDHI = 256;

void setup()
{
  CircuitPlayground.begin(); 
  randomSeed(analogRead(0));
}
 
void loop()
{ 
    for (int light = 0; light < 10; light ++)
    {
      CircuitPlayground.setPixelColor(light, random(RANDLOW,RANDHI), random(RANDLOW,RANDHI), random(RANDLOW, RANDHI));
    }
    delay(random(lowDel,highDel)); 
}
