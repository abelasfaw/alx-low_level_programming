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
	return (length + 1);
}
/**
 * rev_string- reverses string
 * @s: char type pointer of string
 * Return: void
 */
void rev_string(char *s)
{
	int str_length = _strlen(s);
	char reverse[_strlen(s)];
	int index, counter, index2;

	index = str_length - 2;
	index2 = 0;
	counter = 0;

	while (index >= 0)
	{
		reverse[counter] = *(s + index);
		index -= 1;
		counter += 1;
	}
	reverse[str_length - 1] = '\0';

	while (index2 < (_strlen(s) - 1))
	{
		*(s + index2) = *(reverse + index2);
		index2 += 1;
	}
}
