#include "main.h"

/**
 * _isalpha -prototype
 * @c: argument
 * Description: _isalpha checker
 * Return: always 0
 */

int _isalpha(int c)
{
	char a;

	if (a >= 'A' && a <= 'Z' && a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
	return (0);
}
