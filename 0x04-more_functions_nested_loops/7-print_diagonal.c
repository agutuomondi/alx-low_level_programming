#include "main.h"

/**
 * print_diaginal - draws a diagonal line on the terminal
 * @n: input variable
 * Return: Void
 */

void print_diagonal(int n)

{
	if (n <= 0)

	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

