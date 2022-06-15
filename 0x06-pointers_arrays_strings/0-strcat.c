#include "main.h"
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
 * _strcat- appends src string to dest string
 * @src: string to append
 * @dest: modified string
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int str_length, index;
	char ch;

	str_length = _strlen(dest);
	index = 0;
	ch = *src;

	while (ch != '\0')
	{
		dest[str_length + index] = ch;
		index += 1;
		ch = *(src + index);
	}
	dest[str_length + index] = '\0';
	return (dest);
}
