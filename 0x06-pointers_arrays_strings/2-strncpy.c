/**
 * _strncpy - copies up to n characters from one string to other
 * @dest: string to modify
 * @src: string to copy
 * @n: number of characters to copy
 * Return: returns pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (*(src + counter) == '\0')
		{
			if (counter < (n - 1))
			{
				while (counter < n)
				{
					*(dest + counter) = '\0';
					counter += 1;
				}
			}
			else
			{
				*(dest + counter) = '\0';
				counter += 1;
			}
		}
		else
		{
			*(dest + counter) = *(src + counter);
			counter += 1;
		}
	}
	return (dest);
}
