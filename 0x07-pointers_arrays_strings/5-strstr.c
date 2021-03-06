#include <stdio.h>
#include <stdbool.h>
/**
 * _strstr- finds first occurence of substring
 * @haystack: string to be scannde
 * @needle: string to be searched in haystack
 * Return: pointer to the fist occurence in haystack or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int hay_index, index, increment;
	char ch, ch2;
	bool matched = true;

	hay_index = 0;
	index = 0;
	increment = 1;
	ch = *(haystack + hay_index);
	ch2 = *(needle + index);

	while (ch != '\0')
	{
		if (ch == ch2)
		{
			while (*(needle + index + increment) != '\0')
			{
				if (*(needle + index + increment) != *(haystack + hay_index + increment))
				{
					matched = false;
					break;
				}
				increment += 1;
			}
			if (matched)
			{
				return (haystack + hay_index);
			}
			else
			{
				matched = true;
			}
		}
		hay_index += 1;
		ch = *(haystack + hay_index);
	}
	return (NULL);


}
