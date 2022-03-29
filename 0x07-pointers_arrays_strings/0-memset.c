#include "main.h"
/**
 * _memcpy - Function that fills memory with a constant byte
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
