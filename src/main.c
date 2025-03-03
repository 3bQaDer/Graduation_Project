/*
 * main.c
 *
 *  Created on: Jun 24, 2023
 *      Author: mamdo
 */

/*LIB include */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/*include upper layers*/
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "USART_interface.h"
#include "I2C_interface.h"
#include "ESP_interface.h"
#include "MAX30102_interface.h"

#define SLAVE_ADD		0x68

u8 data[32];

void I2C1_PinsInit(void)
{
	/* configuring B6 == SCL & B7 == SDA as AF open drain */
	MGPIO_vidSetPinDir(MGPIOB,MGPIO_PIN06,MGPIO_MODE_2MHz_OUT_AF_OD);
	MGPIO_vidSetPinDir(MGPIOB,MGPIO_PIN07,MGPIO_MODE_2MHz_OUT_AF_OD);
}

void I2C1_Init(void)
{
	/* Enabling I2C1 clock */
	RCC_VoidEnableClock(RCC_APB1 , 21);

	/* Enabling I2C1 */
	I2C_voidPeripheralControl(I2C1, I2C_ENABLE);

	/* Initializing I2C1 */
	I2C_voidInit(I2C1);

}


 int main ()
 {
	 RCC_voidInitSysClock();
	 RCC_VoidEnableClock(RCC_APB2 , 2);
	 RCC_VoidEnableClock(RCC_APB2 , 14);
	 /*A9 = Tx out 50 Mhz */
	 MGPIO_vidSetPinDir(MGPIOA,MGPIO_PIN09,MGPIO_MODE_50MHz_OUT_AF_PP);
	 /*A10 = Rx input Floating */
	 MGPIO_vidSetPinDir(MGPIOA,MGPIO_PIN10,MGPIO_MODE_IN_FLOATING);
	 MUSART1_voidInit();
	 ESP_voidInit();
	 while(1)
	 {

	 }

	return 0 ;
 }


