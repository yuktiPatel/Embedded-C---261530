#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#include "activity2.h"

void InitADC()
{
    ADC_MUX_REGISTER|=(1<<ADC_REF_VOLTAGE);
    ADC_CONTROL_STATUSREGISTER|=(1<<ADC_ENABLE)|(7<<ADC_PRESCALER);
}

uint16_t ReadADC(uint8_t ch)
{
    //channel must be within 0-7 i.e between 000 to 111
    ADC_MUX_REGISTER&=0xf8;
    ch=ch&0b00000111;
    ADC_MUX_REGISTER|=ch;

    ADC_CONTROL_STATUSREGISTER|=(1<<ADC_START_CONVERSION);

    while(!(ADC_CONTROL_STATUSREGISTER & (1<<ADC_INTERRUPTFLAG)));

    ADC_CONTROL_STATUSREGISTER|=(1<<ADC_INTERRUPTFLAG);

    return(ADC);
}
