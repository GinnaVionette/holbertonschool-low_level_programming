#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates array of integers
 * @min: minimum integer
 * @max: max integer
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *nat;
	int i;

	if (min > max)
		return (NULL);

	nat = malloc(sizeof(int) * (max - min + 1));

	if (nat == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		nat[i] = min;
		min++;
	}
	return (nat);
}
