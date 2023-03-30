#include "lists.h"

/**
 * list_len - tranverses through a linked list
 * @h: the linked list
 * Return: return the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}
	return (nodes);
}
