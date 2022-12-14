#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry
 * @n: passed integer argument
 * Return: void
 */

void print_to_98(int n)
{
	int r;

	while (n > 0 && n <= 98)
	{
		r = n++;

		printf("%d, ", r);
	}
	printf("\n");
}
