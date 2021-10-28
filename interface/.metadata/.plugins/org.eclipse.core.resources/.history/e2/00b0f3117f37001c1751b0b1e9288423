#include <util/delay.h>
#include "DIO.h"
#include <avr/io.h>

int main(void) {
	DIO_vSetPinDir('D', 0, 1);
	 while (1) {
		 DIO_vWritePin('D', 0, 1);
		 _delay_ms(2000);
		 DIO_vWritePin('D', 0, 0);
		 _delay_ms(2000);
	 }
 }
