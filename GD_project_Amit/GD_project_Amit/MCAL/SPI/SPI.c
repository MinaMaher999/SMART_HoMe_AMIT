/*
 * SPI.c
 *
 * Created: 10/2/2021 9:35:36 AM
 *  Author: Dell
 */ 
#include "SPI.h"

void SPI_Master_initial()
{
	CLR_BIT(DDRB,6);//setting MISO input to the master
	  
	
	SET_BIT(DDRB,5);//setting MOSI output to the master 
	SET_BIT(DDRB,7);//setting SCK output to the master
	SET_BIT(DDRB,4);//setting SS output to the master
	
		SPCR = (1<<SPE) | (1<<MSTR);//  enable SPI & setting to Master SPI

	
	
}

void SPI_SEND(char data)
{
	SPDR=data;
	while(!(GET_BIT(SPSR,SPIF))){}
}