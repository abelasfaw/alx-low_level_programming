#include "main.h"
/**
 * print_line- prints n number of _
 * @n: number of _ to be printed
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n -= 1;
	}
	_putchar('\n');
}
