#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lowercase
 *@c: the character to be checked
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
