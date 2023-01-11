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
#define ADC2_OFFSET                     (ADC1_OFFSET + 0x100U)
#define ADC12_OFFSET                    (ADC2_OFFSET + 0x100U + 0x100U)
#define ADC3_OFFSET                     (ADC12_OFFSET + 0x100U)
#define ADC4_OFFSET                     (ADC3_OFFSET + 0x100U)
#define ADC5_OFFSET                     (ADC4_OFFSET + 0x100U)
#define ADC345_OFFSET                   (ADC5_OFFSET + 0x100U)
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
#define ADC12_BASE_ADDR                 AHB2_BASE_ADDR + ADC12_OFFSET
#define ADC3_BASE_ADDR                  AHB2_BASE_ADDR + ADC3_OFFSET
#define ADC4_BASE_ADDR                  AHB2_BASE_ADDR + ADC4_OFFSET
#define ADC5_BASE_ADDR                  AHB2_BASE_ADDR + ADC5_OFFSET
#define ADC345_BASE_ADDR                AHB2_BASE_ADDR + ADC345_OFFSET
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
#define RCC                             ((RCC_TypeDef *)RCC_BASE_ADDR)
/**********************GPIO POINTERS******************************/
#define GPIOA                           ((GPIO_TypeDef *)GPIOA_BASE_ADDR)
#define GPIOB                           ((GPIO_TypeDef *)GPIOB_BASE_ADDR)
#define GPIOC                           ((GPIO_TypeDef *)GPIOC_BASE_ADDR)
#define GPIOD                           ((GPIO_TypeDef *)GPIOD_BASE_ADDR)
#define GPIOE                           ((GPIO_TypeDef *)GPIOE_BASE_ADDR)
#define GPIOF                           ((GPIO_TypeDef *)GPIOF_BASE_ADDR)
#define GPIOG                           ((GPIO_TypeDef *)GPIOG_BASE_ADDR)
/**********************ADC POINTERS******************************/
#define ADC1                            ((ADC_TypeDef *)ADC1_BASE_ADDR)
#define ADC2                            ((ADC_TypeDef *)ADC2_BASE_ADDR)
#define ADC3                            ((ADC_TypeDef *)ADC3_BASE_ADDR)
#define ADC4                            ((ADC_TypeDef *)ADC4_BASE_ADDR)
#define ADC5                            ((ADC_TypeDef *)ADC5_BASE_ADDR)
/**********************ADC Common POINTERS***********************/
#define ADC12                           ((ADC_Common_TypeDef *)ADC12_BASE_ADDR)
#define ADC345                          ((ADC_Common_TypeDef *)ADC345_BASE_ADDR)
/*********************DAC POINTERS*******************************/
#define DAC1                            ((DAC_TypeDef *)DAC1_BASE_ADDR)
#define DAC2                            ((DAC_TypeDef *)DAC2_BASE_ADDR)
#define DAC3                            ((DAC_TypeDef *)DAC3_BASE_ADDR)
#define DAC4                            ((DAC_TypeDef *)DAC4_BASE_ADDR)
/*********************CORDIC POINTERS*****************************/
#define CORDIC                          ((CORDIC_TypeDef *)CORDIC_BASE_ADDR)
/*********************VREFBUF POINTERS****************************/
#define VREFBUF                         ((VREFBUF_TypeDef *)VREFBUF_BASE_ADDR)
/*****************************************************************/
/*********************PERIPHERAL STRUCTURES***********************/
/*********************RCC STRUCTURES******************************/
typedef struct 
{
    volatile uint32_t CR;
    volatile uint32_t ICSCR;
    volatile uint32_t CFGR;
    volatile uint32_t PLLCFGR;
    volatile uint32_t CIER;
    volatile uint32_t CIFR;
    volatile uint32_t CICR;
    volatile uint32_t AHBxRSTR[3];
    volatile uint32_t APB1RSTR[2];
    volatile uint32_t APB2RSTR;
    volatile uint32_t AHBxENR[3];
    volatile uint32_t APBxENR[2];
    volatile uint32_t AHBxSMENR[3];
    volatile uint32_t APB1SMENR[2];
    volatile uint32_t APB2SMENR;
    volatile uint32_t CCIPR;
    volatile uint32_t BDCR;
    volatile uint32_t CSR;
    volatile uint32_t CRRCR;
    volatile uint32_t CCIPR2;
}RCC_TypeDef;
typedef struct 
{
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t LCKR;
    volatile uint32_t AFR[2];
    volatile uint32_t BRR;
}GPIO_TypeDef;
typedef struct
{
    volatile uint32_t ISR;
    volatile uint32_t IER;
    volatile uint32_t CR;
    volatile uint32_t CFGR[2];
    volatile uint32_t SMPR[2];
    volatile uint32_t TR[3];
    volatile uint32_t SQR[4];
    volatile uint32_t DR;
    volatile uint32_t JSQR;
    uint32_t reserved1[4];
    volatile uint32_t OFR[4];
    uint32_t reserved2[4];
    volatile uint32_t JDR[4];
    uint32_t reserved3[4];
    volatile uint32_t AWD2CR;
    volatile uint32_t AWD3CR;
    uint32_t reserved4[2];
    volatile uint32_t DIFSEL;
    volatile uint32_t CALFACT;
    volatile uint32_t GCOMP;
}ADC_TypeDef;
typedef struct
{
    volatile uint32_t CSR;
    uint32_t reserved[1];
    volatile uint32_t CCR;
    volatile uint32_t CDR;
}ADC_Common_TypeDef;
typedef struct
{
    volatile uint32_t CR;
    volatile uint32_t SWTRGR;
    volatile uint32_t DHR12R1;
    volatile uint32_t DHR12L1;
    volatile uint32_t DHR8R1;
    volatile uint32_t DHR12R2;
    volatile uint32_t DHR12L2;
    volatile uint32_t DHR8R2;
    volatile uint32_t DHR12RD;
    volatile uint32_t DHR8RD;
    volatile uint32_t DOR[2];
    volatile uint32_t SR;
    volatile uint32_t CCR;
    volatile uint32_t MCR;
    volatile uint32_t SHSR[2];
    volatile uint32_t SHHR[2];
    volatile uint32_t STR[2];
    volatile uint32_t STMODR;    
}DAC_TypeDef;
typedef struct
{
    volatile uint32_t CSR;
    volatile uint32_t WDATA;
    volatile uint32_t RDATA;
}CORDIC_TypeDef;
typedef struct
{
    volatile uint32_t CSR;
    volatile uint32_t CCR;
}VREFBUF_TypeDef;


#endif /* STM32G474_H_ */
