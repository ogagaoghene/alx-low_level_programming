#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string to newly allocated space in memory
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
