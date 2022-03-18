#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int i;
	int iterations;

	for (iterations = 0; iterations < 10; iterations++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}
}
