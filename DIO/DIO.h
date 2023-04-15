#define PORTA  (u8 *) 0x3B
#ifndef DIO_H
#define DIO_H

#include "DATA_TYPES.h"

#define DDRA   (u8 *) 0x3A
#define PINA   (u8 *) 0x39
#define PORTB  (u8 *) 0x38
#define DDRB   (u8 *) 0x37
#define PINB   (u8 *) 0x36
#define PORTC  (u8 *) 0x35
#define DDRC   (u8 *) 0x34
#define PINC   (u8 *) 0x33
#define PORTD  (u8 *) 0x32
#define DDRD   (u8 *) 0x31
#define PIND   (u8 *) 0x30


volatile u8 * PORT[] = {PORTA, PORTB, PORTC, PORTD};
volatile u8 * DDR[] = {DDRA, DDRB, DDRC, DDRD};
volatile u8 * PIN[] = {PINA, PINB, PINC, PIND};

#endif /* DIO_H */