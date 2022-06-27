#include <stdlib.h>
/**
 * _strlen- calculates length of a string
 * @str: string to be processed
 * Return: length of string
 */
int _strlen(char *str)
{
	char ch;
	int index;
	int length;

	index = 0;
	length = 0;
	ch = *(str + index);
	while (ch != '\0')
	{
		length += 1;
		index += 1;
		ch = *(str + index);
	}
	return (length);
}
/**
 * _str_copy- copies string
 * @str: string to copy from
 * @dest: string to copy to
 * Return: pointer to copied string
 */
char *_str_copy(char *str, char *dest)
{
	char ch;
	int index = 0;

	ch = *(str + index);
	while (ch != '\0')
	{
		*(dest + index) = *(str + index);
		index += 1;
		ch = *(str + index);
	}
	*(dest + index) = '\0';
	return (dest);
}
/**
 * _strdup- duplicates string passed as parameter
 * @str: sting to duplicate
 * Return: NULL if input is null or allocation fails, else return pointer
 */
char *_strdup(char *str)
{
	int str_len;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	str_len = _strlen(str);
	ptr = malloc((sizeof(char) * str_len) + 1);
	if (ptr != NULL)
	{
		return (_str_copy(str, ptr));
	}
	return (NULL);
}
