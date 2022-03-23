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
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}

