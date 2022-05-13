#include"Arduino.h"
#define but 2
void setup(){
    pinMode(but,INPUT);
    Serial.begin(9600);
}
void loop(){
    Serial.println(digitalRead(but));
    delay(100);
}