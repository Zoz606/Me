#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
#define SIZE 7

int main(void) {
	signed char i;
	for (i = 0; i <= SIZE; ++i) {
		LED_vInit('d', i);
	}
	while (1) {
		for (i = 0; i <= SIZE; ++i) {
			LED_vOn('d', i);
			_delay_ms(1000);
		}
		for (i = SIZE; i >= 0; i--) {
			LED_vOff('d', i);
			_delay_ms(1000);
		}
	}

}
