#include "main.h"

/**
* swap_int: Function to swap two integers
* @a: variable 
* @b: variable
*/

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
