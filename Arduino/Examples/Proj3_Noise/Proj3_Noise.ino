void setup()
{
  tone(8,262,250) ; // (outputPIN, note, length)
  delay(325) ;
  tone(8,196,125) ;
  delay(162.5) ;
  tone(8,196,125) ;
  delay(162.5) ;
  tone(8,220,250) ;
  delay(325) ;
  tone(8,196,250) ;
  delay(325) ;
  tone(8,0,250) ;
  delay(325) ;
  tone(8,247,250) ;
  delay(325) ;
  tone(8,262,250) ;
  delay(325) ;
  noTone(8) ; // turn off the sound
}

void loop()
{
  //do nothing
}
