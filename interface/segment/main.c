
#include <util/delay.h>
#include "DIO.h"
#include "typedef keywords.h"

int main(void) {
	UINT8 numbers[] = {
			0x3f, //0
			0x06, //1
			0x5b, //2
			0x4f, //3
			0x66, //4
			0x6d, //5
			0x7d, //6
			0x07, //7
			0x7f, //8
			0x6f, //9
			0x77, //A
			0x7f, //B
			0x39, //C
			0x3f, //D
			0x79, //E
			0x71  //F
	};
	DIO_vSetPortDir('D', 0xff);
	int i;
	while(1) {
		for (i = 0; i <= 15; i++) {
		DIO_vWritePort('d', numbers[i]);
			_delay_ms(500);
		}
	}
}
