/*
 * ECU.c
 *
 * Created: 10/3/2021 12:39:16 AM
 *  Author: Dell
 */ 
#include "ECU.h"
#include "DIO.h"

void ECU_initial()
{
	 pin_Direction(PORT_D,3,OUTPUT);// set the Pin D3 to output
	 pin_Direction(PORT_C,2,OUTPUT);// set the Pin C2 to output
}


void led_1(char  type)
{
	switch(type)// 
	{case ON:
	 set_pin(PORT_D,3);break;//set the pin  D3 to high  
	 case OFF:
	 clear_pin(PORT_D,3);break;//clear the pin D3 to low  
	 
	}
}
void led_2(char  type)
{
	switch(type)
	{case ON:
		set_pin(PORT_C,2);break;//set the pin C2 to high  
		case OFF:
		clear_pin(PORT_C,2);break;//clear the pin C2 to low  
		
	}
}
