// this function is based on analog read where we convert the analog read into a certain scalable measure.
#define pot A0  
void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);

}

void loop() {
  int x= analogRead(pot); // reading and storing variable voltage at pin A0 into x.
  /* 
  I'm running this code on Arduino UNO.
  The ADC on the Arduino is a 10-bit ADC meaning it has the ability to detect 1,024 (2^10) discrete analog levels.
  Based upon the microcontroller your using you have to know the maximum value of analog read. 
  It can be calculated with powering ADC bit value of mcu  to base 2 (2^n).[n is ADC bit value.]
  */
  int need_value=map(x,0,1023,5,255); // map function used to scale the reading.
                                      // syntax: map(value, fromLow, fromHigh, toLow, toHigh)
  Serial.println("need value is " + String(need_value)); // converted int to string to print in a lines.
  delay(200);
}
