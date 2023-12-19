/*
 * RCC_interface.h
 *
 *  Created on: Dec 16, 2023
 *      Author: Mohamed
 */

#ifndef RCC_RCC_INTERFACE_H_
#define RCC_RCC_INTERFACE_H_

typedef enum
{
    RCC_HSE_CRYSTAL = 0,
    RCC_HSE_RC,
    RCC_HSI,
    RCC_PLL
} RCC_CLK_t;

void MRCC_vInit(RCC_CLK_t RCC_CLK);
void MRCC_vClkSecSysEnable(void);
void MRCC_vClkSecSysDisable(void);
void MRCC_vEnableClock(/**/);
void MRCC_vDisableClock(/**/);

#endif /* RCC_RCC_INTERFACE_H_ */
