#include <stdlib.h>
#include <stdio.h>
/**
 * _mem_copy- copies n bytes from memory to newly allocated space
 * @ptr1: memory space to copy from
 * @ptr2: memory space to copy to
 * @n: number of bytes to copy from ptr1
 * Return: on success pointer to new memory after copy, else NULL
 */
void *_mem_copy(void *ptr1, void  *ptr2, unsigned int n)
{
	unsigned int index;

	index = 0;

	while (index < n)
	{
		((char *)ptr2)[index] = ((char *)ptr1)[index];
		index += 1;
	}
	free(ptr1);
	return (ptr2);
}
/**
 * _realloc- reallocates memory
 * @ptr: pointer to previously allocated memory
 * @old_size: number of bytes of ptr
 * @new_size: size in bytes of new memory
 * Return: on success pointer to allocated meory, else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size >= old_size)
	{
		return (_mem_copy(ptr, new_ptr, old_size));
	}
	else
	{
		return (_mem_copy(ptr, new_ptr, new_size));
	}
}

