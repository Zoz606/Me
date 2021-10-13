
#define F_CPU 8000000UL
#include <util/delay.h>
#include "BUTTON.h"
#include "LED.h"

int main(void) {
	BUTTON_vInit('A', 2);
	LED_vInit('D', 2);
	while(1) {
		if (BUTTON_u8Read('A', 2) == 1) {
			LED_vToggle('D', 2);
		}
		_delay_ms(250);
	}
}
