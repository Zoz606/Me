#include "EEPROM.h"

int main(void)
{
	EEPROM_vWrite(0x0063, 0x52);
    while(1)
    {

    }
}
