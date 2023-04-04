#include "lists.h"

/**
 * sum_listint - sum all the data in a linked list
 * @head: the linked list
 * Return: the sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0, i;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i = head->n;
		sum = sum + i;
		head = head->next;
	}
	return (sum);
}
