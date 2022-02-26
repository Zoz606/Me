#include "DIO.h"
#include "LCD.h"
#include <util/delay.h>


int main() {
	LCD_vInit();
	LCD_vSendChar('A');
	_delay_ms(1000);
	LCD_vSendChar('b');
	_delay_ms(1000);
	LCD_vSendChar('c');
	_delay_ms(1000);
	LCD_vSendChar('d');
	_delay_ms(1000);
	while(1) {

	}
}
