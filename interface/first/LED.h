#ifndef LED_H_
#define LED_H_

//Initialize the pin as an output pin to connect the led
void LED_vInit(unsigned char port, unsigned char pin);

//Turn on the led connected to the given pin
void LED_vOn(unsigned char port, unsigned char pin);

//Turn off the led connected to the given pin
void LED_vOff(unsigned char port, unsigned char pin);

//Toggle the led connected to the given pin
void LED_vToggle(unsigned char port, unsigned char pin);

//Print 1 when the led is on and 0 when the led is off
unsigned char LED_u8ReadStatus(unsigned char port, unsigned char pin);

#endif /* LED_H_ */
