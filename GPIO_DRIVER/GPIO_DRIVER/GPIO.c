#include "GPIO_INTERFACE.h"
#include "GPIO.h"

void gpio_set_pin_mode(u8 port, u8 pin, u8 mode, u8 pull_up_down)
{
		switch (mode)
		{
			case GPIO_MODE_OUTPUT:
			*DDR[port] |= 1 << pin;
			break;
			case GPIO_MODE_INPUT:
			*DDR[port] &= ~(1 << pin);
			if (pull_up_down == GPIO_PUPD_PULLUP)
			{
				*SPECIAL_FUNCTION_REGISTER &= ~(1 << 2);
				*PORT[port] |= 1 << pin;
			}
			break;
		}
}

void gpio_set_pin(u8 port, u8 pin)
{
	*PORT[port] |= (1 << pin);
}

void gpio_clear_pin(u8 port, u8 pin)
{
	*PORT[pin] &= ~(1 << pin);
}

void gpio_toggle_pin(u8 port, u8 pin)
{
	*PORT[port] ^= 1 << pin;
}

u8 gpio_get_pin(u8 port, u8 pin)
{
	return ((*PIN[port]) & (1 << pin)) >> pin;
}

void gpio_write_port(u8 port, u8 value)
{
	*PORT[port] = value;
}