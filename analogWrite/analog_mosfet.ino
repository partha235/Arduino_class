int x=3,i=0;
void setup(){
    pinMode(x,OUTPUT);
    Serial.begin(9600);
}
void loop(){
    for(i;i<=250;i++) {
        analogWrite(x,i);
        Serial.println(i);
        delay(100);
    }
    i=0;
}