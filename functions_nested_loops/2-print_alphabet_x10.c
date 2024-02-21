#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - make the alphabet in 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{

	int n = 0;
	char c;

	while (n++ <= 9)
	{
		for (c = 'a'; n <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
