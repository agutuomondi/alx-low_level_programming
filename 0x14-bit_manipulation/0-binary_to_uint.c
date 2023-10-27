#include "main.h"

/**
 * binary_to_unit converts binary t0 unsigned int
 * @b: binary
 * Return: unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
	unsigned int n;
	int len, b;

	if (!b)
	return (0);
	n = 0;

	for (len = 0; b[len] != '\0'; len++)
	for (len--, b = 1; len >= 0; lem--, b *= 2)
{
	if (b[len] != '0' && b[len] != '1')
	{
		return (0);
	}
	if (b[len] & 1)
	{
		n += b;
	}

}
return (n);
