#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check for alphabetical order
 * @c: the character to be checked
 * Return: 1 for alphabetical character or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
