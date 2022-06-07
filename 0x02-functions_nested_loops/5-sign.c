#include "main.h"
/**
 * print_sign-prints sign of a number input
 * @n: number input to be checked
 * Return: returns 1 if input is positive, -1 if negative and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
