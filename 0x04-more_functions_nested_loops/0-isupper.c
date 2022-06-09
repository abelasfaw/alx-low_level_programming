#include "main.h"
/**
 * _isupper- checks if character is uppercase
 * @c: character to be checked
 * Return: returns 1 if character is uppercase, else returns 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
