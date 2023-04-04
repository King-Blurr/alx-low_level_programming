#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: the linked list
 * @index:index of the node
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0, i = 0;

	if (head == NULL)
		return (NULL);
	current = temp = head;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	if (index >= count)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);

}
