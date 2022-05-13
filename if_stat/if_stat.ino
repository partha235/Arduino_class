
#define x 2
int f=0;
void setup(){
    pinMode(x,INPUT);
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}
void loop(){
    int g=digitalRead(x);
    if (g==HIGH){
        f++;
        Serial.println("object detected");
        Serial.println(f);
        digitalWrite(13,HIGH);
        delay(500);
    }
    digitalWrite(13,LOW);
}