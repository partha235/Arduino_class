int di=10, sen=A0;
void setup(){
    pinMode(di,INPUT);
    pinMode(sen,INPUT);
    Serial.begin(9600);
}
void loop(){
    int x=digitalRead(di);
    int y=analogRead(sen);
    Serial.println(x);
    Serial.println(y);
    delay(100);
}