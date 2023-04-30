#include "limits.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: linked list argument of linstint_len function
 *
 * Return: the number of elements in a linked list *h
 */

size_t listint_len(const listint_t *h)
{
	size_t n_elem = 0;

	while (h != NULL)
	{
		n_elem++;
		h = h->next;
	}
	return (n_elem);
}
