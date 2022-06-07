#include "main.h"

/**
 * print_alphabet- a function that prints lowercase alphabets in a single line
 * Return: returns 0 on success
 */

void  print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch += 1;
	}
	_putchar('\n');
}
