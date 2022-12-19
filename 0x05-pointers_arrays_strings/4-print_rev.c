#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string to stdout
 * @s: a string input pointer
 * Return: non
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;
	while (j)
		_putchar(s[--j]);
	_putchar('\n');
}
