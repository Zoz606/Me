
#include "BUTTON.h"
#include "LED.h"
#include <util/delay.h>

int main(void) {
	char flag = 0;
	BUTTON_vInit('A', 0);
	LED_vInit('D', 0);
	while (1) {
		if (BUTTON_u8Read('A', 0) == 1 && flag == 0) {
			LED_vToggle('D', 0);
			flag = 1;
		} else if (BUTTON_u8Read('A', 0) == 0) {
			flag = 0;
		}
		_delay_ms(250);
	}
}
