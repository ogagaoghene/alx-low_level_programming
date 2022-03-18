#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int n = 612852475143;
	long int pn;

	for (pn = 2; pn < n; pn++)
	{
		if (n % pn == 0)
		{
			n = n / pn;
		}
	}
	printf("%ld\n", pn);
	return (0);
}
