#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept: set of byte to be searched for.
 * Return: if a set is matched - pointer to the byte.
 * NULL - if no set is matched.
 */

char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for  (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s++;
	}
	return ('\0');
}

