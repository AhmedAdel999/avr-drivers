#ifndef LCD_INTERFACE.h
#define LCD_INTEFACE.h

#define u8 unsigned char

#define OUTPUT_PORT A
#define CONFIG_PORT B

#define EN_PIN 0
#define RS_PIN 1

 
void LCD_INITIALIZE();
void LCD_SEND_CHAR(u8);
void LCD_SEND_CMD(u8);
void LCD_SEND_STRING(char*);


#endif /* LCD_INTERFACE.h */