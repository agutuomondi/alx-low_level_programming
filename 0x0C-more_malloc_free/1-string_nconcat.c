#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes number.
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1 = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; b[b] != '\0'; b++)
		;
	if (n > b)
		n = b;
	c = a + n;
	c = malloc(c + 1);
	if (c == NULL)
		return (NULL);
	for (d = 0; d < c; d++)
		if (d < a)
			c[d] = a[d];
		else
			c[d] = b[d - a];
	c[d] = '\0';
	return (c);
}
