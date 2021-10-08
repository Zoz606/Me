#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"

int main(void) {
	LED_vInit('D', 0);
	while(1) {
		LED_vToggle('D', 0);
		_delay_ms(1000);
	}
}
