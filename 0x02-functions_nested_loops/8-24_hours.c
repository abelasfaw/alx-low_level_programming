#include "main.h"
/**
 *jack_bauer- prints every minute
 */
void jack_bauer(void)
{
	int counter1 = 0;
	int counter2 = 0;
	int counter3 = 0;
	int counter4 = 0;

	while (counter1 < 3)
	{
		while (counter2 < 4)
		{
			while (counter3 < 6)
			{
				while (counter4 < 10)
				{
					_putchar(counter1 + '0');
					_putchar(counter2 + '0');
					_putchar(':');
					_putchar(counter3 + '0');
					_putchar(counter4 + '0');
					_putchar('\n');
					counter4 += 1;
				}
				counter3 += 1;
				counter4 = 0;
			}
			counter2 += 1;
			counter3 = 0;
		}
		counter1 += 1;
		counter2 = 0;
	}
}
