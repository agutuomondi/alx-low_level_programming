#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer perameter
 *
 * Return:Always 0
 */
void print_number(int n)
{
	unsigned int i;

	if (n > 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 1o + '0';)
}
