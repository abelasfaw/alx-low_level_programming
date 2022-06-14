/**
 * _strcpy- copies string to buffer
 * @dest: buffer to copy string to
 * @src: string to copy
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	char ch;

	ch = *src;
	while (ch != '\0')
	{
		*(dest + counter) = ch;
		counter += 1;
		ch = *(src + counter);
	}
	*(dest + counter) = '\0';
	return (dest);
}
