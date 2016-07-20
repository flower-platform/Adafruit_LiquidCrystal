#ifndef LiquidCrystal_Component_h
#define LiquidCrystal_Component_h

#include "Adafruit_LiquidCrystal.h"

class LiquidCrystalComponent : public Adafruit_LiquidCrystal {
public:
	LiquidCrystalComponent();
	
	void testExtension123();
};

#endif