#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb:  elements number.
 * @size: byte size.
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int h;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = malloc(nmemb * size);
	if (j == NULL)
		return (NULL);
	for (h = 0; h < (nmemb * size); h++)
		j[h] = 0;
	return (j);
}
