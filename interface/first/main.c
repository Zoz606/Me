#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "std_macros.h"

int main(void) {
	SET_BIT(DDRA, 1);
	while(1) {
		PORTA ^= (1<<2);
		_delay_ms(1000);
		}

}
