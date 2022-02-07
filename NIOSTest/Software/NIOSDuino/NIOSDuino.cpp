#include <Arduino.h>

String sauber = "";

void setup() {
    Serial.begin(9600); //Set Baudrate with "New Processor" test
}

void loop() {
    while(Serial.available())
    {
        sauber = Serial.readString(); // read the incoming data as string
        
        Serial.println(sauber);
        
        delay(1000);
    }
}