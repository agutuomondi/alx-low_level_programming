#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - converts params to program to string.
 * @ac: argument count.
 * @av: argument vector.
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, m = 0, n = 0, p = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (m < ac)
	{
		while (av[m][n])
		{
			ch++;
			n++;
		}
		n = 0;
		m++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);

	m = 0;
	while (av[m])
	{
		while (av[m][n])
		{
			s[p] = av[m][n];
			p++;
			n++;
		}
		s[p] = '\n';

		n = 0;
		p++;
		m++;
	}
	p++;
	s[p] = '\0';
	return (s);
}
