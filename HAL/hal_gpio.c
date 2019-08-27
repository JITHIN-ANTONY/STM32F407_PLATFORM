/**
  ******************************************************************************
  * @file     hal_gpio.c
  * @author   ( Name ) , Calixto Firmware Team 
  * @version  V1.0.0
  * @date     27-August-2019
  * @brief    This file provides functions to manage the following 
  *      
  *           - hardware initialization of gpios
  *
  *  @verbatim
  *    
  *          ===================================================================
  *                             Working of chip/peripheral/Algorithm
  *          ===================================================================
  *          
  *          Heading No.1
  *          =============  
  *          Explanation
  *
  *          Heading No.2
  *          =============  
  *          Explanation
  
  *          ===================================================================      
  *                              How to use this driver / source
  *          ===================================================================          
  *            - 
  *            - 
  *            - 
  *            - 
  * 
  *  @endverbatim
  *    
  ******************************************************************************
  * 
  * <h2><center>&copy; COPYRIGHT 2015 Calixto Systems Pvt Ltd</center></h2>
  ******************************************************************************  
  */ 


/* Includes ------------------------------------------------------------------*/
	 #include "hal.h"
	
/* Private functions ---------------------------------------------------------*/


/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
void HaL_GPIO_Init(void) // user defined  "H a L"
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
		__HAL_RCC_GPIOD_CLK_ENABLE();
	  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : GREEN_LED_Pin ORANGE_LED_Pin RED_LED_Pin BLUE_LED_Pin */
  GPIO_InitStruct.Pin = GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);



  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : GREEN_LED_Pin ORANGE_LED_Pin RED_LED_Pin BLUE_LED_Pin */
  GPIO_InitStruct.Pin = GREEN_LED_Pin|ORANGE_LED_Pin|RED_LED_Pin|BLUE_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}


/* USER CODE BEGIN 4 */

/* USER CODE END 4 */


void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}
/* End of Function gpio_init ********************************************************/

/************** (C) COPYRIGHT 2015 Calixto Systems Pvt Ltd *****END OF FILE****/
