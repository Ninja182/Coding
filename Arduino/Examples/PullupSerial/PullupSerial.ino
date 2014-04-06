/*
Input Pullup Serial

This example demonstrates the use of minMode(INPUT_PULLUP).
It reads a digital input on pin 2 and prints the result to the
serial monitor.

The circuit:
* Momentary switch attached from pin 2 to ground
* Built-in LED on pin 13

Unlike pinMode(INPUT), there is no pull-down resistor necessary.
An internal 20K-ohm resistor is pulled to 5v. This configuration causes
the input to read HIGH when the switch is open, and LOW when it is
closed.

Created 2012-03-14
by Scott Fitzgerald

http://www.arduino.cc/en/tutorial/InputPullupSerial

This example code is in public domain
*/

void setup()
{
    // start serial connection
    Serial.begin(9600) ;
    // configure pin2 as an input and enable the internal pull-up
    // resistor
    pinMode(2, INPUT_PULLUP) ;
    pinMode(13, OUTPUT) ;
}

void loop()
{
    // read the pushbutton into a variable
    int sensorVal = digitalRead(2) ;
    // print out the value of the pushbutton
    Serial.println(sensorVal) ;

    // Keep in mind the pullup means the pushbutton's
    // logic is inverted. It goes HIGH when it' open,
    // and LOW when it's pressed. Turn on pin 13 when
    // the button's pressed, and off when it's not.

    if (sensorVal == HIGH)
    {
        digitalWrite(13, LOW) ;
    }
    else
    {
        digitalWrite(13, HIGH) ;
    }
}

