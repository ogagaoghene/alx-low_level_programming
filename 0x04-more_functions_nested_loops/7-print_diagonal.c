#include "main.h"

/**
 * print_diagonal - Print diagonal
 * @n: variable - enter number of spaces
 * Return: void 
 */
void print_diagonal(int n)
{
	int row, num_lines;
	
	if (n <= 0) 
	{
		_putchar("\n");
	}
	else 
	{
		for(row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for(number_of_lines = 1; num_lines <= row - 1; num_lines++)
				{
					_put_char(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
