#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: print_alphabet_x10
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
