#include <avr/io.h>
#include "DIO.h"

#define cc

void SEG_vInit(unsigned char port) {
	DIO_vSetPortDir(port, 0xff);
}

void SEG_vWrite(unsigned char port, unsigned char value) {
#if defined cc
	unsigned char numbers[] = {
			0x3f, //0
			0x06, //1
			0x5b, //2
			0x4f, //3
			0x66, //4
			0x6d, //5
			0x7d, //6
			0x47, //7
			0x7f, //8
			0x6f  //9
	};
		};
#elif defined ca
	unsigned char numbers[]= {
			~0x3f, //0
			~0x06, //1
			~0x5b, //2
			~0x4f, //3
			~0x66, //4
			~0x6d, //5
			~0x7d, //6
			~0x07, //7
			~0x7f, //8
			~0x6f  //9
	};
#endif


	DIO_vWritePort('D', numbers[value]);
}
