/*
DigitalReadSerial
Reads a digital input on pin 2, prints the result to the serial
monitor

This example code is in the public domain
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:

int pushButton = 2 ;

// the setup routine runs once you press reset:
void setup()
{
    // initialise the serial communication at 9600 bits per sec
    Serial.begin(9600) ;
    // make the push button's pin an input
    pinMode(pushButton, INPUT) ;
}

void loop()
{
    // read the input pin
    int buttonState = digitalRead(pushButton) ;
    // print out the state of the button
    Serial.println(buttonState) ;
    delay(1) ;
}
