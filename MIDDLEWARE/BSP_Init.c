/**
  ******************************************************************************
  * @file     BSP_Init.c
  * @author   ( Name ) , Calixto Firmware Team 
  * @version  V1.0.0
  * @date     27-August-2019
  * @brief    This file provides functions to manage the following 
  *      
  *           - function to initalise all 
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
void Board_init(void);

/* Private macro -------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
	
	 
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  function to send data thrugh CAN.
  * @param  data to send
  * @retval None
  */
void Board_init(void)
{
	HAL_Init();
  SystemClock_Config();
	HaL_GPIO_Init();

	
}
/*................... End of function can_tx_data()...........................*/ 

/************** (C) COPYRIGHT 2015 Calixto Systems Pvt Ltd *****END OF FILE****/
