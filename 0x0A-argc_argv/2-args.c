#include <stdio.h>
/**
 * main- main function
 * @argc: number command line arguments
 * @argv: command line arguments array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index += 1;
	}
	return (0);
}
