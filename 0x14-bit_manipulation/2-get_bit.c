#include "main.h"

/**
 * get_bit - returns the bit value at a given index
 * @n: number
 * @index: index to get bit
 * Return: bit value or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}
