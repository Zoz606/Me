#ifndef EEPROM_H_
#define EEPROM_H_

void EEPROM_vWrite(UINT16 address, UINT8 data);
UINT8 EEPROM_u8Read(UINT16 address);

#endif /* EEPROM_H_ */
