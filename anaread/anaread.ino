#define pot A3
void setup(){
    pinMode(pot,INPUT);
    Serial.begin(9600);
}
void loop(){
    Serial.println(analogRead(pot));
    delay(50);
}