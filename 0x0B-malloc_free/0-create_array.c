#include "main.h"
#include <stdlib.h>

/**
 * create_array - an arry for char.
 * @c: char to nitialize.
 * @size: number of bytes to allocate
 * Return: pointer to arry, null if it falls
 */

char *create_array(unsigned int size, char c)
{
	char *t = malloc(size);

	if (size == 0 || t  == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		t[size] = c;
	}
	return (t);
}
