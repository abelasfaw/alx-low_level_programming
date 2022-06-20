#include "main.h"
/**
 * print_chessboard- prints chessboard (starting position)
 * @a: board layout
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row_counter;
	int column_counter;

	for (row_counter = 0; row_counter < 8; row_counter++)
	{
		for (column_counter = 0; column_counter < 8; column_counter++)
		{
			_putchar(a[row_counter][column_counter]);
			if (column_counter % 7 == 0 && column_counter)
			{
				_putchar('\n');
			}
		}
		column_counter = 0;
	}
}
