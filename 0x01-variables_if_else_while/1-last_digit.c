#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -program to assign random number to variable n each time it is executed
 *The string Last digit of n
 *Return: 0 if successful
 */

int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	}
	else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	else if (lastn < 6 && lastn != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
