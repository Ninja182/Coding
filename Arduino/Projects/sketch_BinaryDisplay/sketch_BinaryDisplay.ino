/*
Binary counter

Reads an input from a pushbutton, counts the number of presses
and converts it to a 4-bit binary output over serial

*/

const int buttonPin = 2 ;

int buttonState = 0 ;
int lastButtonState = 0 ;
int buttonPushCounter = 0 ;

void setup()
{
    // Set pins 8 to 11 as outputs
    for (int outpin =8; outpin < 12; outpin++)
    {
        pinMode(outpin, OUTPUT) ;
    }
    Serial.begin(9600) ;
}

void loop()
{  
    int binary[6] = {0, 0, 0, 0, 0, 0} ;
    int a = 0 ;
    int dec = 0 ;
    int reading = 0 ;
    unsigned long lastDebounceTime = 0 ;
    unsigned long debounceDelay = 50 ;

    // read the button for an input
    reading = digitalRead(buttonPin) ;

    if (reading != buttonState)
    {
        lastDebounceTime = millis() ;
    }

    if ((millis() - lastDebounceTime) > debounceDelay)
    {
        // whatever the reading is at, it's been there for longer
        // than the debounce delay, so take the current state:
        
        // if the button state has changed:
        if (reading != lastButtonState)
        {
           // buttonState = reading ;
            if (reading == HIGH)
            {
            buttonPushCounter++ ;
            }

            dec = buttonPushCounter ;

            a = 1 ;
            while( dec > 0 )
            {
                binary[a] = dec % 2 ;
                a++ ;
                dec = dec / 2 ;
            }
 
            // output the value in decimal
            Serial.print("number of button pushes:  ") ;
            Serial.println(buttonPushCounter) ;

            // output the value in binary
            Serial.print("Binary:  ") ;
            
            for(a = 4; a > 0; a--)
            {
               Serial.print(binary[a]) ;
            }

            Serial.println("") ; // print a new line

            digitalWrite(8, binary[1]) ;
            digitalWrite(9, binary[2]) ;
            digitalWrite(10, binary[3]) ;
            digitalWrite(11, binary[4]) ;
        }
    }
        // save the current state as the last state,
        // for the next time through the loop
        lastButtonState = reading ;
}
