int x=A0;
void setup(){
    pinMode(x,INPUT);
    Serial.begin(9600);
}
void loop(){
    int g=analogRead(x);
    if(g>=1000){
        Serial.println("greater than 1000");
        delay(150);
    }
    else if(g>=800){
        Serial.println("greater than 800");
        delay(150);
    }
     else if(g>=600){
        Serial.println("greater than 600");
        delay(150);
    }
     else if(g>=400){
        Serial.println("greater than 400");
        delay(150);
    }
     else if(g>=200){
        Serial.println("greater than 200");
        delay(150);
    }
    else {
        Serial.println("greater than 0");
        delay(150);
    }
}