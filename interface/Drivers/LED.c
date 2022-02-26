#include "DIO.h"

void LED_vInit(UINT8 port, UINT8 pin) {
	DIO_vSetPinDir(port, pin, 1);
}

void LED_vOn(UINT8 port, UINT8 pin) {
	DIO_vWritePin(port, pin, 1);
}

void LED_vOff(UINT8 port, UINT8 pin) {
	DIO_vWritePin(port, pin, 0);
}

void LED_vToggle(UINT8 port, UINT8 pin) {
	DIO_vTogglePin(port, pin);
}

UINT8 LED_u8ReadStatus(UINT8 port, UINT8 pin) {
	return DIO_u8ReadPin(port, pin);
}

