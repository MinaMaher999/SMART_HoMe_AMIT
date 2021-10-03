/*
 * DIO.h
 *
 * Created: 10/1/2021 11:08:32 PM
 *  Author: Dell
 */ 

#include "CPU.h"
#ifndef DIO_H_
#define DIO_H_




//identifing directions
#define  INPUT  0
#define  OUTPUT  1


// identify needed ports to be used in switch cases
typedef enum
{
	PORT_A=0,
	PORT_B=1 ,
	PORT_C=2 ,
	PORT_D=3 
}DIO;








void pin_Direction(uint8_t PORT,uint8_t PIN,uint8_t DIRECTION);// Identify the pin whether it is input or output 
void set_pin(uint8_t PORT,uint8_t PIN);// setting the value of the Pin to 1
void clear_pin(uint8_t PORT,uint8_t PIN);// clearing the value of the pin to 0
uint8_t get_pin(uint8_t PORT,uint8_t PIN);// returning the value of the pin 
void pull_up(uint8_t PORT,uint8_t PIN);// activation of pull up resistor of the needed input pins 







#endif /* DIO_H_ */