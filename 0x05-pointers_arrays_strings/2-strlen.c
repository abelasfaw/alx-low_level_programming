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
