#include "main.h"

/**
 * read_testfile - reads the text file and prints letter
 * @filename: filename
 * @letters: number of leters to be printed
 * Return: o, number of leters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);
	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	r = read(d, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(d);

	free(buf);

	return (w);
}
