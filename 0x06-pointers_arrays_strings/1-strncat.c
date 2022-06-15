/**
 * _strlen- calculates lenght of a given string
 * @s: character type pointer
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	char ch;
	int length = 0;
	int counter = 1;

	ch = *s;
	while (ch != '\0')
	{
		length += 1;
		ch = *(s + counter);
		counter += 1;
	}
	return (length);
}
/**
 * _strncat- concatenates two strings using n bytes from src
 * @dest: string to modify
 * @src: string to append
 * @n: number of bytes to use from src
 * Return: modified string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, str_length, counter;

	index = 0;
	counter = 0;
	str_length = _strlen(dest);

	while (counter < n)
	{
		if (*(src + counter) == '\0')
		{
			break;
		}
		dest[str_length + index] = *(src + counter);
		counter += 1;
		index += 1;
	}
	dest[str_length + index] = '\0';
	return (dest);


}
