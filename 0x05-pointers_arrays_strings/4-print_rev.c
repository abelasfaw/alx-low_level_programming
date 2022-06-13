#include "main.h"
/**
 *_strlen - calculates length of a string
 * @s: char type pointer of string
 * Return: length of string
 */
int _strlen(char *s)
{
	char ch;
	int counter = 1;
	int length = 0;

	ch = *s;
	while (ch != '\0')
	{
		length += 1;
		ch = *(s + counter);
		counter += 1;
	}
	return (length);
}
/**
 * print_rev- prints string in reverse
 * @s: char type pointer of string
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
