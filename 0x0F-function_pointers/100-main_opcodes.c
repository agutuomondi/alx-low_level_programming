#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes.
 * @argc: number of arguments.
 * @argv: array of pointer.
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int b, i;
	int (*adress)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)adress;
		printf("%.2x", opcode);

		if (i == b - 1)
			continue;
		printf(" ");
		adress++;
	}
	printf("\n");
	return (0);
}
