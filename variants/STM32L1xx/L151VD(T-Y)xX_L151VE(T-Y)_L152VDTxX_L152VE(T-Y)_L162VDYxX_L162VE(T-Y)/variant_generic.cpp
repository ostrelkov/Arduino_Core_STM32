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
#if defined(ARDUINO_GENERIC_L151VDTXX) || defined(ARDUINO_GENERIC_L151VDYXX) ||\
    defined(ARDUINO_GENERIC_L151VETX) || defined(ARDUINO_GENERIC_L151VEYX) ||\
    defined(ARDUINO_GENERIC_L152VDTXX) || defined(ARDUINO_GENERIC_L152VETX) ||\
    defined(ARDUINO_GENERIC_L152VEYX) || defined(ARDUINO_GENERIC_L162VDYXX) ||\
    defined(ARDUINO_GENERIC_L162VETX) || defined(ARDUINO_GENERIC_L162VEYX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D1/A0
  PA_1,   // D2/A1
  PA_2,   // D3/A2
  PA_3,   // D4/A3
  PA_4,   // D5/A4
  PA_5,   // D6/A5
  PA_6,   // D7/A6
  PA_7,   // D8/A7
  PA_8,   // D9
  PA_9,   // D10
  PA_10,  // D11
  PA_11,  // D12
  PA_12,  // D13
  PA_13,  // D14
  PA_14,  // D15
  PA_15,  // D16
  PB_0,   // D17/A8
  PB_1,   // D18/A9
  PB_2,   // D19/A10
  PB_3,   // D20
  PB_4,   // D21
  PB_5,   // D22
  PB_6,   // D23
  PB_7,   // D24
  PB_8,   // D25
  PB_9,   // D26
  PB_10,  // D27
  PB_11,  // D28
  PB_12,  // D29/A11
  PB_13,  // D30/A12
  PB_14,  // D31/A13
  PB_15,  // D32/A14
  PC_0,   // D33/A15
  PC_1,   // D34/A16
  PC_2,   // D35/A17
  PC_3,   // D36/A18
  PC_4,   // D37/A19
  PC_5,   // D38/A20
  PC_6,   // D39
  PC_7,   // D40
  PC_8,   // D41
  PC_9,   // D42
  PC_10,  // D43
  PC_11,  // D44
  PC_12,  // D45
  PC_13,  // D46
  PC_14,  // D47
  PC_15,  // D48
  PD_0,   // D49
  PD_1,   // D50
  PD_2,   // D51
  PD_3,   // D52
  PD_4,   // D53
  PD_5,   // D54
  PD_6,   // D55
  PD_7,   // D56
  PD_8,   // D57
  PD_9,   // D58
  PD_10,  // D59
  PD_11,  // D60
  PD_12,  // D61
  PD_13,  // D62
  PD_14,  // D63
  PD_15,  // D64
  PE_0,   // D65
  PE_1,   // D66
  PE_2,   // D67
  PE_3,   // D68
  PE_4,   // D69
  PE_5,   // D70
  PE_6,   // D71
  PE_7,   // D72/A21
  PE_8,   // D73/A22
  PE_9,   // D74/A23
  PE_10,  // D75/A24
  PE_11,  // D76
  PE_12,  // D77
  PE_13,  // D78
  PE_14,  // D79
  PE_15,  // D80
  PH_0,   // D81
  PH_1,   // D82
  PH_2    // D83
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  7,  // A7,  PA7
  16, // A8,  PB0
  17, // A9,  PB1
  18, // A10, PB2
  28, // A11, PB12
  29, // A12, PB13
  30, // A13, PB14
  31, // A14, PB15
  32, // A15, PC0
  33, // A16, PC1
  34, // A17, PC2
  35, // A18, PC3
  36, // A19, PC4
  37, // A20, PC5
  71, // A21, PE7
  72, // A22, PE8
  73, // A23, PE9
  74  // A24, PE10
};

#endif /* ARDUINO_GENERIC_* */
