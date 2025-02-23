/**
 * @file Chappie.cpp
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-03-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "Chappie.h"

void CHAPPIE::init()
{
    /* Init power contrl */
    Pow.init();

    /* Init RGB led */
    // FastLED.showColor(CRGB::Orange, 5);
    
    /* Init lcd */
    Lcd.init();
    Lcd.setFont(&fonts::efontCN_12);

    /* Print Logo in a cool way */
    Lcd.setCursor(0, 0);
    for (char c : Logo) {
        Lcd.printf("%c", c);
        delay(1);
    }
    Lcd.printf("starting watcher .....");
    delay(1000);
    Lcd.clear();

    //设置lcd光标到0，0
    Lcd.setCursor(0, 0);
    /* Init touchpad */
    Lcd.printf("%s", Cowsay("Pls touch screen to wakeup Tp").c_str());

    /* Init RTC */
    Rtc.begin();
    Lcd.printf("RTC init success!\n");

    /* Init IMU */
    // Imu.init();
    
    /* Init SD card */
    Sd.init();
    Lcd.printf("SD init success!\n");

    /* Fire up */
    // Speaker.setVolume(100);
    // Speaker.tone(9000, 300);
    // Vibrator.Buzzzzz(300);

    Lcd.printf("HELLO!!!\n");
    Vibrator.Buzzzzz(100);

    /* Init I2C */
    Wire.begin(5, 4);
    Wire.setClock(400000);
    //touch pad
    Tp.init(&Wire);
    Lcd.printf("Tp init success!\n");

    /* Init BMP280 */
    Env.init();
    Lcd.printf("ENV init success!\n");

}
