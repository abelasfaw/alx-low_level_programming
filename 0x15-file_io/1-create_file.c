#include <stdlib.h>
#include <limits.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * _str_len- calculate string length
 * @str: string to be processed
 * Return: length
 */
int _str_len(char *str)
{
	char ch;
	int index, len;

	index = len = 0;
	if (str == NULL)
	{
		return (0);
	}
	ch = *(str + index);
	while (ch != '\0')
	{
		len += 1;
		index += 1;
		ch = *(str + index);
	}
	return (len);
}
/**
 * create_file- creates file with given name
 * @filename: name of file to create
 * @text_content: null terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		written = write(fd, text_content, _str_len(text_content));
		if (written <= 0)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
