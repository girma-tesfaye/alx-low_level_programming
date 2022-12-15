#include "main.h"

/**
 * print_most_numbers - Entry
 * Return: void
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n >= 0 && n <= 9)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + n);
			n++;
		}
	}
	_putchar('\n');
}
