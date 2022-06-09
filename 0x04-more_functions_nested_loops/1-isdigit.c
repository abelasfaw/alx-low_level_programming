/**
 *_isdigit- checks if input is a digit (0-9)
 *@c- character to be checked
 *Return: returns 1 if digit, else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
