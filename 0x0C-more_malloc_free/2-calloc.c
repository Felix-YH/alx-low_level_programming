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
	char *p;


	if (nmemb == 0 || size == 0)
		return (NULL);

	memca = malloc(size * nmemb);

	if (memca == NULL)
		return (NULL);

	p = memca;

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (memca);

}
