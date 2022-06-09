#include "main.h"
/**
 * more_numbers- prints 1-14 10 times
 * Return:coid
 */
void more_numbers(void)
{
	int counter1 = 0;
	int counter2 = 0;

	while (counter1 < 10)
	{
		while (counter2 < 15)
		{
			if (counter2 >= 10)
			{
				_putchar('1');
			}
			_putchar(counter2 % 10 + '0');
			counter2 += 1;
		}
		counter2 = 0;
		_putchar('\n');
		counter1 += 1;
	}
}
