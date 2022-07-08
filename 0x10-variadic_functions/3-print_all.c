#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _str_len- calcualtes length of a string
 * @str: string to be processed
 * Return: length of string
 */
int _str_len(const char * const str)
{
	int len, index;
	char ch;

	len = 0;
	index = 0;

	ch = *(str + index);
	while (ch != '\0')
	{
		len += 1;
		index += 1;
		ch = *(str + index);
	}
	return (len);
}
/**
 * print_separator- prints ", "
 * @index: current index of format string
 * @str_len: length of format string
 * Return: void
 */
void print_separator(int index, int str_len)
{
	if (index != (str_len - 1))
	{
		printf(", ");
	}
}
/**
 * print_all- prints char, integet, float string input
 * @format: type ofargument passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char ch;
	va_list args;
	char *str;
	int index;

	index = 0;

	ch = *(format + index);
	va_start(args, format);
	while (ch != '\0')
	{
		switch (ch)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				print_separator(index, _str_len(format));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				print_separator(index, _str_len(format));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				print_separator(index, _str_len(format));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);
				print_separator(index, _str_len(format));
				break;
		}
		index += 1;
		ch = *(format + index);
	}
	printf("\n");
}
