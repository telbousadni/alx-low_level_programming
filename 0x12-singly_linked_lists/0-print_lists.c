#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		char *str = h->str ? h->str : "(nil)";
		size_t len = 0;

		while (str[len] != '\0')
			len++;
		for (size_t i = 0; i < len; i++)
			_putchar(str[i]);

		_putchar('\n');
		c++;


		h = h->next;
	}
	return (c);
}
