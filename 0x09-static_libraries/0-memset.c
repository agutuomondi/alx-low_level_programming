#include "main.h"

/**
 * _memset - fills block memory with specific value.
 * @s: starting adress of memory to be filled.
 * @b: desired value.
 * @n: number of bytes to be changed.
 * Return: change array with a new value for n byte.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
