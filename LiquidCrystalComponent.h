#ifndef LiquidCrystal_Component_h
#define LiquidCrystal_Component_h

#include "Adafruit_LiquidCrystal.h"

class LiquidCrystalComponent : public Adafruit_LiquidCrystal {
public:
	LiquidCrystalComponent();
	LiquidCrystalComponent(uint8_t rs, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3);
	
	void setup();
	void loop();
};

#endif