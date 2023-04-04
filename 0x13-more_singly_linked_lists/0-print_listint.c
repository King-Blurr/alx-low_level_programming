#include "lists.h"

/**
 * print_listint - print all the elements of a linked list
 * @h: the linked list
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
