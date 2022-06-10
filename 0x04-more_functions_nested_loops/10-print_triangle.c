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

		for (int i = 1; i <= size; i++)
		{
			for (int j = size_copy - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (int k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			size_copy -= 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
