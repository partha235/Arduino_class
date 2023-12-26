// this program is done for noInterrupts() function.  
int sen=6,x;

void setup() {
  pinMode(sen,INPUT);
  Serial.begin(9600);
  interrupts();

}

void loop() {
  // noInterrupts();    // disable interrupts.
  x=digitalRead(sen);
  Serial.println("without interrupt " + String(x));
  delay(200);
}


