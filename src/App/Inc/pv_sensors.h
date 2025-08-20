/**************************************************
 *	Filename: pv_sensors.h
 *	Description: Header file for sensors module
 **************************************************
 */

#ifndef PV_SENSORS_H
#define PV_SENSORS_H

#define INTERRUPT_COUNTER 40

#include <stdint.h>

void sensor_init();

/*
Return average humidity from 10 seconds
0.25 seconds interrupt needed
First read can be produced after 10 seconds
Must be invoked when flag from interrupt occures
*/
float get_humidity();

/*
Return average temperature from 10 seconds
0.25 seconds interrupt needed
First read can be produced after 10 seconds
Must be invoked when flag from interrupt occures
*/
float get_temperature();

// adc sensors
int get_pulse( uint16_t* adc_buf, uint16_t arr_size);

// nrf
void send_nrf();

#endif
