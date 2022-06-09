#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer that holds the header node
 *
 * Return: the number of node
 **/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
