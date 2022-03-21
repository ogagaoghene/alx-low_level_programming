#include "main.h"
/**
 *swap_int - function to swap two integers
 *@a : variable
 *@b : variable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
