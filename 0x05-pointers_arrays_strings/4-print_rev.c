#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string to stdout
 * @s: a string input pointer
 * Return: non
 */
void print_rev(char *s)
{
	int n;
	int j = strlen(s);

	for (n = 0; j >= 0; j--)
	{
		if (s[n] != '\0')
			_putchar(s[n]);
	}
	_putchar('\n');
}
