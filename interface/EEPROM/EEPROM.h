#ifndef EEPROM_H_
#define EEPROM_H_
//To write one byte to the given address
void EEPROM_vWrite(unsigned short address, unsigned char data);

//Read one byte to the given address
unsigned char EEPROM_u8Read(unsigned short address);

#endif /* EEPROM_H_ */
