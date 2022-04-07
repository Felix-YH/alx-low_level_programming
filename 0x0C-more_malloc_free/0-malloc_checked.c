#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that uses malloc to allocate
 * memory
 * @b: size
 *
 * Return: - A pointer
 **/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);

}
