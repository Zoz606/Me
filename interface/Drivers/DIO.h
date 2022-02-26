#ifndef DIO_H_
#define DIO_H_
//pin level

//To set the direction of the given pin in the given port (0 = input, 1 = output)
void DIO_vSetPinDir (UINT8 port, UINT8 pin, UINT8 dir);

//To set the value of the given pin in the given port (0 = low, 1 = high)
void DIO_vWritePin (UINT8 port, UINT8 pin, UINT8 value);

//To reverse the value of a given pin in the given port
void DIO_vTogglePin (UINT8 port, UINT8 pin);

//Returns 0 if the value of the given pin is low and 1 if the value is high
UINT8 DIO_u8ReadPin (UINT8 port, UINT8 pin);

//To enable the internal pull up
void DIO_vEnablePullUp(UINT8 port, UINT8 pin, UINT8 enable);


//port level

//to set the direction of the entire port
void DIO_vSetPortDir(UINT8 port, UINT8 dir);

//Write the value to all port pins
void DIO_vWritePort (UINT8 port, UINT8 value);

//Reverse the value of all the pins in a specific port
void DIO_vTogglePort(UINT8 port);

//Read the value of the port
UINT8 DIO_u8ReadPort(UINT8 port);

void DIO_vWriteLowNibble(UINT8 port, UINT8 value);

void DIO_vWriteHighNibble(UINT8 port, UINT8 value);
#endif /* DIO_H_ */
