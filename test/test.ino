int x=3;
void setup(){
    pinMode(x,INPUT);
    pinMode(2,OUTPUT);
    Serial.begin(9600);
}
void loop(){
    
    digitalWrite(2,1);
    Serial.println(digitalRead(x));
    delay(00); 
    digitalWrite(2,0);
    Serial.println(digitalRead(x));
    delay(500);
}