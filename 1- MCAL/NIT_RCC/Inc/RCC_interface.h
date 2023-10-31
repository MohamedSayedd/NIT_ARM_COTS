/*
 * RCC_interface.h
 *
 *  Created on: Oct 31, 2023
 *      Author: Mohamed Sayed
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#define ENABLE_PERIPHERAL     1
#define DISABLE_PERIPHERAL    0
#define RESET_PERIPHERAL      2

/*******************************************************************/
/*                                                                 */
/*                       ClockType Maybe :                         */
/*                       1-HSI                                     */
/*                       2-HSE                                     */
/*                       3-PLL                                     */
/*                           3.1-PLL_HSI_DIVIDED_BY_2              */
/*                           3.2-PLL_HSE                           */
/*                           3.3-PLL_HSE_DIVIDED_BY_2              */
/*                       4-HSE_BYPASS                              */
/*                                                                 */
/*******************************************************************/


#define HSI                         1
#define HSE                         2
#define PLL                         3
#define PLL_HSI_DIVIDED_BY_2        4
#define PLL_HSE                     5
#define PLL_HSE_DIVIDED_BY_2        6
#define HSE_BYPASS                  7

/********************************************************************************************/
/*                                                                                          */
/*                             ClockFactor For PLL  Maybe :                                 */
/*                              1-PLL_CLOCKk_MULTIPLE_BY_2                                   */
/*                              2-PLL_CLOCKk_MULTIPLE_BY_3                                   */
/*                              3-PLL_CLOCKk_MULTIPLE_BY_4                                   */
/*                              4-PLL_CLOCKk_MULTIPLE_BY_5                                   */
/*                              5-PLL_CLOCKk_MULTIPLE_BY_6                                   */
/*                              6-PLL_CLOCKk_MULTIPLE_BY_7                                   */
/*                              7-PLL_CLOCKk_MULTIPLE_BY_8                                   */
/*                              8-PLL_CLOCKk_MULTIPLE_BY_9                                   */
/*                              9-PLL_CLOCKk_MULTIPLE_BY_10                                  */
/*                              10-PLL_CLOCKk_MULTIPLE_BY_11                                 */
/*                              11-PLL_CLOCKk_MULTIPLE_BY_12                                 */
/*                              12-PLL_CLOCKk_MULTIPLE_BY_13                                 */
/*                              13-PLL_CLOCKk_MULTIPLE_BY_14                                 */
/*                              14-PLL_CLOCKk_MULTIPLE_BY_15                                 */
/*                              15-PLL_CLOCKk_MULTIPLE_BY_16                                 */
/*                                                                                          */
/********************************************************************************************/

#define NO_CLOCK_FACTOR                                0b0000
#define PLL_CLOCK_MULTIPLE_BY_2                        0b0000
#define PLL_CLOCK_MULTIPLE_BY_3					       0b0001
#define PLL_CLOCK_MULTIPLE_BY_4                        0b0010
#define PLL_CLOCK_MULTIPLE_BY_5                        0b0011
#define PLL_CLOCK_MULTIPLE_BY_6                        0b0100
#define PLL_CLOCK_MULTIPLE_BY_7                        0b0101
#define PLL_CLOCK_MULTIPLE_BY_8                        0b0110
#define PLL_CLOCK_MULTIPLE_BY_9                        0b0111
#define PLL_CLOCK_MULTIPLE_BY_10                       0b1000
#define PLL_CLOCK_MULTIPLE_BY_11                       0b1001
#define PLL_CLOCK_MULTIPLE_BY_12                       0b1010
#define PLL_CLOCK_MULTIPLE_BY_13                       0b1011
#define PLL_CLOCK_MULTIPLE_BY_14                       0b1100
#define PLL_CLOCK_MULTIPLE_BY_15                       0b1101
#define PLL_CLOCK_MULTIPLE_BY_16                       0b1110


typedef enum
{
	AHB=0,
	APB1,
	APB2
}RCC_Bus_t;

