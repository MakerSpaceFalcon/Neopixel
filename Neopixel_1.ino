#include <Adafruit_NeoPixel.h>

int Pin = 3;            //DIN pin of Neopixel
int LEDcount = 8;       //Number of LEDs/ pixels

Adafruit_NeoPixel strip(LEDcount, Pin, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();      //Enable Neopixel strip
  strip.show();       //Initialize all pixels as off
}

void loop() {
  strip.setPixelColor (0 , 255, 0, 0);    //Set pixel 0 colour Red
  strip.show();                           //Update the Neopixel Strip
}
