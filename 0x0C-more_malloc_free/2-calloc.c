#include <stdlib.h>
#include "main.h"

/**
 * *_memstore - stores a constant byte in memory
 * @s: memory stored in
 * @b: char copied
 * @n: how many times @b will be copied
 *
 * Return: pointer
 */
char *_memstore(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	_memstore(ptr, 0, nmemb * size);

	return (ptr);
}
