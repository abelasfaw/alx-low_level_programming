#include "main.h"
/**
 * print_chessboard- prints chessboard (starting position)
 * @a: board layout
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row_counter = 0;
	int column_counter = 0;

	for (row_counter; row_counter < 8; row_counter++)
	{
		for (column_counter; column_counter < 8; column_counter++)
		{
			_putchar(a[i][j]);
			if (j % 8 == 0)
			{
				_putchar('\n');
			}
		}
	}
}
