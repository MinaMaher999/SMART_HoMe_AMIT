/*
 * CPU.h
 *
 * Created: 10/2/2021 9:54:05 AM
 *  Author: Dell
 */ 


#ifndef CPU_H_
#define CPU_H_

#undef F_CPU                //if not defined the  internal oscillator
#define F_CPU 16000000      // Defined external oscillator( 16 MHZ) for ATMEGA32
#include <avr/io.h>         // Defined Input/Output for AVR controller 
#include <avr/interrupt.h>  // Defined interrupts for AVR controller

#include "Bitmath.h"
#include <stdint.h>



#endif /* CPU_H_ */