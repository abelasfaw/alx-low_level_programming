#include <stdio.h>
/**
 * find_char- locates character in a string
 * @s: string to find characher in
 * @c: character to find
 * Return: returns index of first occurence of c, else returns -1
 */
int find_char(char *s, char c)
{
	int index = 0;
	char ch;

	ch = *(s + index);
	while (ch != '\0')
	{
		if (ch == c)
		{
			return (index);
		}
		index += 1;
		ch = *(s + index);
	}
	return (-1);
}
/**
 * get_first_occurence- finds min value of array greater or equal to 0
 * @arr: array to search from
 * @size: size of array
 * Return: min value
 */
int get_first_occurence(int *arr, int size)
{
	int min = arr[0];
	int i;

	for (i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return (min);

}
/**
 * _strpbrk- locates first occurence in s any of bytes in accept
 * @s: string to be scanned
 * @accept: string holding characters to scan
 * Return: returns pointer to matched byte else, returns null
 */
char *_strpbrk(char *s, char *accept)
{
	int index = 0;
	int size = 0;
	int min_occurence;
	char ch;

	ch = *(accept + index);
	min_occurence = find_char(s, ch);

	while (ch != '\0')
	{
		if (index != 0)
		{
			if (min_occurence < 0 && find_char(s, ch) >= 0)
			{
				min_occurence = find_char(s, ch);
			}
			else if (min_occurence >= 0 && find_char(s, ch) < min_occurence)
			{
				min_occurence = find_char(s, ch);
			}
		}
		size += 1;
		index += 1;
		ch = *(accept + index);
	}
	if (min_occurence < 0)
	{
		printf("inside \n");
		return (NULL);
	}
	else
	{
		return ((s + min_occurence));
	}



}
