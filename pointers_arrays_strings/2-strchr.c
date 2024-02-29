#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a charater in a string
 * @s: string to check
 * @c: charcter to find in string
 *
 * Return: find character in the string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);

		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
