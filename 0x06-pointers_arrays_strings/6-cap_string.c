#include <stdio.h>
/**
 * check_word_separator- check if previous char is ,.;!?\"(){}
 * @prev: previous char to check
 * Return: 1 if it is word separator, else return 0
 */
int check_word_separator(char prev)
{
	int status = 1;

	switch (prev)
	{
		case ' ':
			break;
		case '\t':
			break;
		case '\n':
			break;
		case ',':
			break;
		case ';':
			break;
		case '.':
			break;
		case '!':
			break;
		case '?':
			break;
		case '"':
			break;
		case '(':
			break;
		case ')':
			break;
		case '{':
			break;
		case '}':
			break;
		default:
			status = 0;
			break;
	}
	return (status);
}

/**
 * cap_string- capitalizes all words of string
 * @s: string to capitalize
 * Return: returns modified string
 */
char *cap_string(char *s)
{
	char ch, prev;
	int index = 0;

	ch = *s;

	while (ch != '\0')
	{
		if (index == 0)
		{
			if (ch >= 97 && ch <= 122)
			{
				*(s + index) -= 32;
			}
		}
		else
		{
			if (check_word_separator(prev))
			{
				if (ch >= 97 && ch <= 122)
				{
					*(s + index) -= 32;
				}
			}
		}
		prev = ch;
		index += 1;
		ch = *(s + index);
	}
	return (s);
}
