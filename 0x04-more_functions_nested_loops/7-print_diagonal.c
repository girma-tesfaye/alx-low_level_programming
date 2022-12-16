#include "main.h"

/**
 * print_diagonal - diagonal line drawer function
 * @n: number parameter to specify line length
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (; i < n; i++)
				_putchar(' ');
			_putchar(92);

			i++;
		}
	}
	_putchar('\n');
}
