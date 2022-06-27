#include <stdlib.h>
#include <stdio.h>
/**
 * init_grid- initialize grid with value = 0
 * @grid: grid to initialize
 * @row: number of rows
 * @column: number of columns
 * Return: pointer to 2d array
 */
int **init_grid(int **grid, int row, int column)
{
	int row_counter, column_counter;

	for (row_counter = 0; row_counter < row; row_counter++)
	{
		for (column_counter = 0; column_counter < column; column_counter++)
		{
			grid[row_counter][column_counter] = 0;
		}
	}
	return (grid);
}
/**
 * alloc_grid- allocates space for a 2d array
 * @width: number of columns of 2d array
 * @height: number of rows of 2d array
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	/**width = column, height = row */
	int row_counter;
	int **ptr;
	int *int_ptr;
	int success_count;

	success_count = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (row_counter = 0; row_counter < height; row_counter++)
	{
		int_ptr = malloc(sizeof(int) * width);
		if (int_ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr[row_counter] = int_ptr;
		free(int_ptr);
	}
	return (init_grid(ptr, height, width));
}
