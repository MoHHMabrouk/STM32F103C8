/*
******************************************************************
   Author  : Mohamed Mabrouk
   Version : V01
   Date    : 12 Nov 2023
******************************************************************
*/
#ifndef _RCC_PRIVATE_H_
#define _RCC_PRIVATE_H_

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
