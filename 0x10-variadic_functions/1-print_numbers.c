#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints number separated by string passed
 * @separator: string to print between numbers
 * @n: number of parameters to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter, index;
	va_list args;
	int num;
	char ch;

	index = 0;
	va_start(args, n);
	for (counter = 0; counter < n; counter++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && counter != (n - 1))
		{
			ch = *(separator + index);
			while (ch != '\0')
			{
				printf("%c", ch);
				index += 1;
				ch = *(separator + index);
			}
			index = 0;
		}
	}
	printf("\n");
	va_end(args);

}
