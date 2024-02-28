#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses content of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *p, i, tch, l;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (l = 0; l < i / 2; l++)
	{
		tch = a[l];
		a[l] = *p;
		*p = tch;
		p--;
	}
}
