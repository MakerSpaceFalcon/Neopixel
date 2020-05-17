#include <Adafruit_NeoPixel.h>

int Pin = 3;            //DIN pin of Neopixel
int LEDcount = 8;       //Number of LEDs pixels

Adafruit_NeoPixel strip(LEDcount, Pin, NEO_GRB + NEO_KHZ800);

uint32_t red = strip.Color(255, 0, 0);
uint32_t green = strip.Color(0, 255, 0);
uint32_t blue = strip.Color(0, 0, 255);


void setup() {
  strip.begin();      //Enable Neopixel strip
  strip.show();       //Initialize all pixels as off
}

void loop() {

  strip.fill(red, 0, 8);    //fill 8 pixels with red colour starting from pixel 0
  strip.show();             //Update Neopixel strip
  delay (500);              //Wait half a second

  strip.fill(blue, 0, 8);   //fill 8 pixels with blue colour starting from pixel 0
  strip.show();             //Update Neopixel strip
  delay (500);              //Wait half a second

  strip.fill(green, 0, 8);  //fill 8 pixels with green colour starting from pixel 0
  strip.show();             //Update Neopixel strip
  delay (500);              //Wait half a second

}
