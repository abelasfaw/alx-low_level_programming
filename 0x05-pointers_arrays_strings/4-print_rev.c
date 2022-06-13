#include "main.h"
/**
 * print_rev- prints string in reverse
 * @s: char type pointer of first character of string
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	char ch;

	length = _strlen(s);
	length -= 1;
	while (length >= 0)
	{
		ch = *(s + length);
		_putchar(ch);
		length -= 1;
	}
	_putchar('\n');
}
