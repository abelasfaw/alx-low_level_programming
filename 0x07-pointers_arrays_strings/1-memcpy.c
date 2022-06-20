/**
 * _memcpy- copies n bytes from src to dest memory area
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		*(dest + index) = *(src + index);
		index += 1;
	}
	return (dest);
}
