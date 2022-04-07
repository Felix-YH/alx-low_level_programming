#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory using malloc
 * @nmemb: number of memory
 * @size: size of bytes
 *
 * Return: A pointer
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memca;
	unsigned int i;

	memca = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (memca == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		memca[i] = 0;

	return (memca);
}
