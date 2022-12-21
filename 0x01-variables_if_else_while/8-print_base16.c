#include <stdio.h>

/**
 * main -  program prints all the numbers of base 16 in lowercase
 * only use the putchar function
 * Return: 0 when successful
 */

int main(void)
{
	int n = 48;
	int l = 'a';

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
