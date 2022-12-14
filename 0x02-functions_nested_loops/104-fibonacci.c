#include <stdio.h>

/**
 * main - Execution entry point
 *
 * Return: should be 0 upon success
 */

int main(void)
{
	int n;
	long int f[98];

	f[0] = 1;
	f[1] = 2;

	printf("%ld, %ld, ", f[0], f[1]);

	for (n = 2; n < 98; n++)
	{
		f[n] = f[n - 1] + f[n - 2];

		if (n == 97)
			printf("%ld\n", f[n]);
		else
			printf("%ld, ", f[n]);
	}
	return (0);
}
