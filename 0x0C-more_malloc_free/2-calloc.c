#include <stdlib.h>
/**
 * _calloc- allocates memory for an array
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	void *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
