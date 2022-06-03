#include <stdio.h>
#include <stdlib.h>
/**
 * main- main function
 * Return: returns 0 on success
 */
int main(void)
{
	char ch = 'a';
	char ch2 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch += 1;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2 += 1;
	}
	putchar('\n');
	return (0);
}
