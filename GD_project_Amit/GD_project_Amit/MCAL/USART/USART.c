/*
 * USART.c
 *
 * Created: 10/2/2021 12:38:16 AM
 *  Author: Dell
 */ 
#include "USART.h"
#include "SPI.h"
void USART_initial()
{    SET_BIT(SREG,7);// enable global interrupt activated
	//using UBR(9600) 
	UBRRH=0;
	UBRRL=103;
	CLR_BIT(UCSRA,U2X);// using normal speed mode activated
	CLR_BIT(UCSRA,MPCM);//using single processor activated
	
	UCSRB=0;
	SET_BIT(UCSRB,RXCIE);//Receive complete interrupt enable activated
	SET_BIT(UCSRB,TXCIE);//Transmit complete interrupt enable activated
	SET_BIT(UCSRB,UDRIE);//DARA register empty interrupt enable activated
	SET_BIT(UCSRB,RXEN);//Receive enable activated
	SET_BIT(UCSRB,TXEN);//Transmit enable activated
	
	UCSRC = (1<< URSEL) | (1<< UCSZ0) | (1<< UCSZ1) ;// using data 8 bits & selecting UCSRC to be used
	
	
	
	}

ISR(USART_RXC_vect)// when the USART interrupt come it will send all the data to the slave with SPI 
{  
	  SPI_SEND(UDR);
}