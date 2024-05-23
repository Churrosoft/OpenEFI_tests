//
// Created by FDSoftware on 27/04/24.
//

#ifndef BOARD_MANUFACTURE_TESTS_UEFIV6_PINOUT_H
#define BOARD_MANUFACTURE_TESTS_UEFIV6_PINOUT_H
#include "Arduino.h"

#define HAS_PMIC
#define MC33810_ENABLE PB12
#define MC33810_CS PB11
#define  pinMC33810_1_CS PB11
#define  pinMC33810_2_CS PB4

#define INY_1 PD8
#define INY_2 PD9
#define INY_3 PD10
#define INY_4 PD11

#define IGN_1 PD12
#define IGN_2 PD13
#define IGN_3 PD14
#define IGN_4 PD15

#define HAS_CEL_LED
#define LED_CEL PC0
#define LED_0 PC1
#define LED_1 PC2
#define LED_2 PC3

#define HAS_SPI_SD
#define SD_SPI SPI3
#define SD_CS PC8
#define SD_CARD_DETECT PC9

#define RPM_OUT PE11

#define HAS_STEPPER_OUT
#define IDLE_STEP PE7
#define IDLE_DIR PE8
#define IDLE_ENABLE PE10



#endif //BOARD_MANUFACTURE_TESTS_UEFIV6_PINOUT_H
