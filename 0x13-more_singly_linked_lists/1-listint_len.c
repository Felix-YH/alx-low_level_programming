#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h:header
 *
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
