#include "pwm.h"
#include "led.h"
#include "usart.h"
#include "car.h"

void left_head(void)
{
		GPIO_ResetBits(GPIOC,GPIO_Pin_9);
		GPIO_SetBits(GPIOC,GPIO_Pin_8);
}


void left_back(void)
{
		GPIO_SetBits(GPIOC,GPIO_Pin_9);
		GPIO_ResetBits(GPIOC,GPIO_Pin_8);
}


void right_head(void)
{

		GPIO_SetBits(GPIOC,GPIO_Pin_11);
		GPIO_ResetBits(GPIOC,GPIO_Pin_10);	
}


void right_back(void)
{
		GPIO_SetBits(GPIOC,GPIO_Pin_10);
		GPIO_ResetBits(GPIOC,GPIO_Pin_11);
}


void left_speed(u32 speed)
{
	  TIM_SetCompare1(TIM10,speed);
}


void right_speed(u32 speed)
{
	  TIM_SetCompare1(TIM11,speed);
}


