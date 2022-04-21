#include "lists.h"

/**
 * print_list -  print the list
 * @h: constant pointer to list
 *
 * Return: List
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		s++;
		h = h->next;
	}
	return (s);

}
