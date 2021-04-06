
#include <Arduino.h>

String incomingString = "";

void setup() {
    Serial.begin(9600); //Set Baudrate with "New Processor"
}

void loop() {
    Serial.println("Hello World");
    delay(1000);
    while(Serial.available())
    {
        incomingString = Serial.readString(); // read the incoming data as string
    }
    
    Serial.println(incomingString);
        
        delay(1000);
}
