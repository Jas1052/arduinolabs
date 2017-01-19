#include <Servo.h>

Servo servo1;  //create servo
Servo servo2;  //create servo
Servo servo3;  //create servo
Servo servo4;  //create servo

void setup()
{
   servo1.attach(9);   //servo is connected to digital output 9
   servo2.attach(8);   //servo is connected to digital output 8
   servo3.attach(7);   //servo is connected to digital output 7
   servo4.attach(6);   //servo is connected to digital output 6
}
   
void loop()
{
   servo1.write(0);  //0 – 180 for older Vex motors. 15 – 165 for new type.
   servo1.write(100);
   delay(300);  //one full circle
   servo3.write(0);
   servo3.write(100);
   delay(300); //second full circle
} 
      
