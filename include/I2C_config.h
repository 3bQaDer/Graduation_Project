/***********************************************************************/
/***********************************************************************/
/********************		Author   : Mamdouh Azmi		****************/
/********************       Date     : 10/3/2022        ****************/
/********************		SWC      : MCAL_Blue_Pill   ****************/
/********************		SWC_TYPE : I2C_config.h    ****************/
/********************		Version  : 04      	        ****************/
/***********************************************************************/
/***********************************************************************/

#ifndef I2C_CONFIG_H_
#define I2C_CONFIG_H_

#define SYSTEM_CLK_MHZ		8
#define AHB_PRE				1
#define AHB1_PRE			4

/* Configuring I2C1 */
#define I2C1_ACKControl  	I2C_ACK_ENABLE
#define I2C1_FMDutyCycle 	I2C_FM_DUTY_2
#define I2C1_SCLSpeed 		100000
#define I2C1_DeviceAddress 	0x7E



#endif /* I2C_CONFIG_H_ */
