#include "main.h"

/**
 * main- main function
 * Return: returns 0 on success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch += 1;
	}
	_putchar('\n');
	return (0);
}
