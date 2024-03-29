#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of square
 * matrix of integers
 * @a: square matrix of integers
 * @size: size of matrix
 *
 * Return: Always void.
 */
void print_diagsums(int *a, int size)
{
	int primC, sum1, sum2, diagC1, diagC2, row;

	primC = 0, sum1 = 0, sum2 = 0, diagC1 = 0, diagC2 = 0, row = 0;
	while (primC < size * size)
	{
		if (primC == diagC1 + (row * size))
			sum1 += a[primC];
		if (primC == (size - diagC2 - 1) + (row * size))
			sum2 += a[primC];
		if (((primC + 1) % size) == 0)
			row++, diagC1++, diagC2++;
		primC++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
