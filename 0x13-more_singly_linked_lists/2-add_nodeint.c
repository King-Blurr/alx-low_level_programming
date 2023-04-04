#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: the list
 * @n: the value to be added
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	if (head == NULL)
	{
		*head = newnode;
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);

}
