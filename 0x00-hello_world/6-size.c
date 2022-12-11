#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu bytes \n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes \n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu bytes \n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu bytes \n", (unsigned long)sizeof(f));
	return (0);
}
