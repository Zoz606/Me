#ifndef EEPROM_H_
#define EEPROM_H_

void EEPROM_vWrite(unsigned short address, unsigned char data);
unsigned char EEPROM_u8Read(unsigned short address);

#endif /* EEPROM_H_ */