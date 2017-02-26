/*
 * General.h
 *
 * Created: 23.05.2016 11:36:57
 *  Author: Admin
 */ 


#ifndef GENERAL_ATMEGA2560_H_
#define GENERAL_ATMEGA2560_H_

//constants
#define F_OSC			16000000

//DDRx
#define DDR_IIC			DDRD
#define DDR_BT_STATE	DDRA

//PORTx
#define PORT_IIC		PORTD
#define PORT_BT_STATE	PORTA

//PINx
#define PIN_BT			PINA

//Pins
#define PIN_IIC_SCL		PIN0
#define PIN_IIC_SDA		PIN1
#define PIN_BT_STATE1	DD0
#define PIN_BT_STATE2	DD1

//Debugs
//#define DEBUG_IIC					1
//#define DEBUG_MPU9150				1
//#define DEBUG_MADGWICK			1
//#define DEBUG_UNIVERSALREMOTE		1

#endif /* GENERAL_ATMEGA2560_H_ */