#include "main.h"

/**
 * print_diagonal - diagonal line drawer function
 * @n: number parameter to specify line length
 * Return: void
 */

void print_diagonal(int n)
{
	int e, i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			for (e = 0; e < i; e++)
				_putchar(' ');
			_putchar(92);

			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
