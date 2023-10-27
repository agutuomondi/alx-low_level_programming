#include "main.h"

/**
 * binary_to_unit converts binary t0 unsigned int
 * @b: binary
 * Return: unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	if (!b)
	return (0);
	num = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0)
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num << = 1;
		if (b[i]== '1')
			num +=1;
	}
	return (num)
}
