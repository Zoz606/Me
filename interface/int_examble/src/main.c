#include <util/delay.h>
#include <avr/interrupt.h>
#include "std_macros.h"
#include "DIO.h"


int main(void) {
	DIO_vSetPinDir('D', 7, 1); //initialize led
	DIO_vSetPinDir('D', 2, 0); //initialize button
	sei(); //open global interrupt bit
	SET_BIT(MCUCR, ISC00); //select rising edge
	SET_BIT(MCUCR, ISC01);
	GICR |= (1 << INT0);
	while (1) {
		DIO_vWritePin('D', 7, 0);
	}
}

ISR(INT0_vect) {
	DIO_vWritePin('D', 7, 1); // light up led
	_delay_ms(1000);
}
