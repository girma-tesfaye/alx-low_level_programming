#include "main.h"

/**
 * print_sign - Entry
 * @n: parameter
 * Description: print_sign
 * Return: 0
 */

int print_sign(int n)
{
	char a = '+';
	char b = '-';
	int i = 0;

	if (n > 0)
	{
		_putchar(a);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(b);
		return (-1);
	}
	else
	{
		_putchar(i);
		return (0);
	}
	return (0);
}
