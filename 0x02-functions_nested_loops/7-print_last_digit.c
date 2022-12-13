#include "main.h"

/**
 * print_last_digit - Entry
 * @n: Argument
 * Description: print_last_digit
 * Return: 0
 */

int print_last_digit(int n)
{
	char last_digit = n % 10;

	_putchar(last_digit);
	return (0);
}

