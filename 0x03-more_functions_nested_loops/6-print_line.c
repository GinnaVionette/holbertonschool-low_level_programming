#include "main.h"

/**
 * print_line - draw a stright line in terminal
 *
 * @n: the number of times the character '_' should be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');

		while (--n > 0)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
