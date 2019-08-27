/**
  ******************************************************************************
  * @file     LED.c
  * @author   ( Name ) , Calixto Firmware Team 
  * @version  V1.0.0
  * @date     27-August-2019
  * @brief    This file provides functions to manage the following 
  *      
  *           - function to turn on and off led
  *        
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
	 #include <middleware.h>
	 
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
void LED_BLINK(uint32_t);

/* Private macro -------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
	
	 
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  function to switch leds on and off
  * @param  data to send
  * @retval None
  */

void LED_BLINK(uint32_t delay_value)
{
   ALL_LED_ON;
	 PORTB_LED_ON;
	 HAL_Delay(delay_value);
   ALL_LED_OFF;
	 PORTB_LED_OFF;
	 HAL_Delay(delay_value);
}

/*................... End of function can_tx_data()...........................*/ 

/************** (C) COPYRIGHT 2015 Calixto Systems Pvt Ltd *****END OF FILE****/
