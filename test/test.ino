
void setup(){
    pinMode(12,OUTPUT);
    Serial.begin(9600);
}
void loop(){
    
    digitalWrite(12,1);
    delay(500); 
    digitalWrite(12,0);
    delay(500);
}