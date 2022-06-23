#include <stdio.h>
/**
 * get_string_length- calculates string length, using data variable passed
 * @s: string to be processed
 * @len: data variable to pass length
 * Return: length of string
 */
int get_string_length(char *s, int len)
{
	char ch;

	ch =  *s;
	if (ch == '\0')
	{
		return (len);
	}
	len += 1;
	return (get_string_length((s + 1), len));
}
/**
 * _str_reverse- reverses a string recursively
 * @s: string to be reversed
 * @s2: reversed string holder
 * @index: starting index to update new string, always 0
 * @len: string length
 * Return: pointer to reversed string
 */
char *_str_reverse(char *s, char *s2, int len, int index)
{
	if (len < 0)
	{
		*(s2 + index) = '\0';
		return (s2);
	}
	*(s2 + index) = *(s + len - 1);
	return (_str_reverse(s, s2, len - 1, index + 1));
}
/**
 * _strcmp- checks if two strings are identical
 * @s1: first string to be processed
 * @s2: second string to be processed
 * @index: starting index to read character with, always 0
 * Return: 1 if strings are identical, else return 0
 */
int _strcmp(char *s1, char *s2, int index)
{
	char ch1, ch2;

	ch1 =  *(s1 + index);
	ch2 = *(s2 + index);

	if (ch1 == '\0' && ch2 == '\0')
	{
		return (1);
	}
	if (ch1 != ch2)
	{
		return (0);
	}
	return (_strcmp(s1, s2, index + 1));
}
/**
 * is_palindrome- checks if a string is palindrome
 * @s: string to be processed
 * Return: 1 if string is palindrome, else 0
 */
int is_palindrome(char *s)
{
	int str_length;
	int status;
	char reversed[1024];

	str_length = get_string_length(s, 0);
	_str_reverse(s, reversed, str_length, 0);
	status = _strcmp(s, reversed, 0);
	return (status);
}
