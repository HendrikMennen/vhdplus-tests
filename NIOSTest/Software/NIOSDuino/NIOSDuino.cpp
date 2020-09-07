#include <Arduino.h>

int i = 0;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {   
    Serial.println("Hi");
    Serial.println("test");
    i++;
}
