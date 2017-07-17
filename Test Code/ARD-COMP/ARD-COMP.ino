String voice; 
  #include <Servo.h> 

Servo myservo1; 
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5;

void setup() {
pinMode(13, OUTPUT);  
Serial.begin(9600);


} 


void loop() {
  while (Serial.available())
  { 
  delay(10); 
  char c = Serial.read(); 
  voice += c; 
  }  
  if (voice.length() == 0)
  {
off();
  }
  else { 
  if (voice.length() > 0)
  { 
       if(voice == "home")
       {
on();
myservo1.write(90);
myservo2.write(90);
myservo3.write(90);
myservo4.write(90);
myservo5.write(90); 
delay(1000);
off();         
        }  
  if(voice == "rroll")
  {
 on();
myservo1.write(180);
myservo2.write(0);
myservo3.write(180);
myservo4.write(180);
myservo5.write(0); 
delay(1000);
off();
    } 
    
  else{    
      if(voice == "lroll")
  {
    on();
myservo1.write(0);
myservo2.write(180);
myservo3.write(0);
myservo4.write(0);
myservo5.write(180); 
delay(1000);
off();
    }
voice="";
}
}
}
}

void off() {
myservo5.detach();
myservo4.detach();
myservo3.detach();
myservo2.detach();
myservo1.detach();
}

void on() {
myservo5.attach(9);
myservo4.attach(10);
myservo3.attach(11);
myservo2.attach(12);
myservo1.attach(13);
  
}
