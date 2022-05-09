#define x 4
void setup(){
    pinMode(x,INPUT);
    Serial.begin(9600);
}
void loop(){
    Serial.print(digitalRead(x));
    if(digitalRead(x)==HIGH){
        Serial.println("object detected");
        delay(100);
    }
    else {
        Serial.println("object not detected");
        delay(100);
    }
}