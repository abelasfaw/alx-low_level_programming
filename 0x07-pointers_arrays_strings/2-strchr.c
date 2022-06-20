#include <stdio.h>
/**
 * _strchr- locates character in a string
 * @s: string to find characher in
 * @c: character to find
 * Return: returns pointer to first occurence of character c
 */
char *_strchr(char *s, char c)
{
	int index = 0;
	char ch;

	ch = *(s + index);
	while (ch != '\0')
	{
		if (ch == c)
		{
			return (&(*(s + index)));
		}
		index += 1;
		ch = *(s + index);
	}
	return (NULL);
}
