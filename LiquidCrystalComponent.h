#ifndef LiquidCrystal_Component_h
#define LiquidCrystal_Component_h

#include "Adafruit_LiquidCrystal.h"

/*
 * A light wrapper over Adafruit's LCD component.
 *
 * @flower { isComponent=true } 
 */
class LiquidCrystalComponent : public Adafruit_LiquidCrystal {
	public:

		/*
		 * @flower { constructorVariant="Direct wiring" }
		 * @flowerChildParameter { ref="fourbitmode", defaultValue=true }
		 * @flowerChildParameter { ref="rw", defaultValue=255 }
		 */
		LiquidCrystalComponent(bool fourbitmode, uint8_t rs, uint8_t rw, uint8_t enable,
			     uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
			     uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7);
	
		/*
		 * @flower { constructorVariant="I2C wiring" }
		 */
		LiquidCrystalComponent(uint8_t i2cAddr);
	
		/*
		 * @flower { constructorVariant="SPI wiring" }
		 */
		LiquidCrystalComponent(uint8_t data, uint8_t clock, uint8_t latch);
};

LiquidCrystalComponent::LiquidCrystalComponent(uint8_t i2cAddr):Adafruit_LiquidCrystal(i2cAddr) {
}

LiquidCrystalComponent::LiquidCrystalComponent(
				bool fourbitmode, uint8_t rs, uint8_t rw, uint8_t enable,
				uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
			    uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7
):Adafruit_LiquidCrystal(rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7) {
	init(fourbitmode ? 1 : 0, rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7);
}

LiquidCrystalComponent::LiquidCrystalComponent(uint8_t data, uint8_t clock, uint8_t latch):Adafruit_LiquidCrystal(data, clock, latch) {
}

#endif