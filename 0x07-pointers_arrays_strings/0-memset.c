/**
 * _memset- fills first n bytes of input with constant byte
 * @s: memory area to be filled
 * @b: byte to fill with
 * @n: number of bytes to fill
 * Return: pointer to filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	while (index < n)
	{
		*(s + index) = b;
		index += 1;
	}
	return (s);
}
