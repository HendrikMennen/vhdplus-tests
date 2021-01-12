#include <Arduino.h>

String incomingString = "";

void setup() {
    Serial.begin(9600); //Set Baudrate with "New Processor" test
}

void loop() {
    while(Serial.available())
    {
        incomingString = Serial.readString(); // read the incoming data as string
        
        Serial.println(incomingString);
    }
}