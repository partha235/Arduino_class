// this code was to use MOSFET as driver for device/instrument with higher voltage than 5v.
// where arduino works with 5v/3.3v, you cant use it for device with higher than 5v.
// In this you can choose any type of MOSFET (N/P channel) but you have to connect the gnd (-ev) of both (device & arduino) in common.
// refer the image from the site for connection https://aws1.discourse-cdn.com/arduino/original/4X/e/c/a/ecafb870fafa9dc4fcbe8c8b28c03b2b8dfc8d60.jpeg

// here i have choosen pin 3, where you can choose any pin with PWM capability.

int x=3,i=0;
void setup(){
    pinMode(x,OUTPUT);
    Serial.begin(9600);
}
void loop(){
    // I used a range of 0 to 250 in analogWrite ("i"value) the full rage of operation waws 0 to 255.

    for(i;i<=250;i++) { 
        analogWrite(x,i);
        Serial.println(i);
        delay(100);
    }
    i=0;
    // for loop stops when the value of "i" reach 250.
    // so to run the loop again i declare i as 0 in the end, thus loop go endless.
}