#include "Servo.h"
int x=0;
Servo ser;
void setup(){
    ser.attach(3); //only can use pin with PWM capability.
    Serial.begin(9600);
}
void loop(){
    for(x;x<=180;x++){
        ser.write(x);                       
        Serial.println(x);                  
        delay(20);
    }
    x=0;
}