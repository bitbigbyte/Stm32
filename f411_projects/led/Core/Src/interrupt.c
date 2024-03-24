#include "interrupt.h"

int i;
char data[500];

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	i++;
	if(htim->Instance == htim1.Instance) {
			if(i == 500) {
         HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5); //LED2
				 i=0;
			}
  }
}
                                             
void USAR_UART_IDLECallback(UART_HandleTypeDef *huart)
{
   HAL_UART_DMAStop(&huart2);                                                  
   uint8_t length  = BUF_SIZE - __HAL_DMA_GET_COUNTER(&hdma_usart2_rx);
	 pwm1 = atoi((char*)buf);
	sprintf(data, "Receive data: %spwm1: 2000 - 10000\n\n", buf);	
   HAL_UART_Transmit(&huart2, (uint8_t*)data, strlen(data),0xff);                     
   memset(buf, 0, length);                                            
   length = 0;
   HAL_UART_Receive_DMA(&huart2, buf, BUF_SIZE);                    
}
