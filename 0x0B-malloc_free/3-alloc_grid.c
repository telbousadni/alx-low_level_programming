#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: input of width
 * @height: input of height
 * Return: pointer to 2 dimensions array
 */
int **alloc_grid(int width, int height)
{
	int **twodim;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodim = malloc(sizeof(int *) * height);

	if (twodim == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		twodim[x] = malloc(sizeof(int) * width);

		if (twodim[x] == NULL)
		{
			for (; x >= 0; x--)
				free(twodim[x]);

			free(twodim);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			twodim[x][y] = 0;
	}

	return (twodim);
}

