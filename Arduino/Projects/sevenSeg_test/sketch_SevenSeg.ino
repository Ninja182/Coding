/*
 * William Walters
 *
 * Seven segment display test.
 * Sets all segments to display
 *
 * For common anode, set all outputs to LOW
 * For common cathode, set all outputs to HIGH
 *
*/

// declare variables
int output[10][10] =    // first array dimension is the number to display
{
    {0,0,0,0,0,0,1,0}, // 0
    {1,0,0,1,1,1,1,0}, // 1
    {0,0,1,0,0,1,0,0}, // 2
    {0,0,0,0,1,1,0,0}, // 3
    {1,0,0,1,1,0,0,0}, // 4
    {0,1,0,0,1,0,0,0}, // 5
    {0,1,0,0,0,0,0,0}, // 6
    {0,0,0,1,1,1,1,0}, // 7
    {0,0,0,0,0,0,0,0}, // 8
    {0,0,0,1,1,0,0,0}, // 9
} ;                    // declare conversion table

void setup()
{
    // set pin modes
    for(int i = 2; i < 10; i++)
    {
        pinMode(i, OUTPUT) ;
    }

    // set pin outputs to low
    for (int x = 2; x < 10; x++)
    {
        digitalWrite(x, LOW) ;
    }
}

void loop()
{
}

