#ifndef BUTTON_H_
#define BUTTON_H_
//Initializing the pin connected to the button as an input
void BUTTON_vInit (UINT8 port, UINT8 pin);

//Read the value in the pin register to make sure is the button closed or not
UINT8 BUTTON_u8Read(UINT8 port, UINT8 pin);


#endif /* BUTTON_H_ */
