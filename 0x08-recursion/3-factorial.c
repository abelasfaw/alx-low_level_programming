/**
 * factorial- calculates factorial of a given number
 * @n: number to calculate factorial of
 * Return: -1 in input is less than 0, else factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
