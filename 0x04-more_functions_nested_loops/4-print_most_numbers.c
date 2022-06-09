#include "main.h"
/**
 * print_most_numbers- prints from 0-9 execpt 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		if (counter != 2 && counter != 4)
		{
			_putchar(counter + '0');
		}
		counter += 1;
	}
	_putchar('\n');
}
