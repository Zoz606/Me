#include <avr/interrupt.h>
#include <util/delay.h>
#include "DIO.h"
#include "std_macros.h"


int main(void) {
	//initiate three leds
	DIO_vSetPinDir('a', 0, 1);
	DIO_vSetPinDir('a', 1, 1);
	DIO_vSetPinDir('a', 2, 1);

	sei(); // Call the isr
	SET_BIT(GICR, INT0); //enable external int0
	SET_BIT(GICR, INT1); //enable external int1
	SET_BIT(GICR, INT2); //enable external int2
	// Set rising edge for external int0
	SET_BIT(MCUCR, ISC00);
	SET_BIT(MCUCR, ISC01);

	// Set rising edge for external int1
	SET_BIT(MCUCR, ISC10);
	SET_BIT(MCUCR, ISC11);

	// Set rising edge for external int2
	SET_BIT(MCUCSR, ISC2);

	while (1) {
		DIO_vWritePin('a', 0, 0);
		DIO_vWritePin('a', 1, 0);
		DIO_vWritePin('a', 2, 0);
	}
}

ISR(INT0_vect) {
	DIO_vWritePin('a', 0, 1);
	_delay_ms(2000);
}

ISR(INT1_vect) {
	DIO_vWritePin('a', 1, 1);
	_delay_ms(2000);
}

ISR(INT2_vect) {
	DIO_vWritePin('a', 2, 1);
	_delay_ms(2000);
}
