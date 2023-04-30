#define F_CPU 1000000UL

#include "util/delay.h"
#include "GPIO_INTERFACE.h"

int main(void)
{
	gpio_set_pin_mode(GPIOB, GPIO7, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE);
    while(1) 
    {
		gpio_toggle_pin(GPIOB, GPIO7);
		_delay_ms(500);
    }
}