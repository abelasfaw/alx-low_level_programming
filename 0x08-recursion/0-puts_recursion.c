#include "main.h"
/**
 * _puts_recursion- prints a strint followed by a bew line
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	char ch;

	ch = *s;

	if (ch == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(ch);
	_puts_recursion(s + 1);
}
