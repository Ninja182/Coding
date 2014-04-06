#include <iostream>
using namespace std;

int main()
{
    int num = 6;

    switch ( num)
    {
        case 1 : cout << num << " : Monday\n" ; break ;
        case 2 : cout << num << " : Tuesday\n" ; break ;
        case 3 : cout << num << " : Wednesday\n" ; break ;
        case 4 : cout << num << " : Thursday\n" ; break ;
        case 5 : cout << num << " : Friday\n" ; break ;
        default : cout << num << " : Weekend day\n" ;
    }

    return 0;
}
