#include <avr/io.h>
#include "std_macros.h"

void EEPROM_vWrite(UINT16 address, UINT8 data) {
	EEAR = address;
	EEDR = data;
	SET_BIT(EECR, EEMWE);
	SET_BIT(EECR, EEWE);
	while (READ_BIT(EECR, EEWE) == 1);
}

UINT8 EEPROM_u8Read(UINT16 address) {
	EEAR = address;
	SET_BIT(EECR, EERE);
	return EEDR;
}

