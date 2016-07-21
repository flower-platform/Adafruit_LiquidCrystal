#include "Arduino.h"
#include "LiquidCrystalComponent.h"

/**
 * Please note these values are temporarily hardcoded for easier usage.
 */
LiquidCrystalComponent::LiquidCrystalComponent():Adafruit_LiquidCrystal(8, 9, 4, 5, 6, 7) {
}
LiquidCrystalComponent::LiquidCrystalComponent(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3):Adafruit_LiquidCrystal(rs, enable, d0, d1, d2, d3) {
};

void LiquidCrystalComponent::setup() {
  // set up the LCD's number of columns and rows:
  begin(16, 2);
}

void LiquidCrystalComponent::loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  setCursor(0, 0);

  // Print a message to the LCD.
  print("hello, world 565!");
  
  delay(10);
}