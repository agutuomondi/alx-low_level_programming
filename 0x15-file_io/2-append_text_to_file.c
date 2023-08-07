#include "main.h"

/**
 * append_text_to_file - append text to the end file
 * @filename: filename
 * @text_content: added content
 * Return: 1 if file exits -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int m;
	int n;
	int r;

	if (!filename)
		return (-1);
	m = open(filename, O_WRONLY | O_APPEND);
	if (m == -1)
		return (-1);
	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			r = write(m, text_content, n);
		if (r == -1)
			return (-1);
	}
	close(m);
	return (1);
}
