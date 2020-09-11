//test www.vhdplus.com
#include <Arduino.h>

void setup() {
    Serial.begin(9600); //Set Baudrate with "New Processor" test
}

void loop() {
    
    Serial.println("Hello World");
    delay(1000);
}
