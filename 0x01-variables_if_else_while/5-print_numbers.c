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
		printf("%d", counter);
		counter += 1;
	}
	printf("\n");
	return (0);
}
