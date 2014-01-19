#include "FastLED.h"



/*

This example was modified for use with the Team 2 project

Instead iof lights there are buzzery things but they work essentially the 
same way.  The trick is in knowing what hacked LED strip is in use.

See http://citizengadget.com/post/59494035738/led-light-strip-hacked-for-haptic-motors

Thanks Jacob!


*/
// How many leds in your strip?
#define NUM_LEDS 6

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 3
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
  // Uncomment/edit one of the following lines for your leds arrangement.
  // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  // No.  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<NEOPIXEL, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);


  ///       FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);

  // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);

  // Should be this one. http://www.ebay.com/sch/i.html?_trksid=p2047675.m570.l1313.TR11.TRC1.A0.Xws2801+strip&_nkw=ws2801+strip&_sacat=0&_from=R40
  FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

void loop() { 
  // Turn the LED on, then pause
  for(int i=0;i< NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(100);
    // Now turn the LED off, then pause
    leds[i] = CRGB::Black;
    FastLED.show();
    delay(300);
  }
}
