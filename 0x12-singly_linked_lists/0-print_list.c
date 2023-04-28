#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
{
	printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
	c++;

	h = h->next;
}

	return (c);
}
