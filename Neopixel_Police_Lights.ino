#include <Adafruit_NeoPixel.h>
int neoPixelPin = 3;
int LEDs = 8;

Adafruit_NeoPixel strip(LEDs, neoPixelPin, NEO_GRB + NEO_KHZ800);


void setup() {

  strip.begin();
}

void loop() {

  
   uint32_t red = strip.Color(255, 0, 0);
   uint32_t blue = strip.Color(0, 0, 255);

   
   // First Effect
   for(int a=0; a<5; a++) {
      strip.fill(red, 0, 8);
      strip.show();  
      delay (500);

      strip.fill(blue, 0, 8);
      strip.show(); 
      delay (500);
       a+1;
   }

   //Second Effect
   for(int a=0; a<20; a++) {
    strip.fill(red, 0, 4);
    strip.fill(blue, 4, 4);
    strip.show();
    delay (200);
    
    strip.fill(blue, 0, 4);
    strip.fill(red, 4, 4);
    strip.show();
    delay (200);
    a+1;
   }

   //Third Effect
   for(int a=0; a<5; a++) {
    strip.fill(red, 0, 8);
    strip.show();
    delay (500);
    strip.fill(blue, 0, 8);
    strip.show();
    delay (500);
    a+1;
   }

   // Forth Effect
   for(int a=0; a<20; a++) {
    strip.fill(red, 0, 2);
    strip.fill(blue, 2, 2);
    strip.fill(red, 4, 2);
    strip.fill(blue, 6, 2);
    strip.show();
    delay (200);
    
    strip.fill(blue, 0, 2);
    strip.fill(red, 2, 2);
    strip.fill(blue, 4, 2);
    strip.fill(red, 6, 2);
    strip.show();
    delay (200);
    a+1;
   }

}
