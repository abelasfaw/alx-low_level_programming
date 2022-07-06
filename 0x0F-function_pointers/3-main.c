#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: command line arguements array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
		atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
