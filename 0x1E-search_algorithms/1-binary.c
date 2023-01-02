#include <stdio.h>
#include "search_algos.h"
/**
 * print_array- prints elements of an aray
 * @array: array to be printed
 * @start: starting index
 * @end: ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t counter;

	printf("Searching in array: ");
	for (counter = start; counter <= end; counter++)
	{
		printf("%d", array[counter]);
		if (counter != end)
		{
			printf(", ");
		}
	}
	printf("\n");
}
/**
 * binary_search- searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 If value is not present in array or if array is NULL, else
 * return 1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (start <= end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}
