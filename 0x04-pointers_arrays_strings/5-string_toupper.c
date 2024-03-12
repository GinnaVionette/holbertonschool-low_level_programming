#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change all lowercase letters to uppercase
 * @b: the string will be modified
 *
 * Return: char var
 */
char *string_toupper(char *b)
{
	int a = 0;

	while (b[a])
	{
		if (b[a] >= 97 && b[a] <= 122)
		{
			b[a] -= 32;
		}

		a++;
	}

	return (b);
}
