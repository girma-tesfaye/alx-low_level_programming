#include "main.h"

/**
 * _isupper - program prototype
 * @c: an integer parameter passed to the function _isupper
 * which is literally char type
 * Return: 0 upon successful execution
 */

int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	return (0);
}
