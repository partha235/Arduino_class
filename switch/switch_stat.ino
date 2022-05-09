#include "Arduino.h"
int x=2;
void setup(){
    pinMode(x,INPUT);
    Serial.begin(9600);
}
void loop(){
    int f=digitalRead(x);
    switch (f)
    {
    case 1:
        Serial.println("high");
        delay(500);
        break;
    
    default:
        Serial.println("low");
        delay(500);
        break;
    }
}