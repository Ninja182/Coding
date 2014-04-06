#include <iostream>
#include <vector>
using namespace std ;

int main()
{
    vector <int> vec( 10 ) ;
    int i = 0 ;

    while ( i < vec.size() )
    {
        i++ ;               // increment the counter
        if ( i == 3 )
        {
            cout << " | Skipped" ; continue ;
        }
        if ( i == 8 )
        {
            cout << endl << "Done" ; break ;
        }
        vec [ i-1 ] = i ;   // assign count to the element
        cout << " | " << vec.at(i-1) ;
    }

    cout << "\n" << endl ;

    return 0 ;
}
