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
 * convert_to_binary- converts decimal number to binary representation
 * @n: number to be converted
 * Return: binary format
 */
char *convert_to_binary(unsigned long int n)
{
	char *binary = malloc(sizeof(char) * 65);
	int index;

	index = 0;
	if (n == 0)
	{
		binary[index] = '0';
		index += 1;
	}
	while (n > 0)
	{
		binary[index] = (n % 2) + '0';
		n = n / 2;
		index += 1;
	}
	binary[index] = '\0';
	return (binary);
}
/**
 * get_bit- returns value of a bit at a given index
 * @n: number to be processed
 * @index: position of bit to get
 * Return: value of bit at index, -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;
	int result;
	char *binary = convert_to_binary(n);

	/**binary = reverse_string(binary);**/
	if (binary == NULL)
	{
		return (-1);
	}
	if (index >= 64)
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
/**
 * binary_to_uint2- converts binary string to unsigned integer
 * @b: string to be processed
 * Return: decimal equivalen, or 0 if b is null or contains other characters
 */
unsigned int binary_to_uint2(char *b)
{
	int len, counter;
	unsigned long int multiplier;
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
		return (0);
	}
	counter = 0;
	multiplier = 1;
	while (counter < len)
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
		counter += 1;
	}
	return (sum);
}
/**
 * clear_bit- sets value of bit at given index to 0
 * @n: pointer to number to be processed
 * @index: position of bit set
 * Return: 1 on success, else return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	char *binary = convert_to_binary((*(n)));
	unsigned int len = _str_len(binary);

	if (get_bit(*(n), index) == -1)
	{
		return (-1);
	}
	if (binary == NULL)
	{
		return (-1);
	}
	/*binary = reverse_string(binary);*/
	if (index > (len - 1))
	{
		unsigned int counter = len;

		while (counter <= index)
		{
			*(binary + counter) = '0';
			counter += 1;
		}
	}
	*(binary + index) = '0';
	*(n) = binary_to_uint2(binary);
	return (1);
}
