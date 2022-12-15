#include <unistd.h>
#include "main.h"

/**
 * _putchar - Entry, it declares write (c system call)
 * 
 * @c: input character parameter
 *
 * Return: 1 if success and -1 if not
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
