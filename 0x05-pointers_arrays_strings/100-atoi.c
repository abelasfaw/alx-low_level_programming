#include <stdbool.h>

/**
 *change_to_int- change char to int
 *@c: char to be converted
 *Return: digit
 */
int change_to_int (char c)
{
	int result;

	switch (c)
	{
		case '0':
			result = 0;
			break;
		case '1':
			result = 1;
			break;
		case '2':
			result = 2;
			break;
		case '3':
			result = 3;
			break;
		case '4':
			result = 4;
			break;
		case '5':
			result = 5;
			break;
		case '6':
			result = 6;
			break;
		case '7':
			result = 7;
			break;
		case '8':
			result = 8;
			break;
		case '9':
			result = 9;
			break;
	}
	return (result);
}
/**
 *assign- assigns + or - sign
 *@negative_counter: number of negative signs
 *@result: result to assign
 *Return:int
 */
int assign(int negative_counter, unsigned int result)
{
	if (negative_counter > 0 && negative_counter % 2 != 0)
	{
		result = result * -1;
	}
	return (result);
}
/**
 * _atoi- converts string into integer
 * @s: string to be converted
 * Return: returns numbers in string, else returns 0
 */
int _atoi(char *s)
{
	int positive_counter, negative_counter = 0;
	int counter = 1;
	bool isFirst = true;
	unsigned int result = 0;
	char ch = *s;

	while (ch != '\0')
	{
		if (ch == '+' && isFirst)
		{
			positive_counter += 1;
		}
		else if (ch == '-' && isFirst)
		{
			negative_counter += 1;
		}
		else if (ch >= 48 && ch <= 57)
		{
			if (isFirst)
			{
				result = change_to_int(ch);
				isFirst = false;
			}
			else
			{
				result = result * 10 + change_to_int(ch);
			}
		}
		else
		{
			if (!isFirst)
			{
				break;
			}
		}
		ch = *(s + counter);
		counter += 1;
	}
	result = assign(negative_counter, result);
	return (result);
}
