#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words of string
 * @y: ...
 *
 * Return: char value
 */
char *cap_string(char *y)
{
	int r = 0, i;
	int dfgh = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (y[r])
	{
		i = 0;

		while (i < dfgh)
		{
			if ((r == 0 || y[r - 1] == spc[i]) && (y[r] >= 97 && y[r] <= 122))
				y[r] -= 32;

			i++;
		}

		r++;
	}

	return (y);
}
