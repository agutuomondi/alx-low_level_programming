#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: string to use in program
 * return: interger
 */

int _atoi(char *s)
{
	int sig = 1, f = 0;
	unsigned int unsig = 0;

	while (!(s[f] <= '9' && s[f] >= '0') && s[f] != '\0')
	{
		if (s[f] == '-')
			sig *= -1;
		f++;
	}
	while (s[f] <= '9' && (s[f] >= '0' && s[f] != '\0'))
	{
		unsig = (unsig * 10) + (s[f] - '0');
		f++;
	}
	unsig *= sig;
	return (unsig);
}


