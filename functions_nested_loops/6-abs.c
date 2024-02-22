#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute number of integer
 * @n: the number to be computed
 *
 * Return: absolute value of number zero
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
