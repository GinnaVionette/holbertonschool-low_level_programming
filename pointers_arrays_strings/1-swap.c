#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer's value to be swapped
 * @b: the second integer's value to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
