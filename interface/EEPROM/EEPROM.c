#include <avr/io.h>
#include "std_macros.h"

void EEPROM_vWrite(unsigned short address, unsigned char data) {
	EEAR = address;
	EEDR = data;
	SET_BIT(EECR, EEMWE);
	SET_BIT(EECR, EEWE);
	while (READ_BIT(EECR, EEWE) == 1);
}

unsigned char EEPROM_u8Read(unsigned short address) {
	EEAR = address;
	SET_BIT(EECR, EERE);
	return EEDR;
}

