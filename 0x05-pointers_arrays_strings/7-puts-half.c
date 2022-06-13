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
 * @str: string input
 * Return: void
 */
void puts_half(char *str)
{
	int length, size;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		size = length / 2;
	}
	else
	{
		size = (length - 1) / 2;
	}

	for (int i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
