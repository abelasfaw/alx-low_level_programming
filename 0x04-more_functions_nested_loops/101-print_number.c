#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * print_number- prints an integer using putchar
 * @n: integer input to be printed
 * Rerturn: void
 */
void print_number(int n)
{
	int result;
	int input_copy = n;
	int count = 0;
	int divider = 1;

	while (input_copy != 0)
	{
		input_copy = input_copy / 10;
		count += 1;
	}
	count = count - 1;
	while (count > 0)
	{
		divider *= 10;
		count -= 1;
	}
	while (n > 9)
	{
		result = n / divider;
		_putchar(result + '0');
		n = n % divider;
		divider /= 10;
	}
	_putchar(n + '0');
	_putchar('\n');
}
