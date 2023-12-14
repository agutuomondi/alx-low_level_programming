#include "main.h"

/**
 * _strchr - program entry point.
 * @s: input value.
 * @c: input value.
 * Return: 0 on success.
 */

char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}

