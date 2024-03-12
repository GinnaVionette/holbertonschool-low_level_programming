#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to print in reverse
 *
 * Return: print string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
