#include "lists.h"

/**
 * list_len -  print the list
 * @h: constant pointer to list
 *
 * Return: List
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			s++;
			h = h->next;
		}
	}
	return (s);

}
