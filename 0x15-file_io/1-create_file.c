#include "main.h"

/**
 * create_file - creats a file
 * @filename: filename
 * @text_content: content in a file
 * Return: 1 on success 0r -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int m;
	int n;
	int r;

	if (!filename)
		return (-1);
	m = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (m == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (n = 0; text_content[n]; n++)
		;
	r = write(m, text_content, n);
	if (r == -1)
		return (-1);
	close(m);
	return (1);
}


