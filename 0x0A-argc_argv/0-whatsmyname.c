#include <stdio.h>
/**
 * main- main functions
 * @argc: number of command line arguments
 * @argv: command line argumenst array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	argc += 1;
	printf("%s\n", argv[0]);
	return (0);
}
