#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 * code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = '0';

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
