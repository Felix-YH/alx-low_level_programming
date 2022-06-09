#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer
 * @index: node to get
 *
 * Return: NULL if node does not exist
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head && count < index)
	{
		head = head->next;
		count++;
	}

	return (head ? head : NULL);
}
