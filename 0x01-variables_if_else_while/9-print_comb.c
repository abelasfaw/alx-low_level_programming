#include <stdio.h>
#include <stdlib.h>
/**
 * main- main fucntion
 * Return: returns 0 on sucess
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		putchar(counter % 10 + '0');
		putchar(',');
		putchar(' ');
		counter += 1;
	}
	putchar('\n');
	return (0);
}
