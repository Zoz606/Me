#define F_CPU 8000000UL
#include <util/delay.h>
#include "BUTTON.h"
#include "LED.h"

int main(void) {
	BUTTON_vInit('A', 0);
	LED_vInit('D', 2);
	unsigned char returnVal;
	unsigned char prevVal = 0;
	while(1) {
		returnVal = BUTTON_u8Read('A', 0);
		if ((returnVal == 1) && (prevVal == 0)) {
			LED_vToggle('D', 2);
			prevVal = 1;
		} else if(returnVal == 0) {
			prevVal = 0;

		}
	}
}
