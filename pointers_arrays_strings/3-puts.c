#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
