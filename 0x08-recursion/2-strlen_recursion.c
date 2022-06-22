/**
 * get_string_length- calculates string length, using data variable passed
 * @s: string to be processed
 * @len: data variable to pass length
 * Return: length of string
 */
int get_string_length(char *s, int len)
{
	char ch;

	ch =  *s;
	if (ch == '\0')
	{
		return (len);
	}
	len += 1;
	return (get_string_length((s + 1), len));
}
/**
 * _strlen_recursion- calculates length of a string recursively
 * @s: string to bre processed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int  len_holder = 0;
	int length;

	length = get_string_length(s, len_holder);
	return (length);
}
