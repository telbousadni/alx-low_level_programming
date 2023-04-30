#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h : linked list argument of the function
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nod++;
		h = h->next;
	}
	return (n_nod);
}
