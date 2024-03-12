#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: the string to be treated
 */
void puts2(char *str)
{
	int w;
	int q = 0;

	while (str[q] != '\0')
	{
		q++;
	}

	for (w = 0; w < q; w += 2)
	{
		_putchar(str[w]);
	}

	_putchar('\n');
}
