#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen- calculates length of a string
 * @str: string to be processed
 * Return: length of string
 */
int _strlen(char *str)
{
	char ch;
	int index;
	int length;

	index = 0;
	length = 0;
	ch = *(str + index);
	while (ch != '\0')
	{
		length += 1;
		index += 1;
		ch = *(str + index);
	}
	return (length);
}
/**
 * _arg_concat- concatenates command line arguments in a new memory space
 * @argv: command line arguments
 * @argc: number of comand line arguments
 * @dest: memory space to hold concatenated arguments
 * Return: pointer to concatenated string
 */
char *_arg_concat(char **argv, unsigned int argc, char *dest)
{
	char ch;
	unsigned int args_counter;
	int dest_index, args_index;

	dest_index = 0;
	args_index = 0;

	for (args_counter = 0; args_counter < argc; args_counter++)
	{
		ch = *((argv[args_counter]) + args_index);

		while (ch != '\0')
		{
			*(dest + dest_index) = ch;
			args_index += 1;
			dest_index += 1;
			ch = *(argv[args_counter] + args_index);
		}
		*(dest + dest_index) = '\n';
		dest_index += 1;
		args_index = 0;
	}
	*(dest + dest_index + 1) = '\0';
	return (dest);
}
/**
 * argstostr- concatenates all arguments of a program
 * @ac: number of arguments
 * @av: arguments array
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{

	int total_length, counter;
	char *args;

	total_length = 0;
	counter = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < ac; counter++)
	{
		total_length += (_strlen(av[counter]) + 1);
	}
	/** addition for '\0'*/
	total_length += 1;
	args = malloc(sizeof(char) * total_length);
	if (args != NULL)
	{
		return (_arg_concat(av, ac, args));
	}
	return (NULL);

}
