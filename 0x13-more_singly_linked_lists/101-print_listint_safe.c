#include "lists.h"

/**
 * _a - reallocates memory for array of pointers to linked list
 * @prev: the old list
 * @size: size of the new list
 * @cur: new node to add to the list
 * Return: address of the first node in new list
 */
const listint_t **_a(const listint_t **prev, size_t size, const listint_t *cur)
{
	const listint_t **new;
	size_t count;

	new = malloc(size * sizeof(listint_t *));
	if (new == NULL)
	{
		free(prev);
		exit(98);
	}
	for (count = 0; count < size - 1; count++)
		new[count] = prev[count];
	new[count] = cur;
	free(prev);
	return (new);
}

/**
 * print_listint_safe -prints a linked list
 * @head: the linked list
 * Return: returns the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **newnode = NULL;
	size_t count, num = 0;

	while (head != NULL)
	{
		for (count = 0; count < num; count++)
		{
			if (head == newnode[count])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(newnode);
				return (num);
			}
		}
		num++;
		newnode = _a(newnode, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(newnode);
	return (num);
}
