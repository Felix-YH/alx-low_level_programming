#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 **/

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
