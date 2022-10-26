
#include <Adafruit_NeoPixel.h>

#define PIN        25 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 16 // Popular NeoPixel ring size


Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 50 

void setup() {


  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}


void loop() {
  pixels.clear();

  int r = random(10,150); 
  int g = random(10,150);
  int b = random(10,150);
  
  for(int i=0; i<NUMPIXELS; i++) { 

    
    pixels.setPixelColor(i, pixels.Color(r, g, b));

    pixels.show();   

    delay(DELAYVAL);
  }
}
