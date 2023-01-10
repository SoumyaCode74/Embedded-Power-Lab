/*
 * stm32g474.h
 *
 *  Created on: Jan 10, 2023
 *      Author: Soumyadeep Bose
 */

#ifndef STM32G474_H_
#define STM32G474_H_
#include <stdint.h>

/**********************USER CONSTANTS********************************/

/*******************************************************************/
/*********************PERIPHERAL BASE ADDRESS***********************/
#define PERIPH_BASE                     (0x40000000UL)
/*********************BUS OFFSETS**********************************/
#define APB1_OFFSET                     (0x00U)
#define APB2_OFFSET                     (0x10000UL)
#define AHB1_OFFSET                     (0x20000UL)
#define AHB2_OFFSET                     (0x08000000UL)
/*********************PERIPHERAL OFFSETS**************************/
/*********************RCC OFFSETS*********************************/
#define RCC_OFFSET                      (0x1000U)
/*********************GPIO OFFSETS********************************/
#define GPIOA_OFFSET                    (0x0000U)
#define GPIOB_OFFSET                    (0x0400U)
#define GPIOC_OFFSET                    (0x0800U)
#define GPIOD_OFFSET                    (0x0C00U)
#define GPIOE_OFFSET                    (0x1000U)
#define GPIOF_OFFSET                    (0x1400U)
#define GPIOG_OFFSET                    (0x1800U)
/*********************ADC OFFSETS********************************/
#define ADC1_OFFSET                     (0x08000000UL)
#define ADC2_OFFSET                     ADC1_OFFSET
#define ADC3_OFFSET                     (0x08000400UL)
#define ADC4_OFFSET                     ADC3_OFFSET
#define ADC5_OFFSET                     ADC4_OFFSET
/*********************DAC OFFSETS********************************/
#define DAC1_OFFSET                     (0x08000800UL)
#define DAC2_OFFSET                     (0x08000C00UL)
#define DAC3_OFFSET                     (0x08001000UL)
#define DAC4_OFFSET                     (0x08001400UL)
/*********************CORDIC OFFSETS******************************/
#define CORDIC_OFFSET                   (0x0C00U)
/*********************VREFBUF OFFSETS*****************************/
#define VREFBUF_OFFSET                  (0x0300U)
/*****************************************************************/
/*********************BUS ADDRESSES*******************************/
#define APB1_BASE_ADDR                  PERIPH_BASE + APB1_OFFSET
#define APB2_BASE_ADDR                  PERIPH_BASE + APB2_OFFSET
#define AHB1_BASE_ADDR                  PERIPH_BASE + AHB1_OFFSET
#define AHB2_BASE_ADDR                  PERIPH_BASE + AHB2_OFFSET
/*********************PERIPHERAL ADDRESSES************************/
/*********************RCC ADDRESSES*******************************/
#define RCC_BASE_ADDR                   AHB1_BASE_ADDR + RCC_OFFSET
/*********************GPIO ADDRESSES******************************/
#define GPIOA_BASE_ADDR                 AHB2_BASE_ADDR + GPIOA_OFFSET
#define GPIOB_BASE_ADDR                 AHB2_BASE_ADDR + GPIOB_OFFSET
#define GPIOC_BASE_ADDR                 AHB2_BASE_ADDR + GPIOC_OFFSET
#define GPIOD_BASE_ADDR                 AHB2_BASE_ADDR + GPIOD_OFFSET
#define GPIOE_BASE_ADDR                 AHB2_BASE_ADDR + GPIOE_OFFSET
#define GPIOF_BASE_ADDR                 AHB2_BASE_ADDR + GPIOF_OFFSET
#define GPIOG_BASE_ADDR                 AHB2_BASE_ADDR + GPIOG_OFFSET                              
/*********************ADC ADDRESSES*******************************/
#define ADC1_BASE_ADDR                  AHB2_BASE_ADDR + ADC1_OFFSET
#define ADC2_BASE_ADDR                  AHB2_BASE_ADDR + ADC2_OFFSET
#define ADC3_BASE_ADDR                  AHB2_BASE_ADDR + ADC3_OFFSET
#define ADC4_BASE_ADDR                  AHB2_BASE_ADDR + ADC4_OFFSET
#define ADC5_BASE_ADDR                  AHB2_BASE_ADDR + ADC5_OFFSET
/*********************DAC ADDRESSES*******************************/
#define DAC1_BASE_ADDR                  AHB2_BASE_ADDR + DAC1_OFFSET
#define DAC2_BASE_ADDR                  AHB2_BASE_ADDR + DAC2_OFFSET
#define DAC3_BASE_ADDR                  AHB2_BASE_ADDR + DAC3_OFFSET
#define DAC4_BASE_ADDR                  AHB2_BASE_ADDR + DAC4_OFFSET
/*********************CORDIC ADDRESSES****************************/
#define CORDIC_BASE_ADDR                AHB1_BASE_ADDR + CORDIC_OFFSET
/*********************VREFBUF ADDRESSES***************************/
#define VREFBUF_BASE_ADDR               APB2_BASE_ADDR + VREFBUF_OFFSET
/*****************************************************************/
/**********************MEMORY POINTERS****************************/
/**********************RCC POINTERS*******************************/
#define RCC                             ((uint32_t *)RCC_BASE_ADDR)
/**********************GPIO POINTERS******************************/
#define GPIOA                           ((uint32_t *)GPIOA_BASE_ADDR)
#define GPIOB                           ((uint32_t *)GPIOB_BASE_ADDR)
#define GPIOC                           ((uint32_t *)GPIOC_BASE_ADDR)
#define GPIOD                           ((uint32_t *)GPIOD_BASE_ADDR)
#define GPIOE                           ((uint32_t *)GPIOE_BASE_ADDR)
#define GPIOF                           ((uint32_t *)GPIOF_BASE_ADDR)
#define GPIOG                           ((uint32_t *)GPIOG_BASE_ADDR)
/**********************ADC POINTERS******************************/
#define ADC1                            ((uint32_t *)ADC1_BASE_ADDR)
#define ADC2                            ((uint32_t *)ADC2_BASE_ADDR)
#define ADC3                            ((uint32_t *)ADC3_BASE_ADDR)
#define ADC4                            ((uint32_t *)ADC4_BASE_ADDR)
#define ADC5                            ((uint32_t *)ADC5_BASE_ADDR)
/*********************DAC POINTERS*******************************/
#define DAC1                            ((uint32_t *)DAC1_BASE_ADDR)
#define DAC2                            ((uint32_t *)DAC2_BASE_ADDR)
#define DAC3                            ((uint32_t *)DAC3_BASE_ADDR)
#define DAC4                            ((uint32_t *)DAC4_BASE_ADDR)
/*********************CORDIC POINTERS*****************************/
#define CORDIC                          ((uint32_t *)CORDIC_BASE_ADDR)
/*********************VREFBUF POINTERS****************************/
#define VREFBUF                         ((uint32_t *)VREFBUF_BASE_ADDR)
/*****************************************************************/
/*********************PERIPHERAL STRUCTURES***********************/
/*********************RCC STRUCTURES******************************/
typedef struct 
{
    uint32_t CR;
    uint32_t ICSCR;
    uint32_t CFGR;
    uint32_t PLLCFGR;
    uint32_t CIER;
    uint32_t CIFR;
    uint32_t CICR;
    uint32_t AHB1RSTR;
    uint32_t AHB2RSTR;
    uint32_t AHB3RSTR;
    uint32_t APB1RSTR1;
    uint32_t APB1RSTR2;
    uint32_t APB2RSTR;
    uint32_t AHB1ENR;
    uint32_t AHB2ENR;
    uint32_t AHB3ENR;
    uint32_t APB1ENR;
    uint32_t APB2ENR;
    uint32_t AHB1SMENR;
    uint32_t AHB2SMENR;
    uint32_t AHB3SMENR;
    uint32_t APB1SMENR1;
    uint32_t APB1SMENR2;
    uint32_t APB2SMENR;
    uint32_t CCIPR;
    uint32_t BDCR;
    uint32_t CSR;
    uint32_t CRRCR;
    uint32_t CCIPR2;
}RCC_TypeDef;



#endif /* STM32G474_H_ */
