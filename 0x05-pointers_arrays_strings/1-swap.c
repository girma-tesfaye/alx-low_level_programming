#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: A parameter integer input pointer
 * @b: A parameter integer input pointer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
