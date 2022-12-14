#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	long int fib[50];

	fib[0] = 0;
	fib[1] = 1;

	for (n = 2; n < 50; n++)
	{
		fib[n] = fib[n - 1] + fib[n - 2];
			printf("%ld, ", fib[n]);
	}
	return (0);
}
