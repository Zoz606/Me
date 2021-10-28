#include <util/delay.h>
#include"BCD7segment.h"

int main(void) {
	SEG_vInit('D');
	unsigned char i;
	while(1) {
		for (i = 0; i <= 9; i++) {
			SEG_vWrite('D', i);
			_delay_ms(1000);
		}

	}
}
