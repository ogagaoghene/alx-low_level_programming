#include "main.h"

/**
 * print_line - Prints a line
 *@n: variable
 * Return: void .
 */
void print_line(int n)
{
	int count;
	count = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
