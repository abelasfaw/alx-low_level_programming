#include<stdio.h>
/**
 * main-main function
 * Return: returns 0 on success
 */

int main(void)
{
	char message[] = "_putchar";
	int counter = 0;

	while (counter < 8)
	{
		putchar(message[counter]);
		counter += 1;
	}
	putchar('\n');
	return (0);
}
