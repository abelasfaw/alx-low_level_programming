#include "main.h"
/**
 * print_last_digit- prints last digit of input
 * @n: input
 * Return: Returns last digit of input
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	_putchar(result + '0');
	return (result);
}
