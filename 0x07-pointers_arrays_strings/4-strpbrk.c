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

	for (int i = 1; i < size; i++)
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
	int first_occurence;
	char ch;
	int *indexes;

	ch = *(accept + index);

	while (ch != '\0')
	{
		*(indexes + index) = find_char(s, ch);
		size += 1;
		index += 1;
		ch = *(accept + index);
	}
	first_occurence = get_first_occurence(indexes, size);
	return ((s + first_occurence));



}
