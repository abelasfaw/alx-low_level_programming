#include "main.h"
/**
 * print_square- print square with n number of #
 * @n: number input
 * Return: void
 */
void print_square(int n)
{
	if (n > 0)
	{
		int counter1 = 0;
		int counter2 = 0;

		while (counter1 < n)
		{
			while (counter2 < n)
			{
				_putchar('#');
				counter2 += 1;
			}
			counter2 = 0;
			_putchar('\n');
			counter1 += 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
