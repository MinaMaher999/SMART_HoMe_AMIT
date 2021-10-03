/*
 * SERVICES.c
 *
 * Created: 10/2/2021 11:51:54 PM
 *  Author: Dell
 */ 
#include "SERVICES.h"
#include"ECU.h"

#include "SPI.h"
void SMART_HOME_INITIAL(void)
{    ECU_initial();
	 SPI_SLave_initial();
	
	
}