#include "main.h"

/**
 * print_numbers - A function that prints integers 0 to 9
 * Return: 0 if succed
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n);
	_putchar('\n');
}