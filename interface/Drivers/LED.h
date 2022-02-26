#ifndef LED_H_
#define LED_H_

//Initialize the pin as an output pin to connect the led
void LED_vInit(UINT8 port, UINT8 pin);

//Turn on the led connected to the given pin
void LED_vOn(UINT8 port, UINT8 pin);

//Turn off the led connected to the given pin
void LED_vOff(UINT8 port, UINT8 pin);

//Toggle the led connected to the given pin
void LED_vToggle(UINT8 port, UINT8 pin);

//Print 1 when the led is on and 0 when the led is off
UINT8 LED_u8ReadStatus(UINT8 port, UINT8 pin);

#endif /* LED_H_ */
