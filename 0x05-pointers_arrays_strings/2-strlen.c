#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: a string input pointer
 * Return: integer
 */

int _strlen(char *s)
{
	int length;

	while (s[length] != '\n')
		length++;
	return (length);
}
