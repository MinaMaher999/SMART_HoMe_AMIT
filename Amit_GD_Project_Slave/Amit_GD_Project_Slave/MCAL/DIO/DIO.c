/*
 * DIO.c
 *
 * Created: 10/1/2021 11:08:53 PM
 *  Author: Dell
 */ 
#include "DIO.h"
void pin_Direction(uint8_t PORT,uint8_t PIN,uint8_t DIRECTION)
{ switch (DIRECTION)// checking whether this Pin is input or output 
	{
		case INPUT:
		switch(PORT) // now in input case we will check at which port we are 
		{
			case PORT_A:
			CLR_BIT(DDRA, PIN);// making the Pin given in portA to input
			
			
			break;
			case PORT_B:
			CLR_BIT(DDRB, PIN);// making the Pin given in portB to input
			
			break;
			case PORT_C:
			CLR_BIT(DDRC, PIN);// making the Pin given in portC to input
			
			break;
			case PORT_D:
			CLR_BIT(DDRD,PIN);// making the Pin given in portD to input
			
			break;
		}
		break;
		case OUTPUT:
		switch(PORT)// now in output case we will check at which port we are 
		{
			case PORT_A:
			SET_BIT(DDRA,PIN);// making the Pin given in portA to output
			break;
			case PORT_B:
			SET_BIT(DDRB, PIN);// making the Pin given in portB to output
			break;
			case PORT_C:
			SET_BIT(DDRC, PIN);// making the Pin given in portC to output
			break;
			case PORT_D:
			SET_BIT(DDRD, PIN);// making the Pin given in portD to output
			break;
		}
		break;
	}
}
void set_pin(uint8_t PORT,uint8_t PIN)
{
	switch(PORT)  //we will check at which port we are
	{
		case PORT_A:
		SET_BIT(PORTA,PIN);// setting the pin in PORTA to high
		break;
		case PORT_B:
		SET_BIT(PORTB, PIN);// setting the pin in PORTB to high
		break;
		case PORT_C:
		SET_BIT(PORTC, PIN);// setting the pin in PORTC to high
		break;
		case PORT_D:
		SET_BIT(PORTD, PIN);// setting the pin in PORTD to high
		break;
	}
}
void clear_pin(uint8_t PORT,uint8_t PIN)
{
	switch(PORT) //we will check at which port we are
	{
		case PORT_A:
		CLR_BIT(PORTA,PIN);// setting the pin in PORTA to low
		break;
		case PORT_B:
		CLR_BIT(PORTB, PIN);// setting the pin in PORTB to low
		break;
		case PORT_C:
		CLR_BIT(PORTC, PIN);// setting the pin in PORTC to low
		break;
		case PORT_D:
		CLR_BIT(PORTD, PIN);// setting the pin in PORTD to low
		break;
	}
}
uint8_t get_pin(uint8_t PORT,uint8_t PIN)
{
	switch(PORT) //we will check at which port we are
	{
		case PORT_A:
		 return GET_BIT(PORTA,PIN);//returning value inside this pin in portA
		break;
		case PORT_B:
		 return GET_BIT(PORTB, PIN);//returning value inside this pin in portB
		break;
		case PORT_C:
		 return GET_BIT(PORTC, PIN);//returning value inside this pin in portC
		break;
		case PORT_D:
		 return GET_BIT(PORTD, PIN);//returning value inside this pin in portD
		break;
		default:
		return 0;
	  break;
	}
}
void pull_up(uint8_t PORT,uint8_t PIN)
{ switch(PORT) //we will check at which port we are
	{
		case PORT_A:
		
		SET_BIT(PORTA,PIN);//activate pull up resistor of the given PIN in portA
		
		break;
		case PORT_B:
		
		SET_BIT(PORTB,PIN);//activate pull up resistor of the given PIN in portB
		break;
		case PORT_C:
		
		SET_BIT(PORTC,PIN);//activate pull up resistor of the given PIN in portC
		break;
		case PORT_D:
		
		SET_BIT(PORTD,PIN);//activate pull up resistor of the given PIN in portD
		break;
	}
}