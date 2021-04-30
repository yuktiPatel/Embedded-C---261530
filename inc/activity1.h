#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__

#include <avr/io.h>

#define LED_PORT PORTB    /* LED Port Number */
#define LED_PIN  PB0 

#define LED_ON 	LED_PORT |= (1 << LED_PIN)			/* LED ON */
#define LED_OFF	LED_PORT &=~ (1 << LED_PIN)			/* LED OFF */

#define SEAT_HEATER_PORT PORTD

#define SEAT PD0 
#define HEATER_BUTTON PD1

//#define SEAT_OCCUPIED_HEATER_ON ((!((PIND) & (1 << SEAT))) == 1 && (!((PIND) & (1 << HEATER_BUTTON))) == 1) 
/**
 * @brief delay funtion
 * 
 */

#define delay _delay_ms(1000)

/**
 * @brief pheripherals initialization
 * 
 */

void peripherals_init(void);

/**
 * @brief funtion to check if seat is occupied and heater button is pressed
 * 
 * @return uint8_t 1-if seat occupied and heater button is pressed and 0-else
 */

uint8_t seatOccupiedAndHeaterOn(void);

#endif
