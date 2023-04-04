#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: the linked list
 * @n: the value to be added
 * Return: the address of the new  element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp && temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
