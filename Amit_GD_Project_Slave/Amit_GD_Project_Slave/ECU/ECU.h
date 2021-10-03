/*
 * ECU.h
 *
 * Created: 10/3/2021 12:39:00 AM
 *  Author: Dell
 */ 

#include "CPU.h"
#ifndef ECU_H_
#define ECU_H_
// defining the types (ON/OFF) to be used as constant numbers
#define  ON   1 
#define  OFF  0

void led_1(char  type);//choosing whether to switch LED 1 ON or OFF
void led_2(char  type);//choosing whether to switch LED 2 ON or OFF
 void ECU_initial(void);//identifying the pins connected from outside the MC





#endif /* ECU_H_ */