/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_NUCLEO_F030R8)

#include "pins_arduino.h"

// Pin number
const PinName digitalPin[] = {
  PA_3,
  PA_2,
  PA_10,
  PB_3,
  PB_5,
  PB_4,
  PB_10,
  PA_8,
  PA_9,
  PC_7,
  PB_6,
  PA_7,
  PA_6,
  PA_5,
  PB_9,
  PB_8,
  // ST Morpho
  // CN7 Left Side
  PC_10,
  PC_12,
  PF_6,
  PF_7,
  PA_13,
  PA_14,
  PA_15,
  PB_7,
  PC_13,
  PC_14,
  PC_15,
  PF_0,
  PF_1,
  PC_2,
  PC_3,
  // CN7 Right Side
  PC_11,
  PD_2,
  // CN10 Left Side
  PC_9,
  // CN10 Right side
  PC_8,
  PC_6,
  PC_5,
  PA_12,
  PA_11,
  PB_12,
  PB_11,
  PB_2,
  PB_1,
  PB_15,
  PB_14,
  PB_13,
  PC_4,
  PF_5,
  PF_4,
  PA_0,
  PA_1,
  PA_4,
  PB_0,
  PC_1,
  PC_0
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  49, //A0
  50, //A1
  51, //A2
  52, //A3
  53, //A4
  54, //A5
  11, //A6
  12, //A7
  29, //A8
  30, //A9
  36, //A10
  46, //A11
  42, //A12
  13, //A13
  1,  //A14
  0   //A15
};

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  /*
   * Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_BYPASS;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL6;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }
  /* Initializes the CPU, AHB and APB buses clocks */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK) {
    Error_Handler();
  }
}

#ifdef __cplusplus
}
#endif
#endif /* ARDUINO_NUCLEO_F030R8 */
