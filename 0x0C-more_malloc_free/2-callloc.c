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

	memca = malloc(sizeof(int) * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if ( memca == NULL)
		return (NULL);

	return (memca);
}
