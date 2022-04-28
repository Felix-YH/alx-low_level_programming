#include "main.h"

/**
 * set_bit - set bit value to 1
 * @n: integer
 * @index: index to set
 *
 * Return: 1 on success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
