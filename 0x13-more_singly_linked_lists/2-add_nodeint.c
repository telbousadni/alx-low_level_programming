#include "limits.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to first node
 * @n: the integer we store in the first node
 *
 * Return: the adress of new element, null if no new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
