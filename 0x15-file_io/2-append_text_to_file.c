#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * _str_len- calculate string length
 * @str: string to be processed
 * Return: length
 */
int _str_len(char *str)
{
	int index, len;
	char ch;

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
 * append_text_to_file - appends text to end of file
 * @filename: name of file to be processed
 * @text_content: null terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
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
