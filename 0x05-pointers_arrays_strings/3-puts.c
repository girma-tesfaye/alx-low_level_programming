#include "main.h"
#include <string.h>

/**
 * _puts - a function that prints a string to stdout
 *@str: a string input pointer
 * Return: none
 */

void _puts(char *str)
{
	int n;
	int j = strlen(str);

	for (n = 0; n <= j; n++)
	{
		if (str[n] != '\0')
			_putchar(str[n]);
	}
	_putchar('\n');
}
