#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints array of integers,
 * followed by new line
 * @a: input array
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
