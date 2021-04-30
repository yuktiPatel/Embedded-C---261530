#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__

#include <avr/io.h>

#define OCCUPANCY_PIN PD4
#define CRO_DISPLAYPIN PD6

#define TIMER_COUNTER_CONTROL_REGISTER1A TCCR1A
#define TIMER_COUNTER_CONTROL_REGISTER1B TCCR1B
#define WAVEGENERATION_MODE0 WGM10
#define WAVEGENERATION_MODE1 WGM11
#define NONINVERTING_MODE COM1A1
#define OUTPUT_COMPAIR_REGISTERA OCR1A

/**
 * @brief initialize PWM
 * 
 */


void InitPWM(void);

/**
 * @brief to out PWM wave
 * 
 * @param value 
 * @return uint16_t 
 */

uint16_t OutPWM (uint16_t value);

#endif
