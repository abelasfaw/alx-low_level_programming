/**
 * _pow_recursion- returns x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: -1 if y is lower than 0, else return x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}