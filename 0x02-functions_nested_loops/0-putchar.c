#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *string = "_putchar";
	int i;
	int length = strlen(string);

	for (i = 0; i <= length; i++)
		putchar(string[i]);
	putchar("\n");
	return (0);
}
