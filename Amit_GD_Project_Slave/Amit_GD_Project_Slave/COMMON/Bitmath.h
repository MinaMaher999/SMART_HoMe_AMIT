/*
 * Bitmath.h
 *
 * Created: 10/2/2021 12:56:30 AM
 *  Author: Dell
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_



#define SET_BIT(REG, BIT)  REG |= (1<<BIT)//making the bit in the register HIGH (1)
#define CLR_BIT(REG, BIT)  REG &=~(1<<BIT)//making the bit in the register LOW (0)
#define TGL_BIT(REG, BIT)  REG ^= (1<<BIT)// changing the value of the bit if it is (1) it will be (0) and vice versa
#define GET_BIT(REG, BIT)  ((REG>>BIT)&1)// getting the value of the pin in the register


#endif /* BITMATH_H_ */