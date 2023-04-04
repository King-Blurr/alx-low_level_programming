#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: the linked list
 * @index: the given position
 * Return: 1 0n success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	listint_t *current, *temp, *old;

	if (*head == NULL)
		return (-1);
	current = old = *head;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	if (index >= count)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		*head = temp;
		free(old);
		return (1);
	}
	while (i < index - 1)
	{
		old = old->next;
		i++;
	}
	temp = old->next;
	old->next = temp->next;
	free(temp);
	return (1);
}
