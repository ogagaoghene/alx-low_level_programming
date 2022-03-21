#include "main.h"

/**
 * swap_int - Swaps the values of the two integers.
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

