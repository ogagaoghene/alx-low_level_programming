#include "main.h"

/**
 *swap_int - Function swaps two integers a and b
 *@a: variable 
 *@b: variable
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
