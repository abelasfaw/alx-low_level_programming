#include <stdlib.h>
#include <stdio.h>
/**
 * sub_str- creates a sub string from string
 * @str: string to be processed
 * @start_index: starting inedx for sub string
 * @end_index: ending index for sub string
 * Return: sub string
 */
char *sub_str(char *str, int start_index, int end_index)
{
	int size, counter;
	char *ptr;

	size = end_index - start_index + 2;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < (size - 1); counter++)
	{
		*(ptr + counter) = *(str + start_index + counter);
	}
	*(ptr + (size - 1)) = '\0';
	return (ptr);
}
/**
 * strtow- splits string into words. words are separated by spaces
 * @str: string to be processed
 * Return: pointer to array of split words
 */
char **strtow(char *str)
{
	char ch, prev;
	char **words;
	char *word;
	int access_index, start_index, end_index, first_char, words_count;

	if (str == NULL || !str)
	{
		return (NULL);
	}
	access_index = 0;
	first_char = 1;
	words_count = 0;
	words = malloc(sizeof(char *) * 100);

	ch = *(str + access_index);

	while (ch != '\0')
	{
		if (first_char)
		{
			if (ch != ' ')
			{
				start_index = access_index;
				end_index = access_index;
			}
			prev = ch;
			first_char = 0;

		}
		else
		{
			if (ch == ' ')
			{
				if (prev != ' ')
				{
					word = sub_str(str, start_index, end_index);
					if (word == NULL)
					{
						return (NULL);
					}
					*(words + words_count) = word;
					words_count += 1;
				}
				prev = ch;

			}
			else
			{
				if (prev == ' ')
				{
					start_index = access_index;
					end_index = access_index;
				}
				else
				{
					end_index = access_index;
				}
				prev = ch;
			}
		}
		access_index += 1;
		ch = *(str + access_index);
	}
	if (access_index == 1 && *(str + 0) == ' ')
	{
		return (NULL);
	}
	*(words + words_count) = NULL;
	return (words);
}
