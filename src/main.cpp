#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author PRIYAL GARG
 * @date 2025-02-19
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */


#define ldrPin A0

void setup() {
    Serial.begin(9600);
    pinMode(ldrPin,INPUT);
    Serial.println("LDR Test");
}

void loop() {

    int ldrRaw = analogRead(ldrPin);
    //Map to percentage
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);
    Serial.println("LDR Raw: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.print("%");
    delay(500);
}
