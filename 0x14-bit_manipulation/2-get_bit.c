#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _str_len- calculates string length
 * @str: string to be processed
 * Return: string length
 */
int _str_len(char *str)
{
	int len, index;
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
 * reverse_string- reverses string
 * @str: string to be processed
 * Return: reversed string
 */
char *reverse_string(char *str)
{
	int len;

	len = _str_len(str);
	if (len == 0)
	{
		return (NULL);
	}
	else
	{
		char *reversed = malloc((sizeof(char)) * (len + 1));
		int index = len - 1;
		int reverse_index = 0;

		while (index >= 0)
		{
			*(reversed + reverse_index) = *(str + index);
			index -= 1;
			reverse_index += 1;
		}
		*(reversed + reverse_index) = '\0';
		return (reversed);
	}
}
/**
 * convert_to_binary- converts decimal number to binary representation
 * @n: number to be converted
 * Return: binary format
 */
char *convert_to_binary(unsigned long int n)
{
	if (n == 0)
	{
		return ("0");
	}
	else if (n == 1)
	{
		return ("1");
	}
	else
	{
		char *binary = malloc(sizeof(char) * 33);
		int index;

		index = 0;
		while (n > 0)
		{
			binary[index] = (n % 2) + '0';
			n = n / 2;
			index += 1;
		}
		binary[index] = '\0';
		return (binary);

	}
	return (NULL);
}
/**
 * get_bit- returns value of a bit at a given index
 * @n: number to be processed
 * @index: position of bit to get
 * Return: value of bit at index, -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len, result;
	char *binary = convert_to_binary(n);

	/**binary = reverse_string(binary);**/
	if (binary == NULL)
	{
		return (-1);
	}
	len = _str_len(binary);
	if (index >= len)
	{
		free(binary);
		return (0);
	}
	if ((*(binary + index)) == 48)
	{
		result = 0;
	}
	else if ((*(binary + index)) == 49)
	{
		result = 1;
	}
	else
	{
		result = -1;
	}
	free(binary);
	return (result);
}
