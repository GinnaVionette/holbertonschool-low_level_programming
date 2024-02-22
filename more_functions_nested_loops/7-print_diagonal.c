#include "main.h"

/**
 * print_diagonal - print diagonal line in terminal
 *
 * @n: the number of times the character '\' gets printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		_putchar('\\');

		while (--n > 0)
		{
			_putchar('\\');
		}
	}

	_putchar('\n');
}
