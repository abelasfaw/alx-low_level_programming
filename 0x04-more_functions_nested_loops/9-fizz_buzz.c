#include "main.h"
#include <stdio.h>
/**
 * main- print number from 1-100, where multiples of 3 and 5 are
 * replaced with fizz and buzz respectively
 * Return: void
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
		n += 1;
	}
	printf("\n");
	return (0);
}
