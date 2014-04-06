#include <Servo.h> // loads the servo library
Servo myservo ; // create the servo object

int potpin = 0 ; // analog pin used to connect the potentiometer
int val ; //variable to read the value from the analog pin

void setup()
{
  myservo.attach(9) ; // attaches the servo on pin 9 to the servo object
  myservo.write(0) ;
  delay(15) ;
  myservo.write(179) ;
}

void loop()
{
  val = analogRead(potpin) ; // reads the potentiometer value (range 0 - 1023)
  val = map(val, 0, 1023, 0, 179) ; // scale it to use it with the servo (range 0 - 179)
  myservo.write(val) ; // set the servo position according to the scaled value
  delay(15) ; // waits for the servo to move
}
