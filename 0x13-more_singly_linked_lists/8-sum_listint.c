#include "lists.h"

/**
 * sum_listint - sum all data in a list
 * @head: head pointer
 *
 * Return: sum or NULL if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);

}
