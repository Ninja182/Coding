int buttonState = 0 ; // variable for reading the pushbutton status

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  buttonState = digitalRead(2); // read the state of the pushbutton
  if (buttonState == HIGH)
  {
    digitalWrite(13, LOW); // turn LED off
  }
  else
  {
    digitalWrite(13, HIGH); // turn LED off
  }
}
  
