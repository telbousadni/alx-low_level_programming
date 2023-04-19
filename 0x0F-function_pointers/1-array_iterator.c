#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints elements of array into a new line
 * @array: simple one dimensional array
 * @size: number of elements to print
 * @action: pointer printing
 * Return: nothing its a void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
