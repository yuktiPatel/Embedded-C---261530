#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

#include <avr/io.h>

#define ADC_MUX_REGISTER ADMUX/* ADC MULTIPLEXER REGISTER  */
#define ADC_CONTROL_STATUSREGISTER ADCSRA/* ADC CONTROL AND STATUS REGISTER  */
#define ADC_REF_VOLTAGE REFS0/* ADC REFERENCE VOLTAGE BIT  */
#define ADC_ENABLE ADEN/* ADC ENABLE BIT  */
#define ADC_PRESCALER ADPS0/* ADC PRESCALER BIT  */
#define ADC_START_CONVERSION ADSC/* ADC START CONVERSION BIT  */
#define ADC_INTERRUPTFLAG ADIF/* ADC INTERUPT FLAG BIT  */

/**
 * @brief to read ADC
 * 
 * @param ch 
 * @return uint16_t 
 */

uint16_t ReadADC(uint8_t ch);

/**
 * @brief to initialize ADC
 * 
 */

void InitADC();

#endif
