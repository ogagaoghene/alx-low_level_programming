#include "main.h"
#include <stdio.h>
/**
 * _strcat - Function that concatenates two strings
 *@dest : variable
 *@src : variable
 * Return: Concatinated string.
 */

char *_strcat(char *dest, char *src)
{
	int first_index. second_index;

	for (first_index = 0; dest[first_index] != '\0'; first_index++)
	{
		continue;
	}

	for (second_index = 0; src[second_index] != '\0'; second_index++)
	{
		dest[first_index] += src[second_index];
		first_index++;
	}
	dest += '\0';
	return (dest);
}
