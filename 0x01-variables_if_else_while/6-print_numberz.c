#include <stdio.h>
#include <stdlib.h>

/**
 * main- main function
 * Return: returns 0 on success
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		putchar(counter % 10 + '0');
		counter += 1;
	}
	putchar('\n');
	return (0);
}
