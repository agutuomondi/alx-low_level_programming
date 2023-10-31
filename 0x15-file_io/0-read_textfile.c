#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * read_textfile  - reads the text file and prints letter
 * @filename: filename
 * @letters: number of leters to be printed
 * Return: o, number of leters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fd);
	free(buffer);

	return (nwr);
}
