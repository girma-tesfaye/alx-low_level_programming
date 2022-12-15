#include "main.h"

/**
 * _isdigit - Entry point
 * @c: the parameter
 * Return: 0 for success execution
 */

int _isdigit(int c)
{
	int n = '0';
	int i = 0;

	for (; n <= '9'; n++)
	{
		if (n == c)
		{
			i  = 1;
			break;
		}
	}
	return (i);
}
