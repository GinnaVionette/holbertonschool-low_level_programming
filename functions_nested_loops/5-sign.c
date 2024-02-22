#include <stdio.h>
#include "main.h"

/**
 * main - print sign of the number
 * @c: the number to be checked
 *
 * Return: 1 for positive, -1 for negative or 0 for anything else
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
