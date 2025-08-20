/*
 * AHT20.h
 *
 *  Created on: Apr 4, 2024
 *      Author: kuba
 */

#ifndef INC_AHT20_H_
#define INC_AHT20_H_

#include "i2c.h"
#include "usart.h"
#include <string.h>
#include <stdio.h>

#define AHT20_ADDR (0x38 << 1) // the sensor address is in 7-bit format and needs to be converted to 8-bit
#define AHT20_READ_ADDR ((0x38 << 1) | 0x01) // bit[0] set to 1 indicates reading mode

HAL_StatusTypeDef AHT20_Master_Transmit(uint8_t *data, uint16_t size);

HAL_StatusTypeDef AHT20_Master_Receive(uint8_t *data, uint16_t size);

HAL_StatusTypeDef AHT20_Write_Reg(uint8_t reg, uint8_t write_value);

uint8_t AHT20_Read_Reg(uint8_t reg);

void AHT20_Init();

void AHT20_Read(volatile float *Temp, volatile float *Hum);

#endif /* INC_AHT20_H_ */
