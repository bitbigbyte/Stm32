#include "pwm.h"

int pwm1 = 2000;//2000£¬6000,10000
int pwm2 = 2400;//2400£¬6400£¬10400
int pwm3 = 2000;

void generate_pwm(void) {
	__HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, pwm1);  //PA0£¬Õ¼¿ÕÎª0-80000
	__HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, pwm2); 	//PA1
	__HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, pwm3); 	//PA2
	HAL_Delay(1);
}