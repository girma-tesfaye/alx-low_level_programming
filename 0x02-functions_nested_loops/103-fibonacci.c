#include <stdio.h>

/**
 * main - Entry point of the program execution
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int n;
	long int sum, fib[50];

	fib[0] = 1;
	fib[1] = 2;
	fib[n] = fib[n - 1] + fib[n - 2];

	for (n = 2; n <= 50; n++)
	{
		if (fib[n] % 2 == 0 && fib[n] <= 4000000)
		{
			sum += fib[n];
			printf("%ld\n", sum);
		}
	}
}

