#include "main.h"

/**
 * read_textfile - reads text file and prints letters.
 * @filename: file name
 * @letters: number of letters printed
 * Return: number of letters printed
 * return 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int m;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	m = open(filename, O_RDONLY);
	if (m == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(m, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(m);
	free(buf);
	return (nwr);
}
