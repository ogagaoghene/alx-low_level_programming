#include "mai.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 1;

	while (count < 101)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", count);
		}

		if (count != 100)
		{
		printf(" ");
		}
		count++;
	}
	printf("\n");
	return (0);
}

