#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: an input string
 * Return: None
 */
void rev_string(char *s)
{
	int length = 0, n = 0;
	char rev;

	while (s[length] != '\0')
		length++;

	while (n < length--)
	{
		rev = s[n];
		s[i++] = s[length];
		s[length] = rev;
	}
}
