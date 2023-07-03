#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @n: function copies
 * @src: byte from memory area
 * @dest: to memory area
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t = 0;

	while (t < n)
	{
		dest[t] = src[t];
		t++;
	}
	return (dest);
}
