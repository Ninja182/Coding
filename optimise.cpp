#include <iostream>
using namespace std ;

int computeFactorials ( int, int ) ;
//int factorials ( int ) ;
inline int factorials( int n )
{ return ( n == 1 ) ? 1 : (factorials( n - 1 ) * n ) ; }

int main ()
{
    computeFactorials( 1, 8 ) ;

    return 0 ;
}

int computeFactorials( int num, int max )
{
    cout << "Factorial of " << num << ": ";
    cout << factorials( num ) << endl ;  // statements
    num++ ;                             // increments
    if ( num > max ) return 0 ;         // exit...
        else computeFactorials ( num, max ) ;   // or call again
}

/*
int factorials( int n )
{
    int result ;
    if (n == 1 ) result = 1 ;                   // exit or...
    else result = (factorials( n - 1 ) * n ) ;   // decrement
        return result ;                         // and call again
}
*/
