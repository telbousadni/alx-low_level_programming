#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space
 * @new_size: the new size.
 *
 * Return: depends please read code
 */

void *_realloc(void *ptr, int old_size, int new_size)
{
	char *old_ptr;
	char *new_ptr;
	int i;

	if (new_size <= old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(sizeof(new_size));

	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}

	free(ptr);
	return (new_ptr);
}
