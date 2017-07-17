  #include <Servo.h> 

Servo myservo1; 
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5; 

  int led = 13; // Pin 13
  
  void setup()
  {
     pinMode(led, OUTPUT); // Set pin 13 as digital out
 
     // Start up serial connection
     Serial.begin(9600); // baud rate
     Serial.flush();
     
     myservo5.attach(9);
myservo4.attach(10);
myservo3.attach(11);
myservo2.attach(12);
myservo1.attach(13);
 }
 
 void loop()
 {
     String input = "";
 
     // Read any serial input
     while (Serial.available() > 0)
     {
         input += (char) Serial.read(); // Read in one char at a time
         delay(5); // Delay for 5 ms so the next char has time to be received
     }
 
     if (input == "home")
     {
           myservo1.write(90);
myservo2.write(90);
myservo3.write(90);
myservo4.write(90);
myservo5.write(90); 
     }
     else if (input == "off")
     {
         digitalWrite(led, LOW); // off
    }}
