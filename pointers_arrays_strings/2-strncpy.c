#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: pointer
 * @src: string to be copied
 * @n: integer
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
