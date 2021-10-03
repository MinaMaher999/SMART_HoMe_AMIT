/*
 * SPI.h
 *
 * Created: 10/2/2021 9:35:20 AM
 *  Author: Dell
 */ 

#include "CPU.h"
#ifndef SPI_H_
#define SPI_H_


void SPI_Master_initial(void);// setting MC to Master in SPI protocol

void SPI_SEND(char data);// sending data inside (data) to the Slave MC with SPI






#endif /* SPI_H_ */