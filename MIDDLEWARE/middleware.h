/**
  ******************************************************************************
  * @file     midddleware.h
  * @author   ( Name ) , Calixto Firmware Team 
  * @version  V1.0.0
  * @date     03-August-2015
  * @brief    This file contains all the functions prototypes for the middleware 
	*						functions.
  ******************************************************************************
  * 
  * <h2><center>&copy; COPYRIGHT 2015 Calixto Systems Pvt Ltd</center></h2>
  ******************************************************************************  
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
   #ifndef __MIDDLEWARE_H
   #define __MIDDLEWARE_H

/* Includes ------------------------------------------------------------------*/
   #include "hal.h" 
	 
/* Exported macro -------------------------------------------------------------*/
   #define ALL_LED_ON HAL_GPIO_WritePin(RED_LED_GPIO_Port, GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin, GPIO_PIN_SET)
	 #define ALL_LED_OFF HAL_GPIO_WritePin(RED_LED_GPIO_Port, GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin, GPIO_PIN_RESET)
	 #define GREEN_LED_ON HAL_GPIO_WritePin(RED_LED_GPIO_Port, GREEN_LED_Pin, GPIO_PIN_SET)
	 #define RED_LED_ON HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, GPIO_PIN_SET)
	 #define ORANGE_LED_ON HAL_GPIO_WritePin(RED_LED_GPIO_Port, ORANGE_LED_Pin, GPIO_PIN_SET)
	 #define BLUE_LED_ON HAL_GPIO_WritePin(RED_LED_GPIO_Port, BLUE_LED_Pin, GPIO_PIN_SET)
	 #define GREEN_LED_OFF HAL_GPIO_WritePin(RED_LED_GPIO_Port, GREEN_LED_Pin, GPIO_PIN_RESET)
	 #define RED_LED_OFF HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, GPIO_PIN_RESET)
	 #define ORANGE_LED_OFF HAL_GPIO_WritePin(RED_LED_GPIO_Port, ORANGE_LED_Pin, GPIO_PIN_RESET)
	 #define BLUE_LED_OFF HAL_GPIO_WritePin(RED_LED_GPIO_Port, BLUE_LED_Pin, GPIO_PIN_RESET)

   #define PORTB_LED_ON HAL_GPIO_WritePin(GPIOB, GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin, GPIO_PIN_SET)
	 #define PORTB_LED_OFF HAL_GPIO_WritePin(GPIOB, GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin, GPIO_PIN_RESET)
/* Exported variables ---------------------------------------------------------*/


/* Exported functions --------------------------------------------------------*/
  extern void Board_init(void);
  extern void LED_BLINK(uint32_t);
 
#endif /* __MIDDLEWARE_H */

/************** (C) COPYRIGHT 2015 Calixto Systems Pvt Ltd *****END OF FILE****/
