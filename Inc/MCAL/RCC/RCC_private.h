/*
 * RCC_private.h
 *
 *  Created on: Dec 16, 2023
 *      Author: Mohamed
 */

#ifndef _RCC_PRIVATE_H_
#define _RCC_PRIVATE_H_

#define HSION 0
#define HSIRDY 1
#define HSITRIM_0 3
#define HSITRIM_1 4
#define HSITRIM_2 5
#define HSITRIM_3 6
#define HSITRIM_4 7
#define HSICAL_0 8
#define HSICAL_1 9
#define HSICAL_2 10
#define HSICAL_3 11
#define HSICAL_4 12
#define HSICAL_5 13
#define HSICAL_6 14
#define HSICAL_7 15
#define HSEON 16
#define HSERDY 17
#define HSEBYP 18
#define CCSON 19
#define PLLON 24
#define PLLRDY 25

#define RCC_u32BASE_ADD 0x40021000

/*              Registers               */
typedef struct
{
	u32 CR;
	u32 CFGR;
	u32 CIR;
	u32 APB2RSTR;
	u32 APB1RSTR;
	u32 AHBENR;
	u32 APB2ENR;
	u32 APB1ENR;
	u32 BDCR;
	u32 CSR;
	u32 AHBSTR;
	u32 CFGR2;
} RCC_MemMap_t;


#define RCC ((volatile RCC_MemMap_t *)RCC_u32BASE_ADD)

#endif
