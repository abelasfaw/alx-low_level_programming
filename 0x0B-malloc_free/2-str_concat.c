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
 * _str_copy- concatenates two string in a new memory space
 * @str1: fist string to concatenate
 * @str2: second string to concatenate
 * @dest: string to copy to
 * Return: pointer to concatenated string
 */
char *_str_copy(char *str1, char *str2, char *dest)
{
	char ch;
	int index = 0;
	int index2 = 0;

	if (str1 != NULL)
	{
		ch = *(str1 + index2);
		while (ch != '\0')
		{
			*(dest + index) = *(str1 + index2);
			index2 += 1;
			index += 1;
			ch = *(str1 + index2);
		}
		index2 = 0;
	}
	if (str2 != NULL)
	{
		ch = *(str2 + index2);
		while (ch != '\0')
		{
			*(dest + index) = *(str2 + index2);
			index2 += 1;
			index += 1;
			ch = *(str2 + index2);
		}
	}
	*(dest + index) = '\0';
	return (dest);
}
/**
 * str_concat- concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: NULL if allocation fails, else return pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int str1_len;
	int str2_len;
	char *ptr;

	if (s1 == NULL)
	{
		str1_len = 0;
	}
	else
	{
		str1_len = _strlen(s1);
	}
	if (s2 == NULL)
	{
		str2_len = 0;
	}
	else
	{
		str2_len = _strlen(s2);
	}
	ptr = malloc((sizeof(char) * (str1_len + str2_len + 1)));
	if (ptr != NULL)
	{
		return (_str_copy(s1, s2, ptr));
	}
	return (NULL);
}
