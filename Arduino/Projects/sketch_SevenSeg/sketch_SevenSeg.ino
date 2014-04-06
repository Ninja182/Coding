/*
 * William Walters
 *
 * Seven segment display output for single module.
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
int n ;

void setup()
{
    // set pin modes
    for(int i = 2; i < 10; i++)
    {
        pinMode(i, OUTPUT) ;
    }

    // set pin outputs to high
    for (int x = 2; x < 10; x++)
    {
        digitalWrite(x, HIGH) ;
    }

    Serial.begin(9600) ;    // for debugging
}

void loop()
{
//    n = analogRead(A0) ;
//    n = 4 ;
//    map(n, 0, 1023, 0, 9) ;
for(int n = 0; n < 10; n++)
{
    int p = 2 ;
    for(int z = 0; z < 8; z++)
    {
        digitalWrite(p, output[n][z]) ;
        p++ ;
    }
    delay(1000) ;
}
}

