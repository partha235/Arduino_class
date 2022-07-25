
void setup(){
    pinMode(13,OUTPUT);
    Serial.begin(9600);
}
void loop(){
    
    digitalWrite(13,1);//here i had wriiten "HIGH" as "1", we can also write as "true"
    delay(500); 
    digitalWrite(13,0);// here i had wriiten "LOW" as "0", we can also write as "false"
    delay(500);
}