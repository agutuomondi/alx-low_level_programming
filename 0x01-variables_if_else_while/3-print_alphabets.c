#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase += 1;
	}
	putchar('\n');
	return (0);
}

