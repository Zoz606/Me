#define F_CPU 8000000UL
#include <util/delay.h>
#include "BUTTON.h"
#include "LED.h"

int main(void) {
	BUTTON_vInit('A', 2);
	LED_vInit('D', 2);
	unsigned char x;
	while(1) {
		x = BUTTON_u8Read('A', 2);
		if (x == 1) {
			LED_vToggle('D', 2);
		}

		_delay_ms(250);
	}
}
