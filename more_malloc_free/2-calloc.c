#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: size of array
 * @size: size of type
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int n;
	unsigned int a;
	char *t;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = nmemb * size;
	array = malloc(a);
	t = (char *)array;
	if (t != NULL)
	{
		for (n = 0; n < a; n++)
			t[n] = 0;
		return (t);
	}
	return (NULL);
}
