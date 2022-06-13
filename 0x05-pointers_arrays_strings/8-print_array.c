#include "main.h"
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
		printf("%d, ", a[counter]);
		counter += 1;
	}
}
