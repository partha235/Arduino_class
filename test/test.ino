
void setup(){
    pinMode(13,OUTPUT);
    Serial.begin(9600);
}
void loop(){
    
    digitalWrite(13,true);# here i had wriiten "HIGH" as "1", we can also write as "true"
    delay(500); 
    digitalWrite(13,false);# here i had wriiten "LOW" as "0", we can also write as "false"
    delay(500);
}