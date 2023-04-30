#include "lists.h"

/**
 * add_nodeint_end - function adding a new node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: integer to be input
 *
 * Return: NULL if there are no node, the adress of new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end;
	listint_t *temp = *head;

	node_end = malloc(sizeof(listint_t));

	if (node_end == NULL)
		return (NULL);
	node_end->n = n;
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node_end;

	return (node_end);
}
