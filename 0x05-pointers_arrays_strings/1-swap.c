/**
 * swap_int - swaps value of two integers
 * @a: first intger input
 * @b: second integer input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
