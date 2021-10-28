#include "DIO.h"


void SEG_vInit(unsigned char port) {

	DIO_vSetPinDir(port ,0 ,1);
	DIO_vSetPinDir(port ,1 ,1);
	DIO_vSetPinDir(port ,2 ,1);
	DIO_vSetPinDir(port, 3 ,1);
}

void SEG_vWrite(unsigned char port, unsigned char value) {
	DIO_vWriteLowNibble(port, value);
}
