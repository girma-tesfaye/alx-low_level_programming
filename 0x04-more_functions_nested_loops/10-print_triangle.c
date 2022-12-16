#include "main.h"

/**
 * print_triangle - custom sized triangle printer
 * @size: triangle base parameter
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, n;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				n = size - 1;
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}

}
