#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_separator - prints string separator
 * @separator: separator to print
 * Return void
 */
void print_separator(const char *separator)
{
	char ch;
	int index = 0;

	if (separator != NULL)
	{
		ch = *(separator + index);
		while (ch != '\0')
		{
			printf("%c", ch);
			index += 1;
			ch = *(separator + index);
		}
	}
}
/**
 * print_strings - prints string followed by separator
 * @separator: string to be printed between inputs
 * @n: number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int counter;
	int index;
	char ch1;
	char *str1;

	index = 0;
	va_start(args, n);
	for (counter = 0; counter < n; counter++)
	{
		str1 = va_arg(args, char *);
		if (str1 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			ch1 = *(str1 + index);
			while (ch1 != '\0')
			{
				printf("%c", ch1);
				index += 1;
				ch1 = *(str1 + index);
			}
			index = 0;
		}
		if (separator != NULL && counter != (n - 1))
		{
			print_separator(separator);
		}
	}
	printf("\n");
	va_end(args);
}
