#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * free_grid - frees a two dimensional grid previously created by alloc_grid
 * @height: height dimension of the grid
 * @grid: the two dimensional grid
 * Return: none
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);
}
