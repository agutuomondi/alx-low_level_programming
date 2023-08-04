#include "main.h"

/**
 * get_endianness - check for endianess
 * Return: 0 or 1 if little ending
 */

int get_endianness(void)
{
	unsigned int k;
	char *c;

	k = 1;
	c = (char *) &k;
	return ((int)*c);
}
