#include "main.h"

/**
 * print_line - A function that prints n number of lines
 * @n: A parameter to be passed to function print_line
 * Return: none
 */

void print_line(int n)
{
	char l = '_';
	int i = 1;

	while (i <= n)
	{
		if (n < 1)
			_putchar('\n');
		_putchar(l);
		i++;
	}
	_putchar('\n');
}
