/**
 * string_toupper- changes lowercase of a string to uppercase
 * @s: string to be converted
 * Return: modified string
 */
char *string_toupper(char *s)
{
	int index = 0;
	char ch;

	ch = *s;
	while (ch != '\0')
	{
		if (ch >= 97 && ch <= 122)
		{
			*(s + index) = ch - 32;
		}
		index += 1;
		ch = *(s + index);
	}
	return (s);
}
