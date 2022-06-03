#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-main function
*Return:returns 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d in negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	/* your code goes there */
	return (0);
}
