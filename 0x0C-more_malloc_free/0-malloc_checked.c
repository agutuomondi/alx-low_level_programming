#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: bytes to allocate.
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	char *f;

	f =  malloc(b);
	if (f == NULL)
		exit(98);
	return (f);
}

