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
	unsigned int length;

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
 * @n: number of bytes to take from str2
 * @dest: string to copy to
 * Return: pointer to concatenated string
 */
char *_str_copy(char *str1, char *str2, unsigned int n, char *dest)
{
	char ch;
	int index = 0;
	unsigned int index2 = 0;

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
		while (index2 < n)
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
 * string_nconcat- concatenates two strings, using n bytes from s2
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes to use from s2
 * Return: NULL if allocation fails, else return pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1_len;
	unsigned int str2_len;
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
		if (n < str2_len)
		{
			str2_len = n;
		}
	}
	ptr = malloc((sizeof(char) * (str1_len + str2_len + 1)));
	if (ptr != NULL)
	{
		return (_str_copy(s1, s2, n, ptr));
	}
	return (NULL);
}
