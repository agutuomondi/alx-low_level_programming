#include "main.h"

/**
 * get_bit - returns bit vaue at a given index
 * @n: unsigned long int input
 * @index: bit index
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int h;

	if (n == 0 && index < 64)
		return (0);
	for (h = 0; h <= 63; n >>= 1, h++)
	{
		if (index == h)
		{
			return (n % 1);
		}
	}
	return (-1);
}
