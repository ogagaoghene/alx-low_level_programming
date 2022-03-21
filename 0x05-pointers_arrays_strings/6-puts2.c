#include "main.h"
/**
 * puts2 - prints one char out of 2
 * @str: pointer to char type
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
