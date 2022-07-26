#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * copy_file- copies content of a file to another
 * @file_from: name of file to copy from
 * @file_to: name of file to copy to
 * Return: 1 on success, -1 on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd, fd2, status, status2;
	char *content_buffer;
	int content_read, content_written;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	content_buffer = malloc(sizeof(char) * 1024);
	content_read = read(fd, content_buffer, 1024);
	if (content_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	else if (content_read < 1024 && content_read >= 0)
	{
		content_written = write(fd2, content_buffer, content_read);
		if (content_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	else
	{
		content_written = write(fd2, content_buffer, content_read);
		if (content_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		content_read = read(fd, content_buffer, 1024);
		if (content_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
			exit(98);
		}
		if (content_read == 1024)
		{
			while (content_read == 1024)
			{
				content_written = write(fd2, content_buffer, content_read);
				if (content_written < 0)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
					exit(99);
				}
				content_read = read(fd, content_buffer, 1024);
				if (content_read < 0)
				{
					dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
					exit(98);
				}
				if (content_read < 1024)
				{
					content_written = write(fd2, content_buffer, content_read);
					if (content_written < 0)
					{
						dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
						exit(99);
					}
					break;
				}
			}
		}
		else
		{
			content_written = write(fd2, content_buffer, content_read);
			if (content_written < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				exit(99);
			}
		}
	}
	free(content_buffer);
	status = close(fd);
	status2 = close(fd2);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (status2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}
int main(int argc, char **av)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	copy_file(av[1], av[2]);
	return (0);
}
