#include "DIO.h"
#define F_CPU 8000000Ul
#include <util/delay.h>

int main(void) {
	//direction of led pins
	DIO_vSetPinDir('A', 0, 1);
	DIO_vSetPinDir('A', 1, 1);
	DIO_vSetPinDir('A', 2, 1);
	//on and off leds
	DIO_vWritePin('a' , 0, 1);
	_delay_ms(500);
	DIO_vWritePin('a', 0, 0);
	DIO_vWritePin('a', 1, 1);
	_delay_ms(500);
	DIO_vWritePin('a', 1, 0);
	DIO_vWritePin('a', 2, 1);
	_delay_ms(500);
	DIO_vWritePin('a', 2, 0);

	while (1) {

	}
}
