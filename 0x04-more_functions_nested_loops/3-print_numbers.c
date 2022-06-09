#include "main.h"
/**
 * print_numbers- prints 0 to 9 followed by newline
 * Return: void
 */
void print_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		_putchar(counter + '0');
		counter += 1;
	}
	_putchar('\n');
}

