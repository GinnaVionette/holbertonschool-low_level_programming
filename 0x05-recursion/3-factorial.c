#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of given number
 * @n: integer to check factorial of
 *
 * Return: give factorial of integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
