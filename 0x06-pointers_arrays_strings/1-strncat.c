#include "main.h"
/**
 * _strncat -  function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be concatenated.
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, h;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (h = 0; h < n && src[h] != '\0'; h++, length_of_string++)
	{
		dest[length_of_string] = src[h];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
