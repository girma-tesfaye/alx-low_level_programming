#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 * @str: An input string
 * Return: None
 */
void puts2(char *str)
{
	int str_len, n = 0;

	str_len = strlen(str);

	for (; n <= str_len; n += 2)
		_putchar(str[str_len]);

	_putchar('\n');
}
