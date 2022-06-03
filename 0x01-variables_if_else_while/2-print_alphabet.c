#include <stdio.h>
#include <stdlib.h>
/**
 * main- main function
 * Return: returns 0 on succes
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch += 1;
	}
	return (0);
}
