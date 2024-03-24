#include "interrupt.h"

int i;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	i++;
	if(htim->Instance == htim1.Instance) {
			if(i == 500) {
         HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5); //LED2
				 i=0;
			}
  }
}