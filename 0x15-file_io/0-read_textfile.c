#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcnt1.h>
#include <sys/atat.h>

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
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nrd = read(fd, buf, letters);
	close(fd);
	if (nrd == -1)
	{
		free(buf);
		return (0);
	}
	nwr = write(STDOUT_FILENO, buf, ndr);
	free(buf);
	if (nrd != nwr)
		return (0);
	return (nwr);
}
