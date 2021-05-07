/*
 * sensor.c
 *
 *  Created on: Mar 18, 2021
 *      Author: Numan
 */

#include "stm32f4xx_hal.h"
void led_driver_init(void)
{
	RCC->AHB1ENR |= (1<<3);

	GPIOD->MODER &= ~(1<<27);
	GPIOD->MODER |= (1<<26);

	GPIOD->MODER &= ~(1<<25);
	GPIOD->MODER |= (1<<24);

	GPIOD->MODER &= ~(1<<29);
	GPIOD->MODER |= (1<<28);

	GPIOD->MODER &= ~(1<<31);
	GPIOD->MODER |= (1<<30);

	GPIOD->OTYPER &= ~(1<<12);
	GPIOD->OTYPER &= ~(1<<13);
	GPIOD->OTYPER &= ~(1<<14);
	GPIOD->OTYPER &= ~(1<<15);

	GPIOD->OSPEEDR &= ~(1<<27);
	GPIOD->OSPEEDR |= (1<<26);

	GPIOD->OSPEEDR &= ~(1<<25);
	GPIOD->OSPEEDR |= (1<<24);

	GPIOD->OSPEEDR &= ~(1<<29);
	GPIOD->OSPEEDR |= (1<<28);

	GPIOD->OSPEEDR &= ~(1<<31);
	GPIOD->OSPEEDR |= (1<<30);
}
void led_driver_on(void)
{
 GPIOD->BSRR=(1<<12);
 GPIOD->BSRR=(1<<13);
 GPIOD->BSRR=(1<<14);
 GPIOD->BSRR=(1<<15);
}
void led_driver_off(void)
{
 GPIOD->BSRR=(1<<28);
 GPIOD->BSRR=(1<<29);
 GPIOD->BSRR=(1<<30);
 GPIOD->BSRR=(1<<31);
}

