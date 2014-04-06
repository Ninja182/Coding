/*
Pitch follower

Plays a pitch that changes based on a changing analog input

Circuit:
- 8-ohm speaker on pin 9
- photoresistor on analog 0 to 5v
- 4.7K resistor on analog 0 to gnd

Created 21 Jan 2010
Modified 31 May 2012
by Top Igoe, with suggestion from Michael Flynn

This example is in the public domain

http://arduino.cc/en/Tutorial/Tone2
*/

void setup()
{
    // initialise serial communications for debugging
    Serial.begin(9600);
}

void loop()
{
    // read the sensor:
    int sensorReading = analogRead(A0);
    // print the sensor reading so you know it's range
    Serial.println(sensorReading);
    // map the analog input range
    // to the output pitch range (120 - 1500Hz)
    // change the minimum and maximum input numbers below
    // depending on the range your sensor's giving:
    int thisPitch = map(sensorReading, 400, 1000, 120, 1500);

    // play the pitch:
    tone(9, thisPitch, 10);
    delay(1); // delay in between reads for stability
}
