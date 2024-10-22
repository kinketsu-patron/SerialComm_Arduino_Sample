#include <Arduino.h>

void setup(void)
{
    Serial.begin(9600);
}

void loop(void)
{
    unsigned long second;
    String message;

    second = millis() / 1000;
    message = String("起動から" + second);
    message += "秒経過";
    Serial.println(message);
    delay(1000);
}
