#include "main.h"

/**
 * _POW - func calculates (base ^ power)
 * @base: baseof exponent
 * @power: power exponent
 * return: base^power
 */

unsigned long int _POW(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int b;

	num = 1;
	for (b = 1; b <= power; b++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	divisor = _POW(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >> = 1;
	}
}


