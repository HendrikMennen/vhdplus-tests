//test www.vhdplus.com
#include <Arduino.h>

int i = 0;

void setup() {
    Serial.begin(9600); //Set Baudrate with "New Processor" test
}

void loop() {
    Serial.println("Hello World");
    delay(1000);
    Serial.println("test");
}
