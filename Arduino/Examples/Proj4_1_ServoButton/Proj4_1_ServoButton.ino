#include <Servo.h> // loads the servo library
Servo myservo ; // create the servo object

int buttonState = 0 ; // analog pin used to connect the potentiometer
int val ; //variable to read the value from the analog pin

void setup()
{
  myservo.attach(9) ; // attaches the servo on pin 9 to the servo object
  pinMode(2, INPUT) ;
}

void loop()
{
  buttonState = digitalRead(2) ;
  
  if (buttonState == HIGH)
 { 
  //val = map(val, 0, 1023, 0, 179) ; // scale it to use it with the servo (range 0 - 179)
  myservo.write(0) ; // set the servo position according to the scaled value
  delay(15) ; // waits for the servo to move
 }
 else
 {
   myservo.write(179) ;
   delay(15) ;
 }
}
