// this program is done for interrupts() function and noInterrupts() function.  
int sen=2,x;

void setup() {
  pinMode(sen,INPUT);
  Serial.begin(9600);

}

void with_intre() {
  interrupts();      // enable interrupts.
  x=digitalRead(sen);
  Serial.println("with interrupt" + String(x));
}
void no_inter(){
  noInterrupts();    // disable interrupts.
  x=digitalRead(sen);
  Serial.println("without interrupt" + String(x));
}

void loop() {
  with_intre();
  delay(200);
  no_inter();
}


