#include <stdlib.h>
/**
 * update_array- updates value of an array
 * @arr: array to update
 * @min: min value to update index with
 * @max: max value to update index with
 * Return: return pointer to updated array
 */
int *update_array(int *arr, int min, int max)
{
	int index;
	int range;

	range = (max - min) + 1;

	for (index = 0; index < range; index++)
	{
		*(arr + index) = min + index;
	}
	return (arr);
}
/**
 * array_range- create array of integers, with values ordered from min to max
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array, null if min > max or alloc fails
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = calloc(((max - min) + 1), sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (update_array(ptr, min, max));
}
