/*
ReadAnalogVoltage

Reads an analog input on pin A0, converts it to voltage, and prints the result to the serial monitor
Attach the centre pin of a potentiometer to pin A0, and the outside pins to +5v and Gnd.

This example code is in the public domain.
*/

// the setup routine runs once when you press reset.
void setup()
{
    // initialise the serial communication at 9600 baud
    Serial.begin(9600);
}

void loop()
{
    // read the input on analog pin 0
    int sensorValue = analogRead(A0);
    // convert the analog reading (which goes from 0 - 1023) to a
    // voltage (0 - 5v)
    float voltage = sensorValue * (5.0 / 1023.0);
    // print out the value read
    Serial.println(voltage);
}

