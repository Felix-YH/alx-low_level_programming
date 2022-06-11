#include "main.h"

/**
 * _memset - fill the first memory with constant bytes
 * @s: memory area
 * @b: constant bytes
 * @n: number of bytes
 *
 * Return: s always
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
