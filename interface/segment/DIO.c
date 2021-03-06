#include <avr/io.h>
#include "std_macros.h"
//pin level
void DIO_vSetPinDir (unsigned char port, unsigned char pin, unsigned char dir) {
	switch (port) {
		case 'A':
		case 'a':
			if (dir == 1) {
				SET_BIT(DDRA, pin);
			} else {
				CLR_BIT(DDRA, pin);
			}
			break;

		case 'B':
		case 'b':
			if (dir == 1) {
				SET_BIT(DDRB, pin);
			} else {
				CLR_BIT(DDRB, pin);
			}
			break;

		case 'C':
		case 'c':
			if (dir == 1) {
				SET_BIT(DDRC, pin);
			} else {
				CLR_BIT(DDRC, pin);
			}
			break;

		case 'D':
		case 'd':
			if (dir == 1) {
				SET_BIT(DDRD, pin);
			} else {
				CLR_BIT(DDRD, pin);
			}
			break;
	}
}

void DIO_vWritePin (unsigned char port, unsigned char pin, unsigned char value) {
	switch (port) {
			case 'A':
			case 'a':
				if (value == 1) {
					SET_BIT(PORTA, pin);
				} else {
					CLR_BIT(PORTA, pin);
				}
				break;

			case 'B':
			case 'b':
				if (value == 1) {
					SET_BIT(PORTB, pin);
				} else {
					CLR_BIT(PORTB, pin);
				}
				break;

			case 'C':
			case 'c':
				if (value == 1) {
					SET_BIT(PORTC, pin);
				} else {
					CLR_BIT(PORTC, pin);
				}
				break;

			case 'D':
			case 'd':
				if (value == 1) {
					SET_BIT(PORTD, pin);
				} else {
					CLR_BIT(PORTD, pin);
				}
				break;
		}
}

void DIO_vTogglePin (unsigned char port, unsigned char pin) {
	switch (port) {
			case 'A':
			case 'a':
				TOG_BIT(PORTA, pin);
				break;

			case 'B':
			case 'b':
				TOG_BIT(PORTB, pin);
				break;

			case 'C':
			case 'c':
				TOG_BIT(PORTC, pin);
				break;

			case 'D':
			case 'd':
				TOG_BIT(PORTD, pin);
				break;
		}
}

unsigned char DIO_u8ReadPin (unsigned char port, unsigned char pin) {
	unsigned char value;
	switch (port) {
			case 'A':
			case 'a':
				value = READ_BIT(PINA, pin);
				break;

			case 'B':
			case 'b':
				value = READ_BIT(PINB, pin);
				break;

			case 'C':
			case 'c':
				value = READ_BIT(PINC, pin);
				break;

			case 'D':
			case 'd':
				value = READ_BIT(PIND, pin);
				break;
		}
	return value;
}

void DIO_vEnablePullUp(unsigned char port, unsigned char pin, unsigned char enable) {
	switch (port) {
	case 'A':
	case 'a':
		if (enable == 1) {
			SET_BIT(PORTA, pin);
		} else {
			CLR_BIT(PORTA, pin);
		}
		break;

	case 'B':
	case 'b':
		if (enable == 1) {
			SET_BIT(PORTB, pin);
		} else {
			CLR_BIT(PORTB, pin);
		}
		break;

	case 'C':
	case 'c':
		if (enable == 1) {
			SET_BIT(PORTC, pin);
		} else {
			CLR_BIT(PORTC, pin);
		}
		break;

	case 'D':
	case 'd':
		if (enable == 1) {
			SET_BIT(PORTD, pin);
		} else {
			CLR_BIT(PORTD, pin);
		}
		break;
	}
}

//port level
void DIO_vSetPortDir(unsigned char port, unsigned char dir) {
	switch (port) {
				case 'A':
				case 'a':
					DDRA = dir;
					break;

				case 'B':
				case 'b':
					DDRB = dir;
					break;

				case 'C':
				case 'c':
					DDRC = dir;
					break;

				case 'D':
				case 'd':
					DDRD = dir;
					break;
			}
}

void DIO_vWritePort (unsigned char port, unsigned char value) {
	switch (port) {
				case 'A':
				case 'a':
					PORTA = value;
					break;

				case 'B':
				case 'b':
					PORTB = value;
					break;

				case 'C':
				case 'c':
					PORTC = value;
					break;

				case 'D':
				case 'd':
					PORTD = value;
					break;
			}
}

void DIO_vTogglePort(unsigned char port) {
	switch (port) {
				case 'A':
				case 'a':
					PORTA =~ PORTA;
					break;

				case 'B':
				case 'b':
					PORTB =~ PORTB;
					break;

				case 'C':
				case 'c':
					PORTC =~ PORTC;
					break;

				case 'D':
				case 'd':
					PORTD =~ PORTD;
					break;
			}
}

unsigned char DIO_u8ReadPort(unsigned char port) {
	unsigned char value;
	switch (port) {
				case 'A':
				case 'a':
					value = PINA;
					break;

				case 'B':
				case 'b':
					value = PINB;
					break;

				case 'C':
				case 'c':
					value = PINC;
					break;

				case 'D':
				case 'd':
					value = PIND;
					break;
			}
	return value;
}


