/**
 * leet- encodes a string to leet
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int index1, index2;
	char ch;

	char cipher[5][3] = {{'a', 'A', '4'}, {'e', 'E', '3'}, {'o', 'O', '0'},
		{'t', 'T', '7'}, {'l', 'L', '1'}};

	index1 = 0;
	index2 = 0;
	ch = *s;

	while (ch != '\0')
	{
		while (index2 < 5)
		{
			if (ch == cipher[index2][0] || ch == cipher[index2][1])
			{
				*(s + index1) = cipher[index2][2];
				break;
			}
			index2 += 1;
		}
		index2 = 0;
		index1 += 1;
		ch = *(s + index1);
	}
	return (s);
}
