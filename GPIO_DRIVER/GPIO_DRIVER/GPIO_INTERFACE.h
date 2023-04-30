#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#include "DATA_TYPES.h"

enum {GPIOA, GPIOB, GPIOC, GPIOD};
enum {GPIO0, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5, GPIO6, GPIO7};

#define GPIO_MODE_INPUT 0
#define GPIO_MODE_OUTPUT 1

#define GPIO_PUPD_PULLUP 1
#define GPIO_PUPD_NONE 0

void gpio_set_pin_mode(u8 port, u8 pin, u8 mode, u8 pull_up_down);
void gpio_set_pin(u8 port, u8 pin);
void gpio_clear_pin(u8 port, u8 pin);
void gpio_toggle_pin(u8 port, u8 pin);
u8   gpio_get_pin(u8 port, u8 pin);
void gpio_write_port(u8 port, u8 value);

#endif /* GPIO_INTERFACE_H */