#include <stdarg.h>
/**
 * sum_them_all - calculates sum of all parameters
 * @n: number of parameters
 * Return: sum of parameters if n > 0, else retrun 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int counter;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;

	va_start(args, n);
	for (counter = 0; counter < n; counter++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
