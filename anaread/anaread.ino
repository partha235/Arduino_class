// this code was made to read varying analog voltage. 
// potentiometer is used and connected to one of analog pin 
// https://learn.sparkfun.com/tutorials/analog-to-digital-conversion/all see this site to now
// more about ADC.
#define pot A3
void setup(){
    pinMode(pot,INPUT);
    Serial.begin(9600);
}
void loop(){
    Serial.println(analogRead(pot));
    delay(50);
}