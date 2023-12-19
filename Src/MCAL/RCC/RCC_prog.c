#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void MRCC_vInit(RCC_CLK_t RCC_CLK)
{
    switch (RCC_CLK)
    {
    case RCC_HSE_CRYSTAL:
        SET_BIT(RCC->CR, HSEON);
        break;

    case RCC_HSE_RC:
        SET_BIT(RCC->CR, HSEBYP);
        SET_BIT(RCC->CR, HSEON);
        break;

    case RCC_HSI:
        SET_BIT(RCC->CR, HSION);
        break;

    case RCC_PLL:
        SET_BIT(RCC->CR, PLLON);
        break;

    default:
        break;
    }
}

void MRCC_vClkSecSysEnable(void)
{
    SET_BIT(RCC->CR, CCSON);
}

void MRCC_vClkSecSysDisable(void)
{
    CLR_BIT(RCC->CR, CCSON);
}

/*HSI Trim Funcion*/