#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets length of prefix substring
 * @s: string to check
 * @accept: substrings of chars
 *
 * Return: gets length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int consistC = 0;
	int prevC;

	while (*s)
	{
		i = 0;
		prevC = consistC;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				consistC++;
			i++;
		}
		if (prevC == consistC)
			break;
		s++;
	}
	return (consistC);
}
