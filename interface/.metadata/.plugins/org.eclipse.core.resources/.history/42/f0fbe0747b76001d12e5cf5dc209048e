
#include <util/delay.h>
#include "DIO.h"
#include "typedef keywords.h"

int main(void) {
	UINT8 numbers[] = {};
	DIO_vSetPortDir('D', 0xff);
	int i;
	while(1) {
		for (i = 0; i <= 15; i++) {
		DIO_vWritePort('d', numbers[i]);
			_delay_ms(500);
		}
	}
}
