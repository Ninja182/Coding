/*
 * output_map.c
 * 
 * translates a decimal number into an output array for aruduino uno
 * starting at pin 2
 * 
 * Will Walters
 * 2014-04-06
*/

#include <stdio.h>

/*
value 1
{1,0,0,1,1,1,1}
value 2
{0,0,1,0,0,1,0}
value 3
{0,0,0,0,1,1,0}
value 4
{1,0,0,1,1,0,0}
value 5
{0,1,0,0,1,0,0}
value 6
{0,1,0,0,0,0,0}
value 7
{0,0,0,1,1,1,1}
value 8
{0,0,0,0,0,0,0}
value 9
{0,0,0,1,1,0,0}
*/

int a = 1 ;

int array[9][10] = 
{
{1,0,0,1,1,1,1,0}, // 1
{0,0,1,0,0,1,0,0}, // 2
{0,0,0,0,1,1,0,0}, // 3
{1,0,0,1,1,0,0,0}, // 4
{0,1,0,0,1,0,0,0}, // 5
{0,1,0,0,0,0,0,0}, // 6
{0,0,0,1,1,1,1,0}, // 7
{0,0,0,0,0,0,0,0}, // 8
{0,0,0,1,1,0,0,0}  // 9
} ;                // 9 possible digits, 8 possible outputs

int main()
{
    int i ;
    for(i = 0; i < 8; i++)
    {
        printf("%d", array[a-1][i]) ;
    }
    printf("\n") ;
    return 0 ;
}
