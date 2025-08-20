/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32l0xx_hal.h"

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
#define NRF24_CSN_Pin GPIO_PIN_1
#define NRF24_CSN_GPIO_Port GPIOA
#define USER_LED_Pin GPIO_PIN_8
#define USER_LED_GPIO_Port GPIOA
#define USER_BUTTON_Pin GPIO_PIN_9
#define USER_BUTTON_GPIO_Port GPIOA
#define I2C_EN_Pin GPIO_PIN_10
#define I2C_EN_GPIO_Port GPIOA
#define GPS_EN_Pin GPIO_PIN_11
#define GPS_EN_GPIO_Port GPIOA
#define ADC_EN_Pin GPIO_PIN_12
#define ADC_EN_GPIO_Port GPIOA
#define HEATER_EN_Pin GPIO_PIN_15
#define HEATER_EN_GPIO_Port GPIOA
#define NRF24_CE_Pin GPIO_PIN_4
#define NRF24_CE_GPIO_Port GPIOB
#define NRF24_IRQ_Pin GPIO_PIN_5
#define NRF24_IRQ_GPIO_Port GPIOB
#define NRF24_IRQ_EXTI_IRQn EXTI4_15_IRQn

/* USER CODE BEGIN Private defines */

#define HEART_BEAT_ARRAY_SIZE 255

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
