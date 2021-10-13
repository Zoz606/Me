#include "DIO.h"

void BUTTON_vInit (unsigned char port, unsigned char pin) {
	DIO_vSetPinDir(port, pin, 0);
}

unsigned char BUTTON_u8Read(unsigned char port, unsigned char pin) {
	return DIO_u8ReadPin(port, pin);
}
