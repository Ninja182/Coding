const int buttonPin = 2 ;
const int ledPin = 13 ;

int buttonPushCounter = 0 ;
int buttonState = 0 ;
int lastButtonState = 0 ;

void setup()
{
    pinMode(buttonPin, INPUT) ;
    pinMode(ledPin, OUTPUT) ;
    Serial.begin(9600) ;
}

void loop()
{
    // read the pushbutton for an input
    buttonState = digitalRead(buttonPin) ;

    // compare the button state to its previous
    if (buttonState != lastButtonState)
        {   // if the state has changed, increment the counter
            if (buttonState == HIGH)
                // if the current state is HIGH then the button went from
                // off to on
                {
                    buttonPushCounter++ ;
                    Serial.println("on") ;
                    Serial.print("number of button pushes:  ") ;
                    Serial.println(buttonPushCounter) ;
                }
                else
                {
                    // if the current state is LOW then the button
                    // went from on to off
                    Serial.println("off") ;
                }
        }
        // save the current state as the last state,
        // for next time through the loop
        lastButtonState = buttonState ;

        // turns on the LED every four button pushes by
        // checking the modulo of the button push counter
        // the modulo function gives you the remainder of
        // the division of two numbers:
        if (buttonPushCounter % 4 == 0)
        {
            digitalWrite(ledPin, HIGH) ;
        }
        else
        {
            digitalWrite(ledPin, LOW) ;
        }
}

