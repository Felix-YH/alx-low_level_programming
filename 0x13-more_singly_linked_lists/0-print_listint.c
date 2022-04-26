#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all element of a list
 * @h: heaad pointer
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
