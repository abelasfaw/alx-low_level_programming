#include <stdlib.h>
/**
 * free_grid- frees a two dimensional grid allocated
 * @grid: grid to be processed
 * @height: number of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
	{
		free(*(grid + (height - 1)));
		height -= 1;
	}
	free(grid);
}
