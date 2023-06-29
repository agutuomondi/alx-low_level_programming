#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to detination string.
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string, n;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (n = 0; src[n] != '\0'; n++, length_of_string++)
	{
		dest[length_of_string] = src[n];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
