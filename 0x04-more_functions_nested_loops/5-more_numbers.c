#include "main.h"

/**
 * more_numbers - Entry
 * Return: void
 */

void more_numbers(void)
{
	int n = 0;
	int i;

	while (n <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}

		n++;
		_putchar('\n');
	}
}
