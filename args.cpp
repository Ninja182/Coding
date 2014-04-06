#include <iostream>
using namespace std ;

float fToC ( float degreesF = 32.0 ) ;

int main()
{
    float farenheit, centigrade ;

    cout << "Enter a Farenheit temperature:\t" ;
    cin >> farenheit ;

    centigrade = fToC( farenheit ) ;
    
    cout << farenheit << "F is " << centigrade << "C" ;
    cout << endl << "Freezing point: " << fToC() << "C\n" ;

    return 0 ;
}

float fToC (float degreesF)
{
    float degreesC = ( ( 5.0 / 9.0 ) * (degreesF - 32.0 ) ) ;
    return degreesC ;
}


