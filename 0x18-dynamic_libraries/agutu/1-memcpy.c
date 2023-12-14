#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: where memory is stored.
 * @src: where memory is copied.
 * @n: number of bytes
 * Return: copied memory with n byte change
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int u = 0;
	int v = n;

	for (; u < v; u++)
	{
		dest[u] = src[u];
		n--;
	}
	return (dest);
}
