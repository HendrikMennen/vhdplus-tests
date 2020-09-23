
#include <Arduino.h>

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600); //Set Baudrate with "New Processor"
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Hello World");
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
