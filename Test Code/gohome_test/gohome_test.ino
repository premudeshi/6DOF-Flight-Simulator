#include <Servo.h> 

Servo myservo1; 
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5; 

void setup() {
  // put your setup code here, to run once:
myservo5.attach(9);
myservo4.attach(10);
myservo3.attach(11);
myservo2.attach(12);
myservo1.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo1.write(90);
myservo2.write(90);
myservo3.write(90);
myservo4.write(90);
myservo5.write(90);
delay(500);
  myservo1.write(0);
myservo2.write(180);
myservo3.write(0);
myservo4.write(180);
myservo5.write(0);
delay(500);

}

