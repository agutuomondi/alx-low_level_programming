#include "main.h"

/**
 * clear_bit - sets vit value to 0
 * @n: pointer
 * @index: bit index
 * Return: 1 if ok, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int f;

	if (index > 63)
		return (-1);
	f = 1 << index;

	if (*n & f)
		*n ^= f;
	return (1);
}
