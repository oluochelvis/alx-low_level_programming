#include <stdio.h>
#include "main.h"

/**
 * swap_int - function to swap the values of two integers.
 * @a: first value provided
 * @b: Second value provided
 * int c: address the swapped value will be sent to
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}