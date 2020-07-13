/*** 
 * @Author: TonyJia
 * @Date: 2020-07-09 17:20:08
 * @LastEditTime: 2020-07-10 10:17:49
 * @LastEditors: TonyJia
 * @Description: 
 */
#ifndef _LED_H
#define _LED_H

#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"

#define LED_ON(GPIOx,GPIO_Pin)  GPIOx->BSRR = GPIO_Pin;
#define LED_OFF(GPIOx,GPIO_Pin)  GPIOx->BRR = GPIO_Pin;

#endif // !_LED_H
