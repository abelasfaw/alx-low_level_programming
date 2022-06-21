#include <stdio.h>
/**
 * print_diagsums- prints sum of two diagonals of a square matrix
 * @a: array to be used
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i, j, index;

	index = size - 1;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
	}
	for (j = 0; j < size; j++)
	{
		sum2 += *(a + (j * size + index));
		index -= 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
