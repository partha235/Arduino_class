
void setup(){
    pinMode(13,OUTPUT);
    Serial.begin(9600);
}
void loop(){
    
    digitalWrite(13,1);
    delay(500); 
    digitalWrite(13,0);
    delay(500);
}