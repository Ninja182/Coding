/*
sketch_30sTimer.ino

Thirty second timer with audio alarm

When the button is pressed, the program flashes a LED on the second for 30s
then sounds a buzzer and resets.

W.Walters
2014-03-18
*/

#include "pitches.h"

int buttonState = 0; // variable for reading the button state
int lastButtonState = 0;
int onTime = 250;
int offTime = 1000 - onTime;
int t = 0 ;
int maxTime = 5 ;          // in seconds
const int buttonPin = 8;
const int ledPin = 12;
const int buzzerPin = 6;
const int powerLED = 13;

void playTune(void);

void setup()
{
    pinMode(12, OUTPUT);    // LED output
    pinMode(6, OUTPUT);     // Buzzer output
    pinMode(8, INPUT);      // Switch input
    pinMode(13, OUTPUT);    // Power LED

    digitalWrite(powerLED, HIGH);
}

void loop()
{
    // Read the pushbutton for an input
    buttonState = digitalRead(buttonPin);

    // Compare the button state to its previous
    if (buttonState != lastButtonState)
    {   // if the state has changed start the timer
        if (buttonState == HIGH)
        {
            // if the current state is HIGH then the button went from
            // off to on
            while (t < maxTime)
            {
                digitalWrite(ledPin, HIGH);
                delay(onTime);
                digitalWrite(ledPin, LOW);
                delay(offTime);
                t++;
            }
            // play a tone
//            tone(buzzerPin, 262, 500);
//            delay(200);
//            noTone(buzzerPin);

            // play the melody in the function
            playTune();
            // reset the timer value
            t = 0;
        }
        // save the current state as the last state
        // for next time through the loop
        lastButtonState = buttonState;
    }
}

void playTune()
{
    // notes in the tune
    int melody[] =
    {
        NOTE_A5, NOTE_E4, NOTE_GS4, NOTE_AS5, NOTE_D5, NOTE_C5, NOTE_E4, NOTE_F4, NOTE_C5, NOTE_B5, NOTE_DS4, NOTE_FS4, NOTE_B5
    };
    // note durations: 4 = quarter, 8 = eighth etc.
    int noteDurations[] = 
    {
        8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 4, 2
    };

    for (int thisNote = 0; thisNote < 13; thisNote++)
    {

        // to calculate the note duration, take one second
        // divided by the note type.
        // eg quarter note = 1000 / 4 etc
        int noteDuration = 1000/noteDurations[thisNote];
        tone(buzzerPin, melody[thisNote], noteDuration);

        // to distinguish the notes, set a minimum time between them.
        // the note's duration + 30% seems to work well
        int pauseBetweenNotes = noteDuration * 1.3;
        delay(pauseBetweenNotes);

        // stop the tone playing
        noTone(buzzerPin);
    }
}
