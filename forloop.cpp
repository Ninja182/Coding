#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int i ;
    int j ;

    for ( i = 1 ; i < 4 ; i++)
    {
        cout << "Loop iteration: " << i << endl ;

        for ( j = 1 ; j < 4 ; j++ )
        {
            cout << "  Inner loop iteration: " << j << endl ;
        }
    }

return 0 ;
}

