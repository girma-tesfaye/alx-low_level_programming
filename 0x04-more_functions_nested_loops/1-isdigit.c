#include "main.h"

/**
 * _isdigit - Entry point
 * @c: the parameter
 * Return: 0 for success execution
 */

int _isdigit(int c)
{
	int n;
	int i = 0;

	for (n = 0; n <= 9; n++)
	{
		if (c == n)
		{
			i  = 1;
			break;
		}
	}
	return (i);
}
