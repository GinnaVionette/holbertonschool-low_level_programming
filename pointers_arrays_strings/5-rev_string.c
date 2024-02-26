#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be modified
 */
void rev_string(char *s)
{
	int n, c, t;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (t = 1; t < c; t++)
	{
		a++;
	}

	for (n = 0; n < (c / 2); n++)
	{
		aux = s[n];
		s[n] = *a;
		*a = aux;
		a--;
	}
}
