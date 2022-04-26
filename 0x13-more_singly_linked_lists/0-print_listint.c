#include "lists.h"

/**
 * print_listint - prints all element of a list
 * @h: heaad pointer
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
