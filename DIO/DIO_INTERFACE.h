#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "DATA_TYPES.h"

enum{A, B, C, D};
enum{pin0, pin1, pin2, pin3, pin4, pin5, pin6, pin7};

#define IN 0
#define OUT 1

void DIO_SET_PIN_DIRECTION(u8 port, u8 pin, u8 direction);
void DIO_SET_PIN(u8 port, u8 pin);
void DIO_CLEAR_PIN(u8 port, u8 pin);
void DIO_TOGGLE_PIN(u8 port, u8 pin);
u8 DIO_GET_PIN(u8 port, u8 pin);

#endif /* DIO_INTERFACE_H */