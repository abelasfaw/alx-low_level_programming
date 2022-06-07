#include<stdio.h>
#include "main.h"
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
		_putchar(message[counter]);
		counter += 1;
	}
	_putchar('\n');
	return (0);
}
