#include "main.h"

/**
 * more_numbers - Entry
 * Return: void
 */

void more_numbers(void)
{
	int n = 0, i;

	while (n <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
			{
				_putchar('0' +  i);
			}
		}
		n++;
		_putchar('\n');
	}
}
