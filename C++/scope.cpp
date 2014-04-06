#include <iostream>
using namespace std ;

float bodyTempC() ;
float bodyTempF() ;

int main ()
{
    cout << "Centegrade: " << bodyTempC() << endl ;
    cout << "Farenheit: " << bodyTempF() << endl ;

}

float bodyTempC()
{
    float temperature = 37.0 ;
    return temperature ;
}

float bodyTempF()
{
    float temperature = 98.6 ;
    return temperature ;
}

