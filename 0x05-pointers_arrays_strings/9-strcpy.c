#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte
 * to the buffer pointed to by dest.
 *
 * @dest: a pointer to destination of string parameter
 * @src: a pointer to source string parameter
 *
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while (*src)
		*dest++ = *src++;

	return (ret);
}
