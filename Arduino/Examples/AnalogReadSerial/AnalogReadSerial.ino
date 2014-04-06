/*
AnalogReadSerial
Reads an analog input on pin 0, prints the result to the serial monitor
Attach the centre pin of a potentiometer to pin A0, and the outside pins to + and GND

This code is public domain
*/

// the setup routine runs on power up
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int sensorValue = analogRead(A0); // read A0 and store as sensorValue
    Serial.println(sensorValue); // send the sensorValue to via the serial
    delay(1); // delay in between reads for stability
}
