#ifndef __LED_H
#define __LED_H
#include "usart.h"


void ledshow(uint8_t led,uint8_t mode);
void Key_scan(void);
void lcd_show(void);
void RX(void);
void MY_UART_RxCpltCallback(UART_HandleTypeDef *huart);

#endif
