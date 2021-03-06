//int spd = 100 ; //scanning speed
int potpin = 0 ;
int spd ;

void setup()
{
  for (int outpin = 7; outpin < 14; outpin++) //sets 7 to 13 as outputs with less typing
  {
    pinMode(outpin, OUTPUT) ;
  }
}

void loop()
{
  spd = analogRead(potpin) ;
  spd = map(spd, 0, 1023, 25, 200) ;
  for (int strobe = 7; strobe < 13; strobe++) // turn on then off pins 7 to 12
  {
    digitalWrite(strobe, HIGH) ;
    delay(spd) ;
    digitalWrite(strobe, LOW) ;
  }
  for (int strobe = 13; strobe > 7; strobe--) // turn on then off pins 13 to 8
  {
    digitalWrite(strobe, HIGH) ;
    delay(spd) ;
    digitalWrite(strobe, LOW) ;
  }
}
