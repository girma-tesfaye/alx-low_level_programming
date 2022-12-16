#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, j = 612852475143;

	for (i = 3; i < 12057; i += 2)
	{
		while (j % i == 0 && j != i)
			j /= i;
	}
	printf("%lu\n", j);
	return (0);
}
