#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i <= strlen(str); i++)
	{
		putchar(str[i]);
	}
	printf("\n");
	return (0);
}
