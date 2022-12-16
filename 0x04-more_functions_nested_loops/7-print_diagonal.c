#include "main.h"

/**
 * print_diagonal - diagonal line drawer function
 * @n: number parameter to specify line length
 * Return: void
 */

void print_diagonal(int n)
{
	char diag_line = 92, diag_space = 32;
	int i = 1;

	while (i <= n)
	{
		if (n < 1)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 1; i <= n; i++)
				_putchar(diag_space);
			_putchar(diag_line);
		}
		i++;
		_putchar('\n');
	}
}
