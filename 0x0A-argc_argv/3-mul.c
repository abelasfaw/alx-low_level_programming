#include <stdio.h>
#include <stdlib.h>
/**
 * main- main function
 * @argc: number of command line arguments
 * @argv: command line arguments array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
