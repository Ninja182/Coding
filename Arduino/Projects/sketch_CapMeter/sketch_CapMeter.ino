/*
Paul Badger 2008
Demonstrates use of RC time constants to measure the value of a capacitor 

Theory   A capcitor will charge, through a resistor, in one time constant, defined as T seconds where
    TC = R * C
    TC = time constant period in seconds
    R = resistance in ohms
    C = capacitance in farads (1 microfarad (ufd) = .0000001 farad = 10^-6 farads ) 

The capacitor's voltage at one time constant is defined as 63.2% of the charging voltage.

Hardware setup:
Test Capacitor between common point and ground (positive side of an electrolytic capacitor  to common)
Test Resistor between chargePin and common point
220 ohm resistor between dischargePin and common point
 Wire between common point and analogPin (A/D input)
 */

const int analogPin = 0;                // for measuring the capacitor voltage
const int chargePin = 13;               // to charge the capacitor
const int dischargePin = 11;            // to discharge the capacitor
const float resistorValue = 10000.0;    // set this to whatever resistor is being used

unsigned long startTime;
unsigned long elapsedTime;
float microFarads;
float nanoFarads;

void setup()
{
    pinMode(chargePin, OUTPUT);
    digitalWrite(chargePin, LOW);

    Serial.begin(9600); // for debugging
}

void loop()
{
    digitalWrite(chargePin, HIGH);  // start charging the capacitor
    startTime = millis();           // record the time started

    while(analogRead(analogPin < 648))
    {
        // loop nothing until 63.2% charge
    }

    elapsedTime = millis() - startTime;
    // convert ms to s and F to uF
    microFarads = (elapsedTime / resistorValue) * 1000;
    Serial.print(elapsedTime);
    Serial.println(" mS     ");

    if(microFarads > 1)
    {
        Serial.print(microFarads);
        Serial.println(" microfarads");
    }
    else
    {
        // if the value is smaller than one uF, convert to nF
        nanoFarads = microFarads * 1000.0;
        Serial.print(nanoFarads);
        Serial.println("  nanoFarads");
    }

    // Discharge the capacitor
    digitalWrite(chargePin, LOW);       // stop charging
    pinMode(dischargePin, OUTPUT);      // activate the discharge pin
    digitalWrite(dischargePin, LOW);    // set the discharge pin to drain
    while(analogRead(analogPin) > 0)
    {
        // loop nothing again until the capacitor is empty
    }

    pinMode(dischargePin, INPUT);   // set the discharge pin back to input
}
