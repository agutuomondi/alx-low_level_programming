#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies to new memory space allocation.
 * @str: string to be dublicated.
 * Return: 0
 */

char *_strdup(char *str)
{
	char *a;
	int b = 0, c = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c])
	{
		c++;
	}
	a = malloc((sizeof(char) * c) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	while (b < c)
	{
		a[b] = str[b];
		b++;
	}

	a[b] = '\0';
	return (a);
}

