#include <Servo.h>

const int button1 = A0;
const int LED = 2;
Servo servo1;  //create servo
Servo servo2;  //create servo
Servo servo3;  //create servo
Servo servo4;  //create servo

void setup()
{
 pinMode(LED, OUTPUT);
 digitalWrite(button1,HIGH);
}
void loop()
{
 if (digitalRead(button1) == 0) { //Button returns 0 if pressed
 digitalWrite(LED, HIGH); //Turn on LED connected to Digital 2
 servo1.write(75);
 delay(250);
 }
 else {
 digitalWrite(LED, LOW);
 servo2.write(75);
 servo3.write(75);
 delay(250);
 }
}
