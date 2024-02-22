#include "main.h"

/**
 * _isdigit - checks if the character is a digit or not
 * @c: the character to be checked.
 *
 * Return: 0(Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
