#include "lists.h"

/**
 * print_list - print the elements of a list
 * @h: the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
				current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nodes++;
	}
	return (nodes);
}
