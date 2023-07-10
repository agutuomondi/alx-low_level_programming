#include "main.h"
#include <stdio.h>

/**
 * main - name of the program.
 * @argc: count arguments.
 * @argv: arguments.
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int b = 0;

	if (argc > 0)
	{
		while (b < argc)
		{
			printf("%s\n", argv[b]);
			b++;
		}
	}
	return (0);
}
