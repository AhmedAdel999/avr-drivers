#include "LCD_INTERFACE.h"
#include <util/delay.h>

#include "GPOI_INTERFACE.h"

void LCD_INITALIZE()
{
	GPIO_WRITE_PORT(OUTPUT_PORT, 0xFF);
	GPIO_WRITE_PORT(CONFIG_PORT, 0xFF);
	
	GPIO_CLEAR_PIN(CONFIG_PORT, EN_PIN);
	LCD_SEND_CMD(0x38);
	LCD_SEND_CMD(0x28);
	LCD_SEND_CMD(0x0E);
	LCD_SEND_CMD(0x01);
	_delay_ms(2);
}

void LCD_SEND_CMD(u8 cmd)
{
	GPIO_CLEAR_PIN(CONFIG_PORT, RS_PIN);
	
	GPIO_WRITE_PORT(OUTPUT_PORT, cmd);
	GPIO_SET_PIN(CONFIG_PORT, EN_PIN);
	_delay_ms(1);
	GPIO_CLEAR_PIN(CONFIG_PORT, EN_PIN);
}

void LCD_SEND_CHAR(u8 character)
{
	GPIO_SET_PIN(CONFIG_PORT, RS_PIN);
	
	GPIO_WRITE_PORT(character, character);
	GPIO_SET_PIN(CONFIG_PORT, EN_PIN);
	_delay_ms(1);
	GPIO_CLEAR_PIN(CONFIG_PORT, EN_PIN);
}

LCD_SEND_STRING(char *string)
{
	while (*string != '\0')
	{
		LCD_SEND_CHAR(*string);
		string++;
	}
}