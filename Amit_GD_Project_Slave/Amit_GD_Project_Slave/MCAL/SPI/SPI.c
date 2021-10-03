/*
 * SPI.c
 *
 * Created: 10/2/2021 9:35:36 AM
 *  Author: Dell
 */ 
#include "SPI.h"
#include "ECU.h"

void SPI_SLave_initial()
{
	SET_BIT(DDRB,6);//setting MISO output to the slave
	
	
	CLR_BIT(DDRB,5);//setting MOSI input to the slave
	CLR_BIT(DDRB,7);//setting SCK input to the slave
	CLR_BIT(DDRB,4);//setting SS input to the slave

	CLR_BIT(SPCR,4);//setting to SLAVE SPI
	SPCR = (1<<SPE) | (1<<SPIE);//  enable SPI & setting to SLAVE Interrupt
	 SET_BIT(SREG,7);// enable global interrupt activated
}
ISR(SPI_STC_vect)//what will happen when the interrupt flag is high 
{
	char data= SPDR;
	switch(data)
	{case '0'://data =0 led 1 on
	led_1(ON);break;
	case '1'://data =1 led 2 on
	led_2(ON);break;
	case '2'://data =2 led 1 &2 on
	led_1(ON);led_2(ON);break;
	case '3' : //data =3 led 1&2 off
	led_1(OFF);led_2(OFF);break;
	case '4' ://data =4 led 1 off
	led_1(OFF);break;
	case '5' ://data =5 led 2 off
	led_2(OFF);break;
	}
		
		
		
	}
	
