#ifndef DIO_H_
#define DIO_H_
//pin level
void DIO_vSetPinDir (unsigned char port, unsigned char pin, unsigned char dir);
void DIO_vWritePin (unsigned char port, unsigned char pin, unsigned char value);
void DIO_vTogglePin (unsigned char port, unsigned char pin);
unsigned char DIO_u8ReadPin (unsigned char port, unsigned char pin);
//port level
void DIO_vSetPortDir(unsigned char port, unsigned char dir);
void DIO_vWritePort (unsigned char port, unsigned char value);
void DIO_vTogglePort(unsigned char port);
unsigned char DIO_u8ReadPort(unsigned char port);
#endif /* DIO_H_ */
