#include <util/delay.h>
#include "LED.h"

int main(void) {
	LED_vInit('A', 0);
	LED_vInit('A', 1);
	while(1){
		LED_vOff('A', 0);
		LED_vOff('A', 1);
		_delay_ms(1000);
		LED_vToggle('A',0);
		_delay_ms(1000);
		LED_vToggle('A', 0);
		LED_vToggle('A', 1);
		_delay_ms(1000);
		LED_vToggle('A', 0);
		_delay_ms(1000);
	}
}
