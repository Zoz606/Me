#include "DIO.h"

void LED_vInit(unsigned char port, unsigned char pin) {
	DIO_vSetPinDir(port, pin, 1);
}

void LED_vOn(unsigned char port, unsigned char pin) {
	DIO_vWritePin(port, pin, 1);
}

void LED_vOff(unsigned char port, unsigned char pin) {
	DIO_vWritePin(port, pin, 0);
}

void LED_vToggle(unsigned char port, unsigned char pin) {
	DIO_vTogglePin(port, pin);
}

unsigned char LED_u8ReadStatus(unsigned char port, unsigned char pin) {
	return DIO_u8ReadPin(port, pin);
}

