#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: the list
 * Return: Address to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *newnode, *oldnode;

	oldnode = newnode = NULL;

	while (*head != NULL)
	{
		newnode = (*head)->next;
		(*head)->next = oldnode;
		oldnode = *head;
		*head = newnode;
	}
	*head = oldnode;
	return (*head);
}
