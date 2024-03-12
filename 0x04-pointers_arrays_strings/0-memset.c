#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory witha constant byte
 * @s: pointer to start of memory
 * @b: constant byte to fill with
 * @n: number of bytes to fill in
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
