/*
 * SERVICES.c
 *
 * Created: 10/2/2021 11:51:54 PM
 *  Author: Dell
 */ 
#include "SERVICES.h"
#include "USART.h"
#include "SPI.h"
void SMART_HOME_INITIAL(void)
{   SPI_Master_initial();
	USART_initial();
	
}