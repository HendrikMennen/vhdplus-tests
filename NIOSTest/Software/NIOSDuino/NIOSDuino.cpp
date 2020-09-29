
#include <Arduino.h>

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600); //Set Baudrate with "New Processor"
}

void loop() {
<<<<<<< HEAD
=======
    digitalWrite(LED_BUILTIN, HIGH);
>>>>>>> master
    Serial.println("Hello World");
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
