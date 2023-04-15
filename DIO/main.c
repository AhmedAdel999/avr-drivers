#define F_CPU 1000000UL

#include <util/delay.h>
#include "DIO_INTERFACE.h"

int main(void)
{
    DIO_SET_PIN_DIRECTION(A, pin0, OUT);

    
    while(1) 
    {
        DIO_SET_PIN(A, pin0);
        _delay_ms(500);
		DIO_CLEAR_PIN(A, pin0)
    }
}