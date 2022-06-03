#include <stdio.h>
#include <stdlib.h>
/**
 * main- main function
 * Return: return 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (!(i > 0 && j == 0 || i == j || ((i > 1) && (j < i + 1))))
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
