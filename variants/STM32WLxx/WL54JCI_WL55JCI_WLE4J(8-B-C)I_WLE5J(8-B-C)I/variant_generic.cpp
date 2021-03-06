/*
 *******************************************************************************
 * Copyright (c) 2020-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_GENERIC_WL54JCIX) || defined(ARDUINO_GENERIC_WL55JCIX) ||\
    defined(ARDUINO_GENERIC_WLE4J8IX) || defined(ARDUINO_GENERIC_WLE4JBIX) ||\
    defined(ARDUINO_GENERIC_WLE4JCIX) || defined(ARDUINO_GENERIC_WLE5J8IX) ||\
    defined(ARDUINO_GENERIC_WLE5JBIX) || defined(ARDUINO_GENERIC_WLE5JCIX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D1
  PA_1,   // D2
  PA_2,   // D3
  PA_3,   // D4
  PA_4,   // D5
  PA_5,   // D6
  PA_6,   // D7
  PA_7,   // D8
  PA_8,   // D9
  PA_9,   // D10
  PA_10,  // D11/A0
  PA_11,  // D12/A1
  PA_12,  // D13/A2
  PA_13,  // D14/A3
  PA_14,  // D15/A4
  PA_15,  // D16/A5
  PB_0,   // D17
  PB_1,   // D18/A6
  PB_2,   // D19/A7
  PB_3,   // D20/A8
  PB_4,   // D21/A9
  PB_5,   // D22
  PB_6,   // D23
  PB_7,   // D24
  PB_8,   // D25
  PB_9,   // D26
  PB_10,  // D27
  PB_11,  // D28
  PB_12,  // D29
  PB_13,  // D30/A10
  PB_14,  // D31/A11
  PB_15,  // D32
  PC_0,   // D33
  PC_1,   // D34
  PC_2,   // D35
  PC_3,   // D36
  PC_4,   // D37
  PC_5,   // D38
  PC_6,   // D39
  PC_13,  // D40
  PC_14,  // D41
  PC_15,  // D42
  PH_3    // D43
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  10, // A0,  PA10
  11, // A1,  PA11
  12, // A2,  PA12
  13, // A3,  PA13
  14, // A4,  PA14
  15, // A5,  PA15
  17, // A6,  PB1
  18, // A7,  PB2
  19, // A8,  PB3
  20, // A9,  PB4
  29, // A10, PB13
  30  // A11, PB14
};

#endif /* ARDUINO_GENERIC_* */
