#include<Arduino.h>
#include "stm32f4xx_hal_spi.h"
#include <SPI.h>
#include "uEFIv6_pinout.h"
#include "acc_mc33810.h"

void setup() {
    pinMode(LED_0, OUTPUT);
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);

    digitalWrite(LED_0, !digitalRead(LED_0));
#ifdef HAS_PMIC
    pinMode(MC33810_ENABLE, OUTPUT);
    digitalWrite(MC33810_ENABLE, false);
    initMC33810();
#endif
    digitalWrite(LED_0, !digitalRead(LED_0));
    pinMode(INY_1, OUTPUT);
    pinMode(INY_2, OUTPUT);
    pinMode(INY_3, OUTPUT);
    pinMode(INY_4, OUTPUT);
    pinMode(IGN_1, OUTPUT);
    pinMode(IGN_2, OUTPUT);
    pinMode(IGN_3, OUTPUT);
    pinMode(IGN_4, OUTPUT);

    // 1s injector on then off
    digitalWrite(INY_1, true);
    digitalWrite(INY_2, true);
    digitalWrite(INY_3, true);
    digitalWrite(INY_4, true);
    delay(1000);
    digitalWrite(INY_1, false);
    digitalWrite(INY_2, false);
    digitalWrite(INY_3, false);
    digitalWrite(INY_4, false);

    digitalWrite(LED_0, !digitalRead(LED_0));
    // 1s ignition on then off
    digitalWrite(IGN_1, true);
    digitalWrite(IGN_2, true);
    digitalWrite(IGN_3, true);
    digitalWrite(IGN_4, true);
    delay(1000);
    digitalWrite(IGN_1, false);
    digitalWrite(IGN_2, false);
    digitalWrite(IGN_3, false);
    digitalWrite(IGN_4, false);

    digitalWrite(LED_0, !digitalRead(LED_0));
#ifdef  HAS_PMIC
    openInjector1_MC33810();
    openInjector2_MC33810();
    openInjector3_MC33810();
    openInjector4_MC33810();
    delay(1000);
    closeInjector1_MC33810();
    closeInjector2_MC33810();
    closeInjector3_MC33810();
    closeInjector4_MC33810();
    delay(500);
    coil1High_MC33810();
    coil2High_MC33810();
    coil3High_MC33810();
    coil4High_MC33810();
    delay(500);
    coil1Low_MC33810();
    coil2Low_MC33810();
    coil3Low_MC33810();
    coil4Low_MC33810();
#endif
}


void loop() {

    delay(500);
    digitalWrite(LED_0, !digitalRead(LED_0));
    digitalWrite(LED_1, !digitalRead(LED_1));
    digitalWrite(LED_2, !digitalRead(LED_2));
}