#include "main.h"

/**
 * print_diagonal - Print diagonal
 *@n: variable
 * Return: void .
 */
void print_diagonal(int n)
{
	int count, i;
	count = 0;
	if (n > 0)
	{
		while (count < n)
		{
			count++;
			i = count;
			while (i > 1)
			{
				_putchar(' ');
				i--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
