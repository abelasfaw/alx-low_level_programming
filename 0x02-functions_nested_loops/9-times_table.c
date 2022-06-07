#include "main.h"
/**
 * times_table- prints times table
 * Return: always zero
 */
void times_table(void)
{
	int counter1 = 0;
	int counter2 = 0;
	int result;

	while (counter1 < 10)
	{
		while (counter2 < 10)
		{
			result = counter1 * counter2;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			_putchar(',');
			_putchar(' ');
			counter2 += 1;
		}
		_putchar('\n');
		counter1 += 1;
		counter2 = 0;
	}
}
