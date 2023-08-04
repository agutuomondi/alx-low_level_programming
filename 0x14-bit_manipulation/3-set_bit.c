#include "main.h"

/**
 * set_bit - set bit valuea
 * @n: pointer
 * @index: bit index
 * Return: 1 if ok, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;
	*n = (*n | b);
	return (1);
}
