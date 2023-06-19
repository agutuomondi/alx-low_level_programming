#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Print all the letters except q and e
 * Return: Aways o (success)
 */
int main(void)
{
	int n = 97;
	while (n <= 122)
	{
		if (n == 101 || n== 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}



