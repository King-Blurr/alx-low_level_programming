#include "lists.h"

/**
 * insert_nodeint_at_index - insert a noe at a given position
 * @head: the linked list
 * @idx: the position
 * @n: the value to be added
 * Return: returns address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp, *newnode;
	unsigned int count = 0, i = 0;

	current = temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	if (idx > count)
	{
		free(newnode);
		return (NULL);
	}
	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		(*head) = newnode;
		return (newnode);
	}
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
