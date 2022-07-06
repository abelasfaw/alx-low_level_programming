#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator- executes callback funtion on elements of array argument
 * @array: array of arguments for callback
 * @size: size of array
 * @action: callback function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int counter;

	if (action != NULL)
	{
		if (size > 0)
		{
			for (counter = 0; counter < (int) size; counter++)
			{
				action(array[counter]);
			}
		}
	}
}
