/**************************************************
 *	Filename: MAX30102.h
 *	Description: Header file for pulsoximeter
 **************************************************
 */

#ifndef INC_MAX30102S_H_
#define INC_MAX30102S_H_

#include "main.h"

#define MAX30102_ADDRESS          0x57 << 1
#define REG_INTR_ENABLE_1         0x02
#define REG_INTR_ENABLE_2         0x03
#define REG_FIFO_WR_PTR           0x04
#define REG_OVF_COUNTER           0x05
#define REG_FIFO_RD_PTR           0x06
#define REG_FIFO_DATA             0x07
#define REG_FIFO_CONFIG           0x08
#define REG_MODE_CONFIG           0x09
#define REG_SPO2_CONFIG           0x0A
#define REG_LED1_PA               0x0C
#define REG_LED2_PA               0x0D

#define MODE_HEART_RATE           0x02
#define BUFFER_SIZE 100
#define THRESHOLD 5000 //

//#define BUFFER_SIZE 100
#define MA_FILTER_SIZE 5

void MAX30102_Init(void);

uint32_t MovingAverage(uint32_t new_value);

void MAX30102_ReadFIFO(uint32_t *red_led);

float CalculateHeartRate(void);

#endif
