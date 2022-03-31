#include "main.h"
/**
 * _puts_recursion - prints a string followed by a newline
 * @s: points to memory block to fill
 * Return: void
 */

void _puts_recursion(char *s)
{
	/*Base condition*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s); /*print s*/
	_puts_recursion(s + 1); /*Recursive part*/
}
