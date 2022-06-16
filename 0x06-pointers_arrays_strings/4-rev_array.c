/**
 * reverse_array- reverses content of an array
 * @a: array to reverse
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int counter = 0;
	int temp;

	while (counter < (n / 2))
	{
		temp = a[counter];
		a[counter] = a[n - 1 - counter];
		a[n - 1 - counter] = temp;
		counter += 1;
	}
}
