// this program to see print function. 

int x= 125;
String y="hi"
void setup() {
  Serial.begin(9600);
  Serial.print(x,BIN);  //Serial.print(value,format)
  Serial.println(" in binary");
  Serial.print(x,HEX);
  Serial.println(" in hex ");
  Serial.println(x,OCT); // Serial.println() --> jumps to next line/.
  Serial.println(" in Octal");
  Serial.print(x,DEC);
  Serial.println(" in decimal ");
}

void loop() {
  try { 
  Serial.print(y,DEC);
} 
catch (String error) {
  Serial.print(error);
}
}
