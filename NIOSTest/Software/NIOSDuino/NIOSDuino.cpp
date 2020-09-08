#include <Arduino.h>

double i = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println(i);
    delay(1000);
    i++;
    if(i > 5) i = 0;
}
