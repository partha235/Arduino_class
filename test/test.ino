void setup(){
    pinMode(23,OUTPUT);
}
void loop(){
    digitalWrite(23,1);
    delay(100); 
    digitalWrite(23,0);
    delay(100);
}