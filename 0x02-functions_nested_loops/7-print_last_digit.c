#include "main.h"
#include <limits.h>
/**
 * print_last_digit- prints last digit of input
 * @n: input
 * Return: Returns last digit of input
 */
int print_last_digit(int n)
{
	signed int result;
	if (n == INT_MIN){
		result = 8;
		_putchar(result + '0');
		return (result);
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	result = n % 10;

	_putchar(result + '0');
	return (result);
}
