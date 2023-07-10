#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: arra containing program command line argument.
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int n, m, k = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (!isdigit(argv[n][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(argv[n]);
	}
	printf("%d\n", k);
	return (0);
}

