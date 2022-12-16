#include "main.h"

/**
 * print_square - a funcn to print a square of size size
 * @size: a parameter that determine size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size > 0)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
