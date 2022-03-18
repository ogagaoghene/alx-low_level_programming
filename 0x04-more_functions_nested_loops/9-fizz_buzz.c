#include <stdio.h>

/**
* main - entry point
* Return: void
*/

int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)  
	{
		if ((index % 3 == 0) && (index % 5 == 0))
		{
			printf("FizzBuzz,\t");
		}
		else if (index % 5 == 0)
		{
			printf("Buzz,\t");
		}
		else if (index % 3 == 0)
		{
			printf("Fizz,\t");
		}
		else 
			printf("\n");	
	}
	return (0);		
}
