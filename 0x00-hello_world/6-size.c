#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char:%dbyte(s)\n",Sizeof(char));
	printf("Size of an int:%dbyte(s)\n",Sizeof(int));
	printf("Size of a long int:%dbyte(s)\n",Sizeof(long int));
	printf("Size of a long long int:%dbyte(s)\n",Sizeof(long long int));
	printf("Size of a float:%dbyte(s)\n",Sizeof(float));
	return (0);
}
