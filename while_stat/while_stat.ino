#include "Arduino.h"
int sen=2;
void setup(){
    pinMode(sen,INPUT);
    pinMode(13,OUTPUT);
}
void loop(){
    digitalRead(sen);
    while(digitalRead(sen)==HIGH){
        digitalWrite(13,HIGH);
    }
}