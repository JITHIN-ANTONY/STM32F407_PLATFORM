 /**
  ******************************************************************************
  * @file     hal.h
  * @author   ( Name ) , Calixto Firmware Team 
  * @version  V1.0.0
  * @date     03-August-2015
  * @brief    This file contains all the functions prototypes for the HAL functions.
  ******************************************************************************
  * 
  * <h2><center>&copy; COPYRIGHT 2015 Calixto Systems Pvt Ltd</center></h2>
  ******************************************************************************  
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
   #ifndef __HAL_H
   #define __HAL_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm32f4xx_it.h"

		 
	 
/* Macros ------------------------------------------------------------------*/
#define GREEN_LED_Pin GPIO_PIN_12
#define GREEN_LED_GPIO_Port GPIOD
#define ORANGE_LED_Pin GPIO_PIN_13
#define ORANGE_LED_GPIO_Port GPIOD
#define RED_LED_Pin GPIO_PIN_14
#define RED_LED_GPIO_Port GPIOD
#define BLUE_LED_Pin GPIO_PIN_15
#define BLUE_LED_GPIO_Port GPIOD

/* Exported constants --------------------------------------------------------*/
  

/* Exported variables --------------------------------------------------------*/


/* Exported functions ------------------------------------------------------- */

	 
/* Exported functions --------------------------------------------------------*/	 
	 
	 
	void SystemClock_Config(void);
	void HaL_GPIO_Init(void);
	void Error_Handler(void);
	

	 
#endif /* __HAL_H */

/************** (C) COPYRIGHT 2015 Calixto Systems Pvt Ltd *****END OF FILE****/
