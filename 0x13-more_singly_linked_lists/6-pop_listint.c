#include "lists.h"

/**
 * pop_listint - delete head node assign values
 * @head: address of head pointer
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (*head == NULL)
		return (0);

	temp = *head;
	val = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (val);
}
