#include <util/delay.h>
#include <avr/io.h>
#include "std_macros.h"

int main(void) {
	SET_BIT(DDRA, 0);
	while(1) {
		TOG_BIT(PORTA, 0);
		_delay_ms(2000);
		}

}
