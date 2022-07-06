/**
 * op_add- calculates sum of two integers
 * @a: operand 1
 * @b: operand 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- calculates difference of two integers
 * @a: operand 1
 * @b: operand 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- calculates product of two integers
 * @a: operand 1
 * @b: operand 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- divides an integer by another integer
 * @a: dividend
 * @b: divisor
 * Return: a / b, if b != 0, else exit with status code 98
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod- calculates remainde of an integer division
 * @a: dividend
 * @b: divisor
 * Return:remainder of a divided by b, if b != 0, else exit with status code 98
 */
int op_mod(int a, int b)
{
	return (a % b);
}
