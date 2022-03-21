#include "main.h"
/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */

void puts2(char *str)
{
	int first_index, second_index = 0;

	while (str[first_index] != '\0')
	{
		first_index++;
	}

	while (second_index < first_index)
	{
		_putchar(str[second_index]);
		second_index += 2;
	}
	_putchar('\n');
}

