#include "main.h"
/**
 * _strlen- calculates lenght of a given string
 * @s: character type pointer
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	char ch;
	int length = 0;
	int counter = 1;

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
 * puts_half- prints half of a string
 * @str: string input to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int length, size;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		size = length / 2;
		while (size < length)
		{
			_putchar(str[(size)]);
			size += 1;
		}
	}
	else
	{
		size = (length - 1) / 2;
		while (size < length)
		{
			_putchar(str[(size + 1)]);
			size += 1;
		}
	}
	_putchar('\n');

}
