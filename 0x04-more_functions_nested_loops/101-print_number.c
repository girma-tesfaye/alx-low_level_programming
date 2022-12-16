#include "main.h"

void print_integer(int j);

/**
 * print_number - entry point.
 * @n: An input parameter
 * Return: Nothing
 */

void print_number(int n)
{
	if (n == 0)
		_putchar(48);
	else if (n < 0)
	{
		_putchar(45);
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function
 * @j: an input paramter
 * Return: Nothing
 */
void print_integer(int j)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (j / i != 0)
		{
			_putchar((j / i) % 10 + '0');
		}
}
