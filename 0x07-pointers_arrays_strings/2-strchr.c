#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: string to be searched.
 * @c: character to be located.
 * Return: if c is found - pointer to the first occurence.
 * NULL - if c is not found.
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
