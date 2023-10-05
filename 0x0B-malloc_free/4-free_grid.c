#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - duplicated string
 * @grid: the string to duplicate
 * @height: Second string
 * Return: the string duplicated
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
