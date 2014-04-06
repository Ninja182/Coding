int led = 13 ; // this is the PIN the LED is controlled from
int onTime = 250 ;
int offTime = 2000 ;

// the setup routine runs once when you press reset, or power up the Arduino

void setup()
{
  pinMode(led, OUTPUT) ; // initialise the digital pin as an output
}

// this loop routine runs over and over again forever

void loop()
{
  digitalWrite(led, HIGH) ; // turn the LED on (HIGH is the voltage level)
  delay(onTime) ; // wait for a second
  digitalWrite(led, LOW) ; // turn the LED off by making the voltage LOW
  delay(offTime) ; // wait for a second
}
