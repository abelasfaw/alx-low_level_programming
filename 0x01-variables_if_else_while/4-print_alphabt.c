#include <stdio.h>
#include <stdlib.h>

/**
 * main- main function
 * Return: returns 0 on success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (!(ch == 101 || ch == 113))
		{
			putchar(ch);

		}
		ch += 1;
	}
	putchar('\n');
	return (0);
}
