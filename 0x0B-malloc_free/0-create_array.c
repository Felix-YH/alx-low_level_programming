#include "holberton.h"
#include <stdlib.h>


/**
 * create_array - create an array
 * @size: size of array
 * @c: char
 *
 * Return: c
 **/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);

}
