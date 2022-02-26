#include "DIO.h"

void BUTTON_vInit (UINT8 port, UINT8 pin) {
	DIO_vSetPinDir(port, pin, 0);
}

UINT8 BUTTON_u8Read(UINT8 port, UINT8 pin) {
	return DIO_u8ReadPin(port, pin);
}
