#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer
 * Return: the number of nodes
 */

size_t print_list( const list_t *h){
	size_t c = 0;

	while (c != NULL)
	{
		printf("[%lu] %s", h->len, h->str ? h->str : "(nil)");
		printf("\n");
		h = h->next;
		c++;
	}
	return c;
}
