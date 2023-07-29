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
	unsigned int a1, a2, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a1 = 0; s1[a1] != '\0'; a1++)
		;
	for (a2 = 0; s2[a2] != '\0'; a2++)
		;
	if (n > a2)
		n = a2;
	c = a1 + n;
	t = malloc(c + 1);
	if (t == NULL)
		return (NULL);
	for (d = 0; d < c; d++)
		if (d < a1)
			t[d] = s1[d];
		else
			t[d] = s2[d - a1];
	t[d] = '\0';
	return (t);
}
