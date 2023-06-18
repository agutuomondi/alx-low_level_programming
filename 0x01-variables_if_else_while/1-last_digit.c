#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * print the last digit of the number stored in the variable n
 * Rturn: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastnum > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n",n,lastnum);
	}
	else if (lastnum == 0)
	{
		printf("last digit of %d is %d and is o\n",n, lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n,lastnum);
	}
	return (0);
}
