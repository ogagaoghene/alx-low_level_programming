#include "main.h"
/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0', index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

