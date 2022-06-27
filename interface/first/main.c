#include <util/delay.h>
#include "DIO.h"


int main(void) {
	DIO_vSetPortDir('A', 1);
	while(1) {
		DIO_vWriteLowNibble('A', 1);
		}

}
