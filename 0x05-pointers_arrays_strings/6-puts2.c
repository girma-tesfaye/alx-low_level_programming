#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 * @str: An input string
 * Return: None
 */
void puts2(char *str)
{
	int l, n = 0;

	while (str[l] != '\0')
		l++;

	l -= 1;

	for (l = 0; n <= l; n += 2)
		_putchar(str[l]);

	_putchar('\n');
}
