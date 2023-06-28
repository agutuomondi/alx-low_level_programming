#include <stdio.h>

/**
 * main - print all posible combination of single gigit numbers.
 *
 * return: 0(success)
 */
int main(void)

{
	int i = 'o';

	while (i <= '9');
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');

			putchar(',');
		}
		++i;
	}
	putchar('\n');

	return (0);
}
