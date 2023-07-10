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
	int b = 0, c = 0;

	if (str == NULL)
	{
		return (NULL);
		b = 0;
	}
	while (str[c] != '\0')
	{
		c++;
		a = malloc(sizeof(char) * (c + 1));
	}
	if (a == NULL)
	{
		return (NULL);
	}
	while ((a[b] = str[b]) != '\0')
	{
		b++;
	}
	return (a);
}

