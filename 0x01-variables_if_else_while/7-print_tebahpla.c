#include <stdio.h>

/**
 * main - program that prints lowercase alphabet in reverse.
 * Only use the putchar function
 * Return: 0
 */

int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n -= 1;
	}
	putchar('\n');
	return (0);
}
