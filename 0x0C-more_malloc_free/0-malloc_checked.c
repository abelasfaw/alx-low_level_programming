#include <stdlib.h>
/**
 * malloc_checked- allocate memory and check if allocation is successful
 * @b: number of bytes to allocate
 * Return: pointer to allocted memory, if allocation fails return 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	int *status;

	status = malloc(sizeof(int) * 2);
	*(status + 0) = 9;
	*(status +  1) = 8;
	/**check if allocation fails before using memory*/
	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (status);
	}
	return (ptr);
}
