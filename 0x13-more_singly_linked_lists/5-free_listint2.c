#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *del;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		del = (*head)->next;
		free(*head);
		*head = del;
	}

	*head = NULL;
}

