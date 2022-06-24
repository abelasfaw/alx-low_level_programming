#include <stdio.h>
/**
 * main- main function
 * @argc: number of command line arguments
 * @argv: command line arguments array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc);
	return (0);
}
