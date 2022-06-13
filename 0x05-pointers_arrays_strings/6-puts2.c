#include "main.h"
/**
 * puts2- prints every other character of a string
 * @str: string input
 * Return:void
 */
void puts2(char *str)
{
	char ch;
	int counter = 0;

	ch = str[0];
	while (ch != '\0')
	{
		_putchar(ch);
		_putchar('\n');
		if (str[counter + 1] != '\0')
		{
			if (str[counter + 2] != '\0')
			{
				ch = str[counter + 2];
				counter += 2;
			}
			else
			{
				break;
			}
		}
		else
		{
			break;
		}

	}

}
