#ifndef LCD_H_
#define LCD_H_
#include "LCD_congif.h"
#define CLR_SCREEN 0x01 //clear screen command
#define CURSOR_ON_DISPLAY_ON 0x0e //cursor and display on command
#define RETURN_HOME 0x02 //Return home command
#define ENTRY_MODE 0x06 //entry mode command

#if defined four
#define FOUR_BIT 0x28
#elif defined eight
#define EIGHT_BIT 0x38 //
#endif

#define DATA_PORT 'A' //the port connected to the data or command pins of the LCD
#define ENABLE_PORT 'B' //the port that is connected to the enable, read&write and register select pins

#define EN 0 //enable pin
#define RS 1 //register select pin
#define RW 2 //Read & write pin

//initialize
void LCD_vInit();
//Initialize the LCD
void enable();
//Send a character to the data DDRAM
void LCD_vSendChar(unsigned char data);
//Send a command to the command register
void LCD_vSendCmd (unsigned char cmd);
#endif /* LCD_H_ */
