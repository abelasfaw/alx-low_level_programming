#include "main.h"
/**
 * _puts- prints string input to stdout
 * @str:char pointer of string to be printed
 * Return:void
 */
void _puts(char *str)
{
	char ch;
	int counter = 1;

	ch = *str;
	while (ch != '\0')
	{
		_putchar(ch);
		ch = *(str + counter);
		counter += 1;
	}
	_putchar('\n');
}
