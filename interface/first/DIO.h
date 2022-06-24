#ifndef DIO_H_
#define DIO_H_
//pin level

//To set the direction of the given pin in the given port (0 = input, 1 = output)
void DIO_vSetPinDir (unsigned char port, unsigned char pin, unsigned char dir);

//To set the value of the given pin in the given port (0 = low, 1 = high)
void DIO_vWritePin (unsigned char port, unsigned char pin, unsigned char value);

//To reverse the value of a given pin in the given port
void DIO_vTogglePin (unsigned char port, unsigned char pin);

//Returns 0 if the value of the given pin is low and 1 if the value is high
unsigned char DIO_u8ReadPin (unsigned char port, unsigned char pin);

//To enable the internal pull up
void DIO_vEnablePullUp(unsigned char port, unsigned char pin, unsigned char enable);


//port level

//to set the direction of the entire port
void DIO_vSetPortDir(unsigned char port, unsigned char dir);

//Write the value to all port pins
void DIO_vWritePort (unsigned char port, unsigned char value);

//Reverse the value of all the pins in a specific port
void DIO_vTogglePort(unsigned char port);

//Read the value of the port
unsigned char DIO_u8ReadPort(unsigned char port);

//Writes 1 on the low 4 pins of a port and 0 on the high 4 pins
void DIO_vWriteLowNibble(unsigned char port, unsigned char value);

//Writes 0 on the low 4 pins of a port and 1 on the high 4 pins
void DIO_vWriteHighNibble(unsigned char port, unsigned char value);
#endif /* DIO_H_ */
