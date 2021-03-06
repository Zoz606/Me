#include "DIO.h"
#include "LCD.h"
#include <util/delay.h>
#include "LCD_congif.h"

#define START 4
#define END 7
//initialize
void LCD_vInit() {

	_delay_ms(200);
#if defined eight
	DIO_vSetPortDir(DATA_PORT, 0xff);
	DIO_vSetPinDir(ENABLE_PORT, EN, 1);
	DIO_vSetPinDir(ENABLE_PORT, RS, 1);
	DIO_vSetPinDir(ENABLE_PORT, RW, 1);
	LCD_vSendCmd(EIGHT_BIT);
	_delay_ms(1);
	LCD_vSendCmd( CURSOR_ON_DISPLAY_ON);
	_delay_ms(1);
	LCD_vSendCmd(CLR_SCREEN);
	_delay_ms(10);
	LCD_vSendCmd(ENTRY_MODE);
	_delay_ms(1);

#elif defined four
	for (unsigned char i = START; i <= END; i++) {
		dio_vSitPinDir(DATA_PORT, i, 1)
	}
	DIO_vSetPinDir(ENABLE_PORT, EN, 1);
	DIO_vSetPinDir(ENABLE_PORT, RS, 1);
	DIO_vSetPinDir(ENABLE_PORT, RW, 1);
	LCD_vSendCmd(RETURN_HOME);
	_delay_ms(10);
	LCD_vSendCmd(FOUR_BIT);
	_delay_ms(1);
	LCD_vSendCmd(CURSOR_ON_DISPLAY_ON);
	_delay_ms(1);
	LCD_vSendCmd(CLR_SCREEN);
	_delay_ms(10);
	LCD_vSendCmd(ENTRY_MODE);
	_delay_ms(1);
#endif
}


//Enable
void enable() {
	DIO_vWritePin(ENABLE_PORT, EN, 1);
	_delay_ms(2);
	DIO_vWritePin(ENABLE_PORT, EN, 0);
	_delay_ms(2);
}

//Send a character to the data DDRAM
void LCD_vSendChar(unsigned char data) {
	DIO_vWritePort(DATA_PORT, data);
	DIO_vWritePin(ENABLE_PORT, RS, 1);
	enable();
}

//Send a command to the command register
void LCD_vSendCmd (unsigned char cmd) {
	DIO_vWritePort(DATA_PORT, cmd);
	DIO_vWritePin(ENABLE_PORT, RS, 0);
	enable();
	_delay_ms(10);
}

//Move cursor
void LCD_vMoveCursor (unsigned char row, unsigned char col) {
	unsigned char data;
	if ((row > 2) || (row < 1) || (col > 16) || (col < 1)){
		data = 0x80;
	}
	else if (row == 1) {
		data = 0x80 + col - 1;
	}
	else if (row == 2) {

	}
}

