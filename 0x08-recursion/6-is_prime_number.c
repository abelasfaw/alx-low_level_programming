#include <stdbool.h>
/**
 * is_prime- check if input is prime using control variable
 * @n: number to be checked
 * @control: always 5, used in algorithim
 * Return: true if prime, else return false
 */
bool is_prime(int n, int control)
{
	if (n <= 1)
	{
		return (false);
	}
	if (n <= 3)
	{
		return (true);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (false);
	}
	if (control * control > n)
	{
		return (true);
	}
	if ((n % control) == 0 || n % (control + 2) == 0)
	{
		return (false);
	}
	return (is_prime(n, control + 6));
}
/**
 * is_prime_number- checks if number in prime or not
 * @n: number to be checked
 * Return: 1 if input is prime, else returns 0
 */
int is_prime_number(int n)
{
	if (is_prime(n, 5))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
