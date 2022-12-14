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

	fib[0] = 1;
	fib[1] = 2;

	printf("%ld, %ld, ", fib[0], fib[1]);

	for (n = 2; n < 50; n++)
	{
		fib[n] = fib[n - 1] + fib[n - 2];
		if (n == 49)
			printf("%ld\n", fib[n]);
		else
			printf("%ld, ", fib[n]);
	}
	return (0);
}
