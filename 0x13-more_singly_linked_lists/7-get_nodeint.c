#include "lists.h"

/**
 * get_nodeint_at_index -  get the nth node
 * @head: pointer to head
 * @index: node to be called
 *
 * Return: Node on success and NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}

