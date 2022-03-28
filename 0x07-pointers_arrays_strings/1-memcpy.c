#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination area
 * @src: source area
 * @n: number of bytes
 *
 * Return: destination
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);

}
