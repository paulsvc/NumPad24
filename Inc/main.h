/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define row5_Pin GPIO_PIN_13
#define row5_GPIO_Port GPIOC
#define row4_Pin GPIO_PIN_14
#define row4_GPIO_Port GPIOC
#define row3_Pin GPIO_PIN_15
#define row3_GPIO_Port GPIOC
#define row2_Pin GPIO_PIN_0
#define row2_GPIO_Port GPIOF
#define row1_Pin GPIO_PIN_1
#define row1_GPIO_Port GPIOF
#define col3_Pin GPIO_PIN_2
#define col3_GPIO_Port GPIOA
#define row0_Pin GPIO_PIN_3
#define row0_GPIO_Port GPIOA
#define LED_DATA_EN_Pin GPIO_PIN_4
#define LED_DATA_EN_GPIO_Port GPIOA
#define SD_CS_Pin GPIO_PIN_0
#define SD_CS_GPIO_Port GPIOB
#define CARD_DETECT_Pin GPIO_PIN_1
#define CARD_DETECT_GPIO_Port GPIOB
#define CARD_DETECT_EXTI_IRQn EXTI0_1_IRQn
#define col2_Pin GPIO_PIN_2
#define col2_GPIO_Port GPIOB
#define col1_Pin GPIO_PIN_10
#define col1_GPIO_Port GPIOB
#define col0_Pin GPIO_PIN_11
#define col0_GPIO_Port GPIOB
#define POT_SLIDER_Pin GPIO_PIN_14
#define POT_SLIDER_GPIO_Port GPIOB
#define ENC_SWITCH_Pin GPIO_PIN_15
#define ENC_SWITCH_GPIO_Port GPIOB
#define BUTTON_1_Pin GPIO_PIN_8
#define BUTTON_1_GPIO_Port GPIOB
#define BUTTON_2_Pin GPIO_PIN_9
#define BUTTON_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
