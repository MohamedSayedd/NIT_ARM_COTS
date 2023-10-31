#ifndef STM32F103XX_H_
#define STM32F103XX_H_

/*********************  Core Peripherals Base Addresses   *********************/

#define SYSTICK_BASE_ADDRESS	0xE000E010UL

/*********************  Various Memories Base Adresses   *********************/

#define FLASH_BASE_ADDRESS      0x40022000UL
#define SRAM_BASE_ADDRESS       0x20000000UL

/*********************  AHB Peripheral Base Adresses   *********************/

#define RCC_BASE_ADDRESS         0x40021000U


/*********************  APB1 Peripheral Base Addresses   *********************/



/*********************  APB2 Peripheral Base Addresses   *********************/




/*********************  SysTick Register Definition Structure   *********************/



/*********	SYST_CSR register bits	*********/


/*********************  GPIO Register Definition Structure   *********************/



/*********************  GPIO Register Definition    *********************/


/*********************  RCC Register Definition Structure   *********************/

typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;

}RCC_RegDef_T;

/*********************  RCC Register Definition    *********************/
#define RCC									((RCC_RegDef_T*)RCC_BASE_ADDRESS)




#endif
