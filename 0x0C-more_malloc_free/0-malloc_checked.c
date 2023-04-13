#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b : an integer
 * Return: pointer if success, 98 if fail
 */
void *malloc_checked(unsigned int b);
{
	int *memory = malloc(b);

	if (memory == 0)
		exit(98);

	return (memory);
}
