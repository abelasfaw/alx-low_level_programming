#include <stdlib.h>
/**
 * initialize_array- sets char to each element of array
 * @arr: array to be processed
 * @size: size of array
 * @c: character to initialize with
 * Return: array
 */
char *initialize_array(char *arr, unsigned int size, char c)
{
	unsigned int index = 0;

	while (index < size)
	{
		arr[index] = c;
		index += 1;
	}
	return (arr);
}
/**
 * create_array- creates an array of chars and initializes it with a char
 * @size: size of array to be created
 * @c: character to initialize with
 * Return: NULL if size is 0 or fails, else return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	initialize_array(ptr, size, c);
	return (ptr);
}
