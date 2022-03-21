#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character, followed by a new line.
 * @str: type
 *
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
