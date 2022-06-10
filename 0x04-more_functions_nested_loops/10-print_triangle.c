#include "main.h"
/**
 * print_triangle- displays triangle with n number of #
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int size_copy = size;
		int i = 1;
		int j = size_copy - 1;
		int k = 0;

		while (i <= size)
		{
			while (j > 0)
			{
				_putchar(' ');
				j -= 1;
			}
			while (k < i)
			{
				_putchar('#');
				k += 1;
			}
			_putchar('\n');
			size_copy -= 1;
			j = size_copy - 1;
			k = 0;
			i += 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
