/*
 * @Author: TonyJia
 * @Date: 2020-07-09 17:20:26
 * @LastEditTime: 2020-07-10 09:58:05
 * @LastEditors: TonyJia
 * @Description: 
 */
#include "led.h"

void led_init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE); //打开外设时钟

    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_13;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC, &GPIO_InitStruct);
}

