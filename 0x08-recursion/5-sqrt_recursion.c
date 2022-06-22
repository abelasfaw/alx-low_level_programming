/**
 * closest_sqrt - gets closest square root
 * @n: number to be processed
 * @control: control variable to track value in recursion
 * Return: -1 if n doesn't have natural square root,else return sqrt of n
 */
int closest_sqrt(int n, int control)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if ((control * control) >= n)
	{
		return (control);
	}
	return (closest_sqrt(n, control + 1));
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to to calculate sqrt of
 * Return: -1 if n dosn't have natural square root,else return sqrt of n
 */
int _sqrt_recursion(int n)
{
	int res;

	res = closest_sqrt(n, 1);
	if ((res * res) == n)
	{
		return (res);
	}
	else
	{
		return (-1);
	}
}
