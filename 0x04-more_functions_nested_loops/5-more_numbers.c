#include "main.h"

/**
 * more_numbers - Entry
 * Return: void
 */

void more_numbers(void)
{
	int n = '0', i;

	while (n <= '9')
	{
		for (i = '0'; i <= '9'; i++)
			_putchar(i);
		n++;
		_putchar('\n');
	}
}
