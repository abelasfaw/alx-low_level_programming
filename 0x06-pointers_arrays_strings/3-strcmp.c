/**
 * _strcmp- compares two string
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: returns 0 if both are equal, < 0 if s1 is less than s2
 * >0 if s2 is less than s1
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0;
	int status;

	while (1)
	{
		if (*(s1 + counter) < *(s2 + counter))
		{
			status = *(s1 + counter) - *(s2 + counter);
			break;
		}
		else if (*(s1 + counter) > *(s2 + counter))
		{
			status = *(s1 + counter) - *(s2 + counter);
			break;
		}
		else
		{
			status = 0;
			if (*(s1 + counter) == '\0')
			{
				break;
			}
		}
		counter += 1;
	}
	return (status);
}