typedef enum
{
	RCC_AHB_PERIPHERALTYPE_DMA1=0,
	RCC_AHB_PERIPHERALTYPE_DMA2,
	RCC_AHB_PERIPHERALTYPE_SRAM,
	RCC_AHB_PERIPHERALTYPE_FLITF=4,
	RCC_AHB_PERIPHERALTYPE_CRCE=6,
	RCC_AHB_PERIPHERALTYPE_FMSC=8,
	RCC_AHB_PERIPHERALTYPE_SDIO=10
}RCC_AHB_Peripheral_t;


typedef enum
{
	RCC_APB2_PERIPHERALTYPE_AFIO=0,
	RCC_APB2_PERIPHERALTYPE_IOPA=2,
	RCC_APB2_PERIPHERALTYPE_IOPB,
	RCC_APB2_PERIPHERALTYPE_IOPC,
	RCC_APB2_PERIPHERALTYPE_IOPD,
	RCC_APB2_PERIPHERALTYPE_IOPE,
	RCC_APB2_PERIPHERALTYPE_IOPF,
	RCC_APB2_PERIPHERALTYPE_IOPG,
	RCC_APB2_PERIPHERALTYPE_ADC1,
	RCC_APB2_PERIPHERALTYPE_ADC2,
	RCC_APB2_PERIPHERALTYPE_TIM1,
	RCC_APB2_PERIPHERALTYPE_SPI1,
	RCC_APB2_PERIPHERALTYPE_TIM8,
	RCC_APB2_PERIPHERALTYPE_USART,
	RCC_APB2_PERIPHERALTYPE_ADC3,
	RCC_APB2_PERIPHERALTYPE_TIM9=19,
	RCC_APB2_PERIPHERALTYPE_TIM10,
	RCC_APB2_PERIPHERALTYPE_TIM11

}RCC_APB2_Peripheral_t;

typedef enum
{
	RCC_APB1_PERIPHERALTYPE_TIM2=0,
	RCC_APB1_PERIPHERALTYPE_TIM3,
	RCC_APB1_PERIPHERALTYPE_TIM4,
	RCC_APB1_PERIPHERALTYPE_TIM5,
	RCC_APB1_PERIPHERALTYPE_TIM6,
	RCC_APB1_PERIPHERALTYPE_TIM7,
	RCC_APB1_PERIPHERALTYPE_TIM12,
	RCC_APB1_PERIPHERALTYPE_TIM13,
	RCC_APB1_PERIPHERALTYPE_TIM14,
	RCC_APB1_PERIPHERALTYPE_WWDGEN=11,
	RCC_APB1_PERIPHERALTYPE_SPI2=14,
	RCC_APB1_PERIPHERALTYPE_SPI3,
	RCC_APB1_PERIPHERALTYPE_USART2=17,
	RCC_APB1_PERIPHERALTYPE_USART3,
	RCC_APB1_PERIPHERALTYPE_USART4,
	RCC_APB1_PERIPHERALTYPE_USART5,
	RCC_APB1_PERIPHERALTYPE_I2C1,
	RCC_APB1_PERIPHERALTYPE_I2C2,
	RCC_APB1_PERIPHERALTYPE_USB,
	RCC_APB1_PERIPHERALTYPE_CAN=25,
	RCC_APB1_PERIPHERALTYPE_BKP=27,
	RCC_APB1_PERIPHERALTYPE_PWR,
	RCC_APB1_PERIPHERALTYPE_DAC
}RCC_APB1_Peripheral_t;

void RCC_VidInit( void );

void RCC_AHBEnableClock (RCC_AHB_Peripheral_t Copy_AHPPeripheralName);

void RCC_AHBDisableClock(RCC_AHB_Peripheral_t Copy_AhbPeripheralName);

void RCC_APB1EnableClock(RCC_APB1_Peripheral_t Copy_Apb1PeripheralName);

void RCC_APB1DisableClock(RCC_APB1_Peripheral_t Copy_Apb1PeripheralName);

void RCC_APB2EnableClock(RCC_APB2_Peripheral_t Copy_Apb2PeripheralName);

void RCC_APB2DisableClock(RCC_APB2_Peripheral_t Copy_Apb2PeripheralName);


#endif /* RCC_INTERFACE_H_ */
