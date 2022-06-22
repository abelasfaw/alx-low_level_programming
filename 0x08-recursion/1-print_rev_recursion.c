#include "main.h"
#include <stdio.h>
/**
 * _strlen- calculates length of a string
 * @s: string to be processed
 * @len: initial data counter to passs along in recursive call
 * Return: length of string
 */
int _strlen(char *s, int len)
{
	char ch;

	ch = *s;

	if (ch == '\0')
	{
		return (len);
	}
	len += 1;
	return (_strlen(s + 1, len));
}
/**
 * print_recursive- prints string recursively
 * @s: string to be printed
 * @len: length of string to be printed
 * Return: void
 */
void print_recursive(char *s, int len)
{
	if (len <= 0)
	{
		return;
	}
	_putchar(*(s + (len - 1)));
	print_recursive(s, len - 1);
}
/**
 * _print_rev_recursion- prints string in reverse
 * @s: string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char ch;
	int length;

	length = _strlen(s, 0);
	print_recursive(s, length);


}
