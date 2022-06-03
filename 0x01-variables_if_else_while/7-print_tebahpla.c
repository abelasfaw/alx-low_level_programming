#include <stdio.h>
#include <stdlib.h>
/**
 * main- main fucntion
 * Return: returns 0 on success
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 97)
	{
		putchar(ch);
		ch -= 1;
	}
	putchar('\n');
	return (0);
}
