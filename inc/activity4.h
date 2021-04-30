#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__

#include <avr/io.h>

/**
 * @brief initialize UART
 * 
 * @param ubrr_value 
 */

void InitUART(uint16_t ubrr_value);

/**
 * @brief function to write in UART
 * 
 * @param data 
 */

void UARTwrite(char data);

#endif
