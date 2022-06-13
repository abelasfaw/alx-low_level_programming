#include "main.h"
#include <stdio.h>
/**
 * print_array- prints n elements of an array
 * @a: array input
 * @n: no of elements to be printed
 * Return:void
 */
void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (counter != n - 1)
		{
			printf("%d, ", a[counter]);
			counter += 1;
		}
		else
		{
			printf("%d", a[counter]);
			counter += 1;
		}
	}
	printf("\n");
}
