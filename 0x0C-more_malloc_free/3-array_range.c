#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum integer of stored values
 * @max: maximum integer of stored values
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr = malloc(sizeof(int) * size);
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
