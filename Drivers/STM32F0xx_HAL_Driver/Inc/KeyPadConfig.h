#ifndef	_KEYPADCONFIG_H
#define	_KEYPADCONFIG_H
#include "gpio.h"

#define           _KEYPAD_DEBOUNCE_TIME_MS        20
#define           _KEYPAD_USE_FREERTOS            0

const GPIO_TypeDef* _KEYPAD_COLUMN_GPIO_PORT[] =
{
  GPIOB,
  GPIOB,
  GPIOB,
  GPIOA
};

const uint16_t _KEYPAD_COLUMN_GPIO_PIN[] =
{
  GPIO_PIN_11,
  GPIO_PIN_10,
  GPIO_PIN_2,
  GPIO_PIN_2
};

const GPIO_TypeDef* _KEYPAD_ROW_GPIO_PORT[] =
{
  GPIOA,
  GPIOF,
  GPIOF,
  GPIOC,
	GPIOC,
	GPIOC
};

const uint16_t _KEYPAD_ROW_GPIO_PIN[] =
{
  GPIO_PIN_3,
  GPIO_PIN_1,
  GPIO_PIN_0,
  GPIO_PIN_15,
	GPIO_PIN_14,
	GPIO_PIN_13
};

#endif
