#include <stdlib.h>
/**
 * int_index- searches for an integer in array
 * @array: array to search from
 * @size: size of array to search from
 * @cmp: pointer to function to be used to compare elements
 * Return: index of first matched elements, else 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter, result;

	if (cmp != NULL)
	{
		if (array != NULL)
		{
			if (size <= 0)
			{
				return (-1);
			}
			for (counter = 0; counter < size; counter++)
			{
				result = cmp(array[counter]);
				if (result != 0)
				{
					return (counter);
				}
			}
			return (-1);
		}
	}
	return (-1);
}
