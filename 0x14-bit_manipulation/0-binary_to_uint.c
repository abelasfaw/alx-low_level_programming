#include "main.h"
#include <stdlib.h>
/**
 * _str_len- calculates length of string
 * @str: string to be processed
 * Return: length of string
 */
int _str_len(const char *str)
{
	int index, len;
	char ch;

	len = index = 0;
	ch = *(str + index);
	while (ch != '\0')
	{
		len += 1;
		index += 1;
		ch = *(str + index);
	}
	return (len);
}
/**
 * handle_single_char- converts single char input to unsigned int
 * @b: string to be processed
 * Return: 1 if str is '1', else returns 0
 */
unsigned int handle_single_char(const char *b)
{
	char ch;
	unsigned int num;

	ch = *(b);
	if (ch == '1')
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return (num);
}
/**
 * binary_to_uint- converts binary string to unsigned integer
 * @b: string to be processed
 * Return: decimal eqivalent, or 0 if b is NULL or contains other characters
 */
unsigned int binary_to_uint(const char *b)
{
	int len, counter, multiplier;
	unsigned int sum;
	char ch;

	if (b == NULL)
	{
		return (0);
	}
	sum = 0;
	len = _str_len(b);
	if (len == 0)
	{
		return (handle_single_char(b));
	}
	counter = len - 1;
	multiplier = 1;
	while (counter >= 0)
	{
		ch = *(b + counter);
		if (ch == '0')
		{
			sum += 0;
		}
		else if (ch == '1')
		{
			sum += 1 * multiplier;
		}
		else
		{
			return (0);
		}
		multiplier *= 2;
		counter -= 1;
	}
	return (sum);
}
