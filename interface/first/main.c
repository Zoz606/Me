#define F_CPU 8000000UL
#include <util/delay.h>
#include "BUTTON.h"
#include "LED.h"

int main(void) {
	BUTTON_vInit('A', 0);
	LED_vInit('D', 1);
	unsigned char x;
	while(1) {
		x = BUTTON_vRead('A', 0);
		if (x == 1) {
			LED_vOn('D', 1);
		} else {
			LED_vOff('D', 1);
		}

	}
}
