#include "main.h"
/**
 * print_alphabet_x10- prints lowercase alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch += 1;
		}
		ch = 'a';
		_putchar('\n');
		counter += 1;
	}
}
