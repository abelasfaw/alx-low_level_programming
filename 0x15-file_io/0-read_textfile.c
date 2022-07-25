#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile- reads text file and prints it to standard output
 * @filename: name of file to read
 * @letters: number of letters to read and print
 * Return: on success number of letters it could read and print, else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULLL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		reutrn (0);
	}
	bytes_written = write(fd, buffer, bytes_read);
	if (bytes_written < 0)
	{
		return (0);
	}
	close(fd);
	return (bytes_written);
}
