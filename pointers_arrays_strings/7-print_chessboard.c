#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chessboard
 * @a : chessboard to print
 *
 * Return: print chessboard
 */
void print_chessboard(char (*a)[8])
{
	int subC, primC = 0;

	while (primC < 8)
	{
		subC = 0;
		while (subC < 8)
			_putchar(a[primC][subC++]);
		_putchar('\n');
		primC++;
	}
}
