#include "DIO.h"


void SEG_vInit(UINT8 port) {

	DIO_vSetPinDir(port ,0 ,1);
	DIO_vSetPinDir(port ,1 ,1);
	DIO_vSetPinDir(port ,2 ,1);
	DIO_vSetPinDir(port, 3 ,1);
}

void SEG_vWrite(UINT8 port, UINT8 value) {
	DIO_vWriteLowNibble(port, value);
}
