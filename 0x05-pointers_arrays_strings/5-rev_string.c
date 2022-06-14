#include "main.h"
#include <stdio.h>
/**
 *_strlen - calculates length of a string
 * @a: char type pointer of string
 * Return: length of string
 */
int _strlen(char *a)
{
	char ch;
	int counter = 1;
	int length = 0;

	ch = *a;
	while (ch != '\0')
	{
		length += 1;
		ch = *(a + counter);
		counter += 1;
	}
	return (length);
}
/**
 * rev_string- reverses string
 * @s: char type pointer of string
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int counter = 0;
	int str_length = _strlen(s);

	while (counter < (str_length / 2))
	{
		temp = s[counter];
		s[counter] = s[str_length - 1 - counter];
		s[str_length - 1 - counter] = temp;
		counter += 1;
	}
}
