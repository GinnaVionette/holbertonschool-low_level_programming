#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
