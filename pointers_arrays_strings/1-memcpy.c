#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer
 * @src: source to be copied from
 * @n: number of bytes to copy from
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
