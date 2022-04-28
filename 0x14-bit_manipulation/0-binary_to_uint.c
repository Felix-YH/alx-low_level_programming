#include "main.h"
/**
 * binary_to_uint - convert a binary number to unit
 * @b: pointer that stores the number
 *
 * Return: converted number or NULL when b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cnum = 0, mul = 1;
	int i = 0;

	if (b == '\0')
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		cnum += (b[i] - '0') * mul;
		mul *= 2;
	}
	return (cnum);
}
