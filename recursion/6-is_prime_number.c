#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if input integer is prime number,
 * otherwise return 0
 * @n: integer
 *
 * Return: either 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	else if (n % 9 == 0 || n % 7 == 0)
		return (0);
	else
		return (1);
}
