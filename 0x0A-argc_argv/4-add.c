#include <stdio.h>
#include <stdlib.h>
/**
 * check_arguments- checks if command line arguments contain non-number chars
 * @argc: number of command line arguments
 * @argv: command line arguments array
 * Return: 1 if all arguments are numbers, else return 0
 */
int check_arguments(int argc, char *argv[])
{
	int index = 1;
	int index2 = 0;
	char ch;

	while (index < argc)
	{
		ch = *(argv[index] + index2);
		while (ch != '\0')
		{
			if (!(ch >= 49 && ch <= 57))
			{
				return (0);
			}
			index2 += 1;
			ch = *(argv[index] + index2);
		}
		index2 = 0;
		index += 1;
	}
	return (1);
}
/**
 * main- main function
 * @argc: number of command line arguments
 * @argv: command line arguments array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int index = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (!check_arguments(argc, argv))
	{
		printf("Error\n");
		return (1);
	}
	while (index < argc)
	{
		sum += atoi(argv[index]);
		index += 1;
	}
	printf("%d\n", sum);
	return (0);
}
