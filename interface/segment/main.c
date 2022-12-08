
#include <util/delay.h>
#include "seven_segment.h"

int main(void) {
	SEG_vInit('D');
	while(1) {
		for(unsigned char i =0;i<=9;i++) {
			SEG_vWrite(i);
			_delay_ms(2000);
		}
	}
}
