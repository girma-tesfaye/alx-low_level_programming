#include <stdio.h>

/**
 * main - entry point
 * Rerurn: 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			if (n % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");

	return (0);
}
