/*
 * chip.h
 *
 *  Created on: Jan 10, 2023
 *      Author: soumy
 */

#ifndef CHIP_H_
#define CHIP_H_

#if defined(g474_nucleo)
	#include "stm32g474.h"
#elif defined(f401_nucleo)
	#include "stm32f401.h"
#else
	#error "No suitable MCU selected. Please check chip.h for options"
#endif

#endif /* CHIP_H_ */
