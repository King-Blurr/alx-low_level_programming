#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: the linked list
 * Return: the node data
 */

int pop_listint(listint_t **head)
{
	listint_t *move;
	int i;

	if (*head == NULL)
		return (0);
	move = *head;
	i = move->n;
	move = move->next;
	free(*head);
	*head = move;
	return (i);

}
