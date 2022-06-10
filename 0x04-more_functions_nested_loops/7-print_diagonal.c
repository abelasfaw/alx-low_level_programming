#include "main.h"
/**
 * print_diagonal- prints "\\" diagonally
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int space_counter = 1;
	int counter = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
			n -= 1;
			while (counter < space_counter)
			{
				_putchar(' ');
				counter += 1;
			}
			space_counter += 1;
			counter = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
