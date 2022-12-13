#include "main.h"

/**
 * _isalpha -prototype
 * @c: argument
 * Description: _isalpha checker
 * Return: always 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' && c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	return (0);
}
