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
		ch += 1;
	}
	putchar('\n');
	return (0);
}
